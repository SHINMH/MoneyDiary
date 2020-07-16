#pragma once
#include"MoneyDiary.h"
#include"MyForm3.h"

/*
폼2는 올해의 총합, 수입, 지출을 월별로 보여주는 클래스입니다.
폼2는 폼1에서 받은 머니다이어리를 받아서 생성됩니다.
각 라벨은 올해의 총합, 수입, 지출을 보여주고
각 버튼은 월별 총합, 수입, 지출을 보여줍니다.
버튼을 클릭 시 각 월에 해당하는 값을 파라미터로 받아 폼3을 생성합니다.
폼3이 닫히면, 각 라벨과 버튼을 최신화합니다.
*/

namespace teamProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm2에 대한 요약입니다.
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	private:
		MoneyDiary* diary;
		int totalMMoney;
	public: int totalPMoney;
	public:
		MyForm2(MoneyDiary* throw_diary)
		{
			InitializeComponent();
			this->diary = throw_diary;
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button32;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(45, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::Button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(155, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 80);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::Button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(266, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 80);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::Button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button4->Location = System::Drawing::Point(376, 196);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 80);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::Button4_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button5->Location = System::Drawing::Point(486, 196);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 80);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::Button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button6->Location = System::Drawing::Point(596, 196);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 80);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::Button6_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button7->Location = System::Drawing::Point(45, 282);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 80);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::Button7_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button8->Location = System::Drawing::Point(155, 282);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 80);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::Button8_Click);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button9->Location = System::Drawing::Point(266, 282);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(105, 80);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::Button9_Click);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button10->Location = System::Drawing::Point(376, 282);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(105, 80);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::Button10_Click);
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button11->FlatAppearance->BorderSize = 2;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button11->Location = System::Drawing::Point(485, 282);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(105, 80);
			this->button11->TabIndex = 10;
			this->button11->Text = L"button11";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::Button11_Click);
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button12->Location = System::Drawing::Point(596, 282);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(105, 80);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::Button12_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(50, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 30);
			this->label1->TabIndex = 12;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(50, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 30);
			this->label2->TabIndex = 13;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(261, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 30);
			this->label3->TabIndex = 14;
			this->label3->Text = L"label3";
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Transparent;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button32->Location = System::Drawing::Point(622, 26);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 23);
			this->button32->TabIndex = 39;
			this->button32->Text = L"종료";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm2::Button32_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(772, 442);
			this->ControlBox = false;
			this->Controls->Add(this->button32);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		//코드수정
		label1->Text = "총합 : " + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입 : " + totalPMoney + "원\n";
		label3->Text = "총 지출 : " + totalMMoney + "원\n";

		button1->Text = "1\n" + "수입 : " + diary->GetMP(0) + "\n" + "지출 : " + diary->GetMM(0) + "\n" + "총합 : " + (diary->GetMP(0) - diary->GetMM(0));
		button2->Text = "2\n" + "수입 : " + diary->GetMP(1) + "\n" + "지출 : " + diary->GetMM(1) + "\n" + "총합 : " + (diary->GetMP(1) - diary->GetMM(1));
		button3->Text = "3\n" + "수입 : " + diary->GetMP(2) + "\n" + "지출 : " + diary->GetMM(2) + "\n" + "총합 : " + (diary->GetMP(2) - diary->GetMM(2));
		button4->Text = "4\n" + "수입 : " + diary->GetMP(3) + "\n" + "지출 : " + diary->GetMM(3) + "\n" + "총합 : " + (diary->GetMP(3) - diary->GetMM(3));
		button5->Text = "5\n" + "수입 : " + diary->GetMP(4) + "\n" + "지출 : " + diary->GetMM(4) + "\n" + "총합 : " + (diary->GetMP(4) - diary->GetMM(4));
		button6->Text = "6\n" + "수입 : " + diary->GetMP(5) + "\n" + "지출 : " + diary->GetMM(5) + "\n" + "총합 : " + (diary->GetMP(5) - diary->GetMM(5));
		button7->Text = "7\n" + "수입 : " + diary->GetMP(6) + "\n" + "지출 : " + diary->GetMM(6) + "\n" + "총합 : " + (diary->GetMP(6) - diary->GetMM(6));
		button8->Text = "8\n" + "수입 : " + diary->GetMP(7) + "\n" + "지출 : " + diary->GetMM(7) + "\n" + "총합 : " + (diary->GetMP(7) - diary->GetMM(7));
		button9->Text = "9\n" + "수입 : " + diary->GetMP(8) + "\n" + "지출 : " + diary->GetMM(8) + "\n" + "총합 : " + (diary->GetMP(8) - diary->GetMM(8));
		button10->Text = "10\n" + "수입 : " + diary->GetMP(9) + "\n" + "지출 : " + diary->GetMM(9) + "\n" + "총합 : " + (diary->GetMP(9) - diary->GetMM(9));
		button11->Text = "11\n" + "수입 : " + diary->GetMP(10) + "\n" + "지출 : " + diary->GetMM(10) + "\n" + "총합 : " + (diary->GetMP(10) - diary->GetMM(10));
		button12->Text = "12\n" + "수입 : " + diary->GetMP(11) + "\n" + "지출 : " + diary->GetMM(11) + "\n" + "총합 : " + (diary->GetMP(11) - diary->GetMM(11));
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 0);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button1->Text = "1\n" + "수입 : " + diary->GetMP(0) + "\n" + "지출 : " + diary->GetMM(0) + "\n" + "총합 : " + (diary->GetMP(0) - diary->GetMM(0));
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 1);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button2->Text = "2\n" + "수입 : " + diary->GetMP(1) + "\n" + "지출 : " + diary->GetMM(1) + "\n" + "총합 : " + (diary->GetMP(1) - diary->GetMM(1));

	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 2);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button3->Text = "3\n" + "수입 : " + diary->GetMP(2) + "\n" + "지출 : " + diary->GetMM(2) + "\n" + "총합 : " + (diary->GetMP(2) - diary->GetMM(2));

	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 3);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button4->Text = "4\n" + "수입 : " + diary->GetMP(3) + "\n" + "지출 : " + diary->GetMM(3) + "\n" + "총합 : " + (diary->GetMP(3) - diary->GetMM(3));

	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 4);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button5->Text = "5\n" + "수입 : " + diary->GetMP(4) + "\n" + "지출 : " + diary->GetMM(4) + "\n" + "총합 : " + (diary->GetMP(4) - diary->GetMM(4));

	}
	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 5);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button6->Text = "6\n" + "수입 : " + diary->GetMP(5) + "\n" + "지출 : " + diary->GetMM(5) + "\n" + "총합 : " + (diary->GetMP(5) - diary->GetMM(5));

	}
	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 6);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button7->Text = "7\n" + "수입 : " + diary->GetMP(6) + "\n" + "지출 : " + diary->GetMM(6) + "\n" + "총합 : " + (diary->GetMP(6) - diary->GetMM(6));

	}
	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 7);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button8->Text = "8\n" + "수입 : " + diary->GetMP(7) + "\n" + "지출 : " + diary->GetMM(7) + "\n" + "총합 : " + (diary->GetMP(7) - diary->GetMM(7));

	}
	private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 8);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button9->Text = "9\n" + "수입 : " + diary->GetMP(8) + "\n" + "지출 : " + diary->GetMM(8) + "\n" + "총합 : " + (diary->GetMP(8) - diary->GetMM(8));

	}
	private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 9);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button10->Text = "10\n" + "수입 : " + diary->GetMP(9) + "\n" + "지출 : " + diary->GetMM(9) + "\n" + "총합 : " + (diary->GetMP(9) - diary->GetMM(9));

	}
	private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 10);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button11->Text = "11\n" + "수입 : " + diary->GetMP(10) + "\n" + "지출 : " + diary->GetMM(10) + "\n" + "총합 : " + (diary->GetMP(10) - diary->GetMM(10));

	}
	private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm3 form3(diary, 11);
		form3.Owner = this;
		form3.ShowDialog();
		//코드수정
		totalPMoney = 0;
		totalMMoney = 0;
		for (int i = 0; i < 12; i++) {
			totalPMoney += diary->GetMP(i);
			totalMMoney += diary->GetMM(i);
		}
		label1->Text = "총합    :" + (totalPMoney - totalMMoney) + "원\n";
		label2->Text = "총 수입:" + totalPMoney + "원\n";
		label3->Text = "총 지출:" + totalMMoney + "원\n";
		button12->Text = "12\n" + "수입 : " + diary->GetMP(11) + "\n" + "지출 : " + diary->GetMM(11) + "\n" + "총합 : " + (diary->GetMP(11) - diary->GetMM(11));

	}
	private: System::Void Button32_Click(System::Object^ sender, System::EventArgs^ e) {
		diary->FileWrite();
		this->Owner->Close();
	}
};
}