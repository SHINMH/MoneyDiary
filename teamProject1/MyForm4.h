#pragma once
#include"MoneyDiary.h"
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include"MyForm5.h"
#include"MyForm6.h"
#include"MyForm7.h"

/*
폼4는 오늘의 총합, 수입, 지출을 건별로 보여주는 클래스입니다.
폼4는 폼3에서 머니다이어리, 월, 일을 받아서 생성됩니다.
각 라벨은 오늘의 총합, 수입, 지출을 보여줍니다.
리치텍스트박스는 건별 총합, 수입, 지출을 보여줍니다.
각 버튼은 건을 추가, 수정, 삭제할 수 있습니다.
버튼을 클릭 시 해당 기능을 담당하는 폼(5, 6, 7)이 생성됩니다.
폼(5, 6, 7)이 닫히면, 각 라벨과 리치텍스트박스를 최신화합니다.
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
	/// MyForm4에 대한 요약입니다.
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	private: MoneyDiary* diary;
			int month;
			int day;
	public:
		MyForm4(MoneyDiary* diary, int month, int day)
		{
			InitializeComponent();
			//
			this->diary = diary;
			this->month = month;
			this->day = day;
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(58, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(58, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(276, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(495, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->richTextBox1->Location = System::Drawing::Point(50, 121);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(657, 281);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(639, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"뒤로가기";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::Button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(469, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"삽입";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::Button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(550, 418);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"삭제";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::Button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button4->Location = System::Drawing::Point(632, 418);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"수정";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::Button4_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(756, 462);
			this->ControlBox = false;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		int i = 1;
		list<Event>::iterator iter;
		label1->Text = "" + (month + 1) + "월 " + (day + 1) + "일";
		label2->Text = "총합 : " + (diary->GetDP(month, day) - diary->GetDM(month, day));
		label3->Text = "총 수입 : " + diary->GetDP(month, day);
		label4->Text = "총 지출 : " + diary->GetDM(month, day);

		for (iter = diary->m_eventList[month][day].begin(); iter != diary->m_eventList[month][day].end(); iter++) {
			System::String^ purpose = marshal_as<System::String^>((*iter).GetPurpose());

			if ((*iter).GetType() == true) {
				richTextBox1->Text += "" + i + ".수입 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			else {
				richTextBox1->Text += "" + i + ".지출 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			i++;
		}
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Owner->Visible = true;
		this->Close();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		teamProject1::MyForm5 form5(diary, month, day);
		form5.Owner = this;
		form5.ShowDialog();

		richTextBox1->ResetText();
		label2->Text = "총합 : " + (diary->GetDP(month, day) - diary->GetDM(month, day));
		label3->Text = "총 수입 : " + diary->GetDP(month, day);
		label4->Text = "총 지출 : " + diary->GetDM(month, day);
		int i = 1;
		list<Event>::iterator iter;
		for (iter = diary->m_eventList[month][day].begin(); iter != diary->m_eventList[month][day].end(); iter++) {
			System::String^ purpose = marshal_as<System::String^>((*iter).GetPurpose());

			if ((*iter).GetType() == true) {
				richTextBox1->Text += "" + i + ".수입 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			else {
				richTextBox1->Text += "" + i + ".지출 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			i++;
		}
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		teamProject1::MyForm6 form6(diary, month, day);
		form6.Owner = this;
		form6.ShowDialog();

		richTextBox1->ResetText();
		label2->Text = "총합 : " + (diary->GetDP(month, day) - diary->GetDM(month, day));
		label3->Text = "총 수입 : " + diary->GetDP(month, day);
		label4->Text = "총 지출 : " + diary->GetDM(month, day);
		int i = 1;
		list<Event>::iterator iter;
		for (iter = diary->m_eventList[month][day].begin(); iter != diary->m_eventList[month][day].end(); iter++) {
			System::String^ purpose = marshal_as<System::String^>((*iter).GetPurpose());

			if ((*iter).GetType() == true) {
				richTextBox1->Text += "" + i + ".수입 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			else {
				richTextBox1->Text += "" + i + ".지출 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			i++;
		}
	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		teamProject1::MyForm7 form7(diary, month, day);
		form7.Owner = this;
		form7.ShowDialog();

		richTextBox1->ResetText();
		label2->Text = "총합 : " + (diary->GetDP(month, day) - diary->GetDM(month, day));
		label3->Text = "총 수입 : " + diary->GetDP(month, day);
		label4->Text = "총 지출 : " + diary->GetDM(month, day);
		int i = 1;
		list<Event>::iterator iter;
		for (iter = diary->m_eventList[month][day].begin(); iter != diary->m_eventList[month][day].end(); iter++) {
			System::String^ purpose = marshal_as<System::String^>((*iter).GetPurpose());
			
			if ((*iter).GetType() == true) {
				richTextBox1->Text += "" + i + ".수입 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			else {
				richTextBox1->Text += "" + i + ".지출 : " + (*iter).GetMoney() + "\t용도 : " + purpose + "\n";
			}
			i++;
		}
	}
	};
}
