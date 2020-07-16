#include"Event.h"

Event::Event() {
	m_bType = true;
	m_nMoney = 0;
	m_sPurpose = "";
}//기본 생성자입니다.

Event::Event(bool type, int money, string purpose) {
	m_bType = type;
	m_nMoney = money;
	m_sPurpose = purpose;
}//파라미터 생성자입니다.

//get,set method
bool Event::GetType() {
	return m_bType;
}

int Event::GetMoney() {
	return m_nMoney;
}

string Event::GetPurpose() {
	return m_sPurpose;
}

void Event::SetType(bool type) {
	m_bType = type;
}

void Event::SetMoney(int money) {
	m_nMoney = money;
}

void Event::SetPurpose(string purpose) {
	m_sPurpose = purpose;
}