#pragma once
#include"Event.h"
#include<list>
using namespace std;

/* 변수 소개 : -list<Event> m_eventList[12][31]=> 만들어 둔 event 클래스를 이용하여 리스트 배열을 이용하여 일차적으로 달을 엮어주고 이차적으로 각 달에 대한 일의 리스트를 이어주었다
			   -각 일에 대한 수입 지출에 대한 변수, 각 달에 대한 수입 지출 변수
   함수 소개 : -각 변수를 외부에서 불러오기 오기 위한 get함수들
			   -INSERT : 일에 대한 건 삽입
			-DELETE : 일에 대한 건 삭제
			-UPDATE : 일에 대한 건 수정
			-FILEREAD,FILEWRUTE : 파일 입출력
 */
class MoneyDiary {
public:
	list<Event> m_eventList[12][31];


private:
	int m_nDayPmoney[12][31] = { {0}, };
	int m_nDayMmoney[12][31] = { {0}, };
	int m_nMonthPmoney[12] = { 0 };
	int m_nMonthMmoney[12] = { 0 };
public:
	//constructor
	MoneyDiary() {}
	~MoneyDiary() {}

	//get, set
	int GetDP(int month, int day) {
		return m_nDayPmoney[month][day];
	}
	int GetDM(int month, int day) {
		return m_nDayMmoney[month][day];
	}
	int GetMP(int month) {
		return m_nMonthPmoney[month];
	}
	int GetMM(int month) {
		return m_nMonthMmoney[month];
	}

	//functionality
	void InsertEvent(int, int, bool, int, string);
	void UpdateEvent(int, int, bool, int, string, int);
	void DeleteEvent(int, int, int);
	void FileRead();
	void FileWrite();
};