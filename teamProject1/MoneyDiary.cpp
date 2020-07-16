#include "MoneyDiary.h"
#include<windows.h>
#include<algorithm>
#include<fstream>
using namespace std;
/*
   INSERT : ��,��,���Կ����� Ÿ��, �޾�,�뵵�� �Է� �޾� �� �ϰ� �޿� ���� ������ ������ ����� �߰��Ͽ�
			������ �����ϰ� list �迭 ������ �̾��ش�
   UPDATE : �ش� �Ͽ��� �����ϰ� ���� ������ �ε���, �����ϰ� ���� ������ �Է� �޾Ƽ� �� �ε����� ����
			����Ʈ�� �����ϴ� ������ FOR������ �̵��Ͽ� SET�Լ��� ������ �������ش�
   DELETE : �ش� �Ͽ��� �����ϰ� ���� ������ �ε����� �Է¹޾� FOR���� �̿��� �ش� �ε��� ����Ʈ�� �̵��Ͽ�
			�� �Ͽ� ���� ����, ���� ����  �� �޿� ���� ����, ���� ���� �� ����Ʈ���� ����
   FILEREAD : �Լ� ȣ�� �� ���Ͽ� �ִ� ��ü �ؽ�Ʈ�� WHILE������ ���� �� �о���� ���� �������ְ� ����Ʈ�� ������ ������
			  ���ָ� ��,���� �� ���� ���� �ݾ��� ����
   FILEWRITE : ���� ������ �̿��� ����Ʈ�� �޿� ���� �ϵ��� ������� �����ִ� ���� ��� �޿� ���� �ݺ��ؼ� �ѹ���
			�ؽ�Ʈ�� ����

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