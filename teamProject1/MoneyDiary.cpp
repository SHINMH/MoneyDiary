#include "MoneyDiary.h"
#include<windows.h>
#include<algorithm>
#include<fstream>
using namespace std;
/*
   INSERT : 달,일,수입에대한 타입, 급액,용도를 입력 받아 각 일과 달에 대한 정보를 삽입한 결과를 추가하여
			변수를 갱신하고 list 배열 꼬리에 이어준다
   UPDATE : 해당 일에서 수정하고 싶은 내용의 인덱스, 수정하고 싶은 내용을 입력 받아서 그 인덱스에 대한
			리스트가 존재하는 곳으로 FOR문으로 이동하여 SET함수로 변수를 변경해준다
   DELETE : 해당 일에서 삭제하고 싶은 내용의 인덱스를 입력받아 FOR문을 이용해 해당 인덱스 리스트로 이동하여
			총 일에 대한 수입, 지출 갱신  총 달에 대한 수입, 지출 갱신 후 리스트에서 제거
   FILEREAD : 함수 호출 시 파일에 있는 전체 텍스트를 WHILE문으로 한줄 씩 읽어오며 건을 생성해주고 리스트에 꼬리에 연결을
			  해주며 달,일의 총 수입 지출 금액을 갱신
   FILEWRITE : 이중 포문을 이용해 리스트에 달에 속한 일들을 순서대로 적어주는 것을 모든 달에 대해 반복해서 한번에
			텍스트에 기입

*/
void MoneyDiary::InsertEvent(int month, int day, bool type, int money, string purpose) {
	Event event(type, money, purpose);
	if (type == true) {
		m_nMonthPmoney[month] += money;
		m_nDayPmoney[month][day] += money;
	}
	else if (type == false) {
		m_nMonthMmoney[month] += money;
		m_nDayMmoney[month][day] += money;
	}
	m_eventList[month][day].push_back(event);
}

void MoneyDiary::UpdateEvent(int month, int day, bool type, int money, string purpose, int index) {
	list<Event>::iterator iter = m_eventList[month][day].begin();

	for (int i = 0; i < index; i++) {
		iter++;
		if (iter == m_eventList[month][day].end()) {
			return;
		}
	}

	(*iter).SetType(type);
	(*iter).SetMoney(money);
	(*iter).SetPurpose(purpose);
}

void MoneyDiary::DeleteEvent(int month, int day, int index) {

	int Pindex = 0;
	list<Event>::iterator iter = m_eventList[month][day].begin();

	for (int i = 0; i < index; i++) {
		iter++;
		if (iter == m_eventList[month][day].end()) {
			return;
		}
	}

	if (iter->GetType() == true) {
		m_nMonthPmoney[month] -= iter->GetMoney();
		m_nDayPmoney[month][day] -= iter->GetMoney();
	}
	else if (iter->GetType() == false) {
		m_nMonthMmoney[month] -= iter->GetMoney();
		m_nDayMmoney[month][day] -= iter->GetMoney();
	}
	m_eventList[month][day].erase(iter);
}


void MoneyDiary::FileRead() {
	int month;
	int day;
	bool type;
	int money;
	string purpose;
	ifstream fin;
	
	fin.open("diary.txt");

	while (fin >> month >> day >> type >> money >> purpose) {
		
		Event event(type, money, purpose);
		if (type == true) {
			m_nDayPmoney[month][day] += money;
			m_nMonthPmoney[month] += money;
		}
		else if (type == false) {
			m_nDayMmoney[month][day] += money;
			m_nMonthMmoney[month] += money;
		}

		m_eventList[month][day].push_back(event);
		
	}

	fin.close();
}

void MoneyDiary::FileWrite() {
	int month;
	int day;
	Event eventP;
	list<Event>::iterator iter;
	ofstream fout;

	fout.open("diary.txt");

	for (month = 0; month < 12; month++) {
		for (day = 0; day < 31; day++) {
			for (iter = m_eventList[month][day].begin(); iter != m_eventList[month][day].end(); iter++) {
				eventP = *iter;
				fout << month << " " << day << " " << eventP.GetType() << " " << eventP.GetMoney() << " " << eventP.GetPurpose()<<endl;
			}
		}
	}
	fout.close();
}