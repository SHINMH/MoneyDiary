#include"MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
/*
	���� �����Դϴ�.
	form1�� �������ݴϴ�.
*/
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	teamProject1::MyForm1 form1;
	Application::Run(% form1);
}