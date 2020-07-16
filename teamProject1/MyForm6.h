#pragma once
#include"MoneyDiary.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>

/*
��6�� �ε����� �ش��ϴ� ���� �������ִ� Ŭ�����Դϴ�.
��6�� ��4���� �Ӵϴ��̾, ��, ���� �޾Ƽ� �����˴ϴ�.
�ؽ�Ʈ�� �����ϰ� ���� �ε����� �����ϰ� ������ �մϴ�.
������ �Ӵϴ��̾ Ŭ������ DELETE�Լ��� ȣ�������ν� ����˴ϴ�.
���� ������, ��4�� �� �󺧰� ��ġ�ؽ�Ʈ�ڽ��� �ֽ�ȭ�մϴ�.
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
	/// MyForm6�� ���� ����Դϴ�.
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	private: MoneyDiary* diary;
			int month;
			int day;
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
		MyForm6(MoneyDiary* diary, int month, int day)
		{
			InitializeComponent();
			this->diary = diary;
			this->month = month;
			this->day = day;
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(465, 21);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::Button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(568, 21);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"���";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(15, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����ϰ� ���� ��ȣ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 21);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 25);
			this->textBox1->TabIndex = 4;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->ClientSize = System::Drawing::Size(667, 76);
			this->ControlBox = false;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = marshal_as<std::string>(this->textBox1->Text);
		int index = std::stoi(str)-1;
		diary->DeleteEvent(month, day, index);

		this->Close();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	};
}
