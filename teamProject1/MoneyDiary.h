#pragma once
#include"Event.h"
#include<list>
using namespace std;

/* ���� �Ұ� : -list<Event> m_eventList[12][31]=> ����� �� event Ŭ������ �̿��Ͽ� ����Ʈ �迭�� �̿��Ͽ� ���������� ���� �����ְ� ���������� �� �޿� ���� ���� ����Ʈ�� �̾��־���
			   -�� �Ͽ� ���� ���� ���⿡ ���� ����, �� �޿� ���� ���� ���� ����
   �Լ� �Ұ� : -�� ������ �ܺο��� �ҷ����� ���� ���� get�Լ���
			   -INSERT : �Ͽ� ���� �� ����
			-DELETE : �Ͽ� ���� �� ����
			-UPDATE : �Ͽ� ���� �� ����
			-FILEREAD,FILEWRUTE : ���� �����
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