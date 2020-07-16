#pragma once
#include<iostream>
#include<string>
using namespace std;


/*
	이 클래스는 수입과 지출에 해당하는 건에 대한 정보를 가지는 클래스입니다.
*/

class Event {
protected:
	//금액, 용도, 날짜,
	bool m_bType;//true - 수입, false - 지출
	int m_nMoney;//자연수만 가능
	string m_sPurpose;//사용 용도

public:
	//constructor
	Event();
	Event(bool, int, string);
	~Event() {}

	//get, set
	bool GetType();
	int GetMoney();
	string GetPurpose();
	void SetType(bool);
	void SetMoney(int);
	void SetPurpose(string);
};