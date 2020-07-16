#include"MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
/*
	메인 실행입니다.
	form1을 실행해줍니다.
*/
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	teamProject1::MyForm1 form1;
	Application::Run(% form1);
}