#pragma once
#include<iostream>
#include<string>
using namespace std;


/*
	�� Ŭ������ ���԰� ���⿡ �ش��ϴ� �ǿ� ���� ������ ������ Ŭ�����Դϴ�.
*/

class Event {
protected:
	//�ݾ�, �뵵, ��¥,
	bool m_bType;//true - ����, false - ����
	int m_nMoney;//�ڿ����� ����
	string m_sPurpose;//��� �뵵

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