#pragma once
#include"MoneyDiary.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>

/*
	�� Ŭ������ ������ �����ϴ� Ŭ�����Դϴ�.
	moneydiary�� �����Ϳ� ��,���� �ش��ϴ� month,day�� ��������� ������ �ֽ��ϴ�.
	
	�����ڿ��� �̵��� �޾ƿ� �����մϴ�.

	ȭ�鿡�� �� �Է��� �������� ���������� ��Ÿ���� radiocheckbox�� textbox 2��, ����,��ҹ�ư �ΰ��� �����Ǿ��ֽ��ϴ�.

	���� ��ư Ŭ����, checkbox�� textbox�� ������ �Ķ���ͷ� moneydiary�� insertEvent�Լ��� ȣ���Ͽ�,
	moneydiary�� ���� �߰��ϰ� �� ȭ���� �����մϴ�.

	��ҹ�ư Ŭ���� ȭ���� �����մϴ�.
*/

namespace teamProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	/// <summary>
	/// MyForm5�� ���� ����Դϴ�.
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	private: MoneyDiary* diary;
			int month;
			int day;
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
		MyForm5(MoneyDiary* diary, int month, int day)
		{
			InitializeComponent();
			//
			this->diary = diary;
			this->month = month;
			this->day = day;
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(483, 15);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::Button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(576, 15);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"���";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�ݾ�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"����/����";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 56);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 25);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 91);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(491, 25);
			this->textBox2->TabIndex = 5;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(16, 19);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 19);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"����";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(77, 19);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(58, 19);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->Text = L"����";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->ClientSize = System::Drawing::Size(667, 139);
			this->ControlBox = false;
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = marshal_as<std::string>(this->textBox1->Text);
		int money = std::stoi(str);
		System::String^ managed = textBox2->Text;
		std::string purpose = msclr::interop::marshal_as<std::string>(managed);

		if(radioButton1->Checked==true){
			diary->InsertEvent(month, day, true, money, purpose);
		}
		else if (radioButton2->Checked==true) {
			diary->InsertEvent(month, day, false, money, purpose);
		}
		this->Close();
	}//�ؽ�Ʈ �ڽ��� ������ string���� �����Ͽ� �Ķ���ͷ� �����Ͽ����ϴ�.
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
