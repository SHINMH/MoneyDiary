#pragma once
#include"MoneyDiary.h"
#include"MyForm4.h"

/*
	이 클래스는 월에 해당하는 정보를 제공하는 클래스입니다.
	월의 총 지출, 총 수입, 이들의 합계를 제공합니다.
	아래에는 31개의(월마다 다르긴하지만)의 버튼이 제공되고, 
	그 버튼의 텍스트에는 x일에 해당하는 지출,수입,합계가 적혀있습니다.
	그리고 그 버튼을 클릭하면, 해당 일의 상세 페이지로 넘어갑니다.

	클래스는 월에 대한 멤버변수와 moneydiary의 포인터를 멤버 변수로 가지고 있으며,
	생산자에서 이들을 받아와 저장합니다.
	
	버튼을 클릭하여, 일별 상세페이지로 넘어간다음에, 돌아올때, 텍스트 정보가 변경될 수 있으므로,
	텍스트를 다시한번 적어줍니다.
*/


namespace teamProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm3에 대한 요약입니다.
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	private:
		MoneyDiary* diary;
		int month;
	public:
		MyForm3(MoneyDiary* diary, int month)
		{
			InitializeComponent();
			this->diary = diary;
			this->month = month;
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(37, 136);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::Button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(146, 136);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 100);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::Button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(256, 136);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 100);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::Button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button4->Location = System::Drawing::Point(365, 136);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 100);
			this->button4->TabIndex = 10;
			this->button4->Text = L"button4";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::Button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button5->Location = System::Drawing::Point(475, 136);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 100);
			this->button5->TabIndex = 11;
			this->button5->Text = L"button5";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::Button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button6->Location = System::Drawing::Point(585, 136);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 100);
			this->button6->TabIndex = 12;
			this->button6->Text = L"button6";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::Button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button7->Location = System::Drawing::Point(694, 136);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 100);
			this->button7->TabIndex = 13;
			this->button7->Text = L"button7";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm3::Button7_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button9->Location = System::Drawing::Point(37, 242);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(103, 100);
			this->button9->TabIndex = 14;
			this->button9->Text = L"button9";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm3::Button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button8->Location = System::Drawing::Point(146, 242);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 100);
			this->button8->TabIndex = 15;
			this->button8->Text = L"button8";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm3::Button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button10->Location = System::Drawing::Point(256, 242);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(103, 100);
			this->button10->TabIndex = 16;
			this->button10->Text = L"button10";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm3::Button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button11->FlatAppearance->BorderSize = 2;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button11->Location = System::Drawing::Point(365, 242);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(103, 100);
			this->button11->TabIndex = 17;
			this->button11->Text = L"button11";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm3::Button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button12->Location = System::Drawing::Point(475, 242);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(103, 100);
			this->button12->TabIndex = 18;
			this->button12->Text = L"button12";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm3::Button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button13->FlatAppearance->BorderSize = 2;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button13->Location = System::Drawing::Point(585, 242);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(103, 100);
			this->button13->TabIndex = 19;
			this->button13->Text = L"button13";
			this->button13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm3::Button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button14->FlatAppearance->BorderSize = 2;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button14->Location = System::Drawing::Point(694, 242);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(103, 100);
			this->button14->TabIndex = 20;
			this->button14->Text = L"button14";
			this->button14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm3::Button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button15->FlatAppearance->BorderSize = 2;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button15->Location = System::Drawing::Point(37, 351);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(103, 100);
			this->button15->TabIndex = 21;
			this->button15->Text = L"button15";
			this->button15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm3::Button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button16->FlatAppearance->BorderSize = 2;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button16->Location = System::Drawing::Point(146, 351);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(103, 100);
			this->button16->TabIndex = 22;
			this->button16->Text = L"button16";
			this->button16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm3::Button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button17->FlatAppearance->BorderSize = 2;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button17->Location = System::Drawing::Point(256, 351);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(103, 100);
			this->button17->TabIndex = 23;
			this->button17->Text = L"button17";
			this->button17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm3::Button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button18->FlatAppearance->BorderSize = 2;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button18->Location = System::Drawing::Point(365, 351);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(103, 100);
			this->button18->TabIndex = 24;
			this->button18->Text = L"button18";
			this->button18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm3::Button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button19->FlatAppearance->BorderSize = 2;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button19->Location = System::Drawing::Point(475, 351);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(103, 100);
			this->button19->TabIndex = 25;
			this->button19->Text = L"button19";
			this->button19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm3::Button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button20->FlatAppearance->BorderSize = 2;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button20->Location = System::Drawing::Point(585, 351);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(103, 100);
			this->button20->TabIndex = 26;
			this->button20->Text = L"button20";
			this->button20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm3::Button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button21->FlatAppearance->BorderSize = 2;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button21->Location = System::Drawing::Point(694, 351);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(103, 100);
			this->button21->TabIndex = 27;
			this->button21->Text = L"button21";
			this->button21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm3::Button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button22->FlatAppearance->BorderSize = 2;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button22->Location = System::Drawing::Point(37, 458);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(103, 100);
			this->button22->TabIndex = 28;
			this->button22->Text = L"button22";
			this->button22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm3::Button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button23->FlatAppearance->BorderSize = 2;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button23->Location = System::Drawing::Point(146, 458);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(103, 100);
			this->button23->TabIndex = 29;
			this->button23->Text = L"button23";
			this->button23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm3::Button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button24->FlatAppearance->BorderSize = 2;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button24->Location = System::Drawing::Point(256, 458);
			this->button24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(103, 100);
			this->button24->TabIndex = 30;
			this->button24->Text = L"button24";
			this->button24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm3::Button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button25->FlatAppearance->BorderSize = 2;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button25->Location = System::Drawing::Point(365, 458);
			this->button25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(103, 100);
			this->button25->TabIndex = 31;
			this->button25->Text = L"button25";
			this->button25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm3::Button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button26->FlatAppearance->BorderSize = 2;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button26->Location = System::Drawing::Point(475, 458);
			this->button26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(103, 100);
			this->button26->TabIndex = 32;
			this->button26->Text = L"button26";
			this->button26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm3::Button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button27->FlatAppearance->BorderSize = 2;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button27->Location = System::Drawing::Point(585, 458);
			this->button27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(103, 100);
			this->button27->TabIndex = 33;
			this->button27->Text = L"button27";
			this->button27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm3::Button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button28->FlatAppearance->BorderSize = 2;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button28->Location = System::Drawing::Point(694, 458);
			this->button28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(103, 100);
			this->button28->TabIndex = 34;
			this->button28->Text = L"button28";
			this->button28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm3::Button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button29->FlatAppearance->BorderSize = 2;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button29->Location = System::Drawing::Point(37, 566);
			this->button29->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(103, 100);
			this->button29->TabIndex = 35;
			this->button29->Text = L"button29";
			this->button29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm3::Button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button30->FlatAppearance->BorderSize = 2;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button30->Location = System::Drawing::Point(146, 566);
			this->button30->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(103, 100);
			this->button30->TabIndex = 36;
			this->button30->Text = L"button30";
			this->button30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm3::Button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->FlatAppearance->BorderColor = System::Drawing::Color::Goldenrod;
			this->button31->FlatAppearance->BorderSize = 2;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button31->Location = System::Drawing::Point(256, 566);
			this->button31->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(103, 100);
			this->button31->TabIndex = 37;
			this->button31->Text = L"button31";
			this->button31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm3::Button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Transparent;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button32->Location = System::Drawing::Point(711, 32);
			this->button32->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(86, 29);
			this->button32->TabIndex = 38;
			this->button32->Text = L"뒤로가기";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm3::Button32_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(33, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 28);
			this->label1->TabIndex = 39;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(33, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 28);
			this->label2->TabIndex = 40;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(253, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 28);
			this->label3->TabIndex = 41;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(472, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 28);
			this->label4->TabIndex = 42;
			this->label4->Text = L"label4";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(839, 701);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm3";
			this->Text = L"일";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "" + (month + 1) + "월\n";
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";

		if (month == 1) {
			button29->Visible = false;
			button30->Visible = false;
			button31->Visible = false;
		}
		else if (month == 3 || month == 5 || month == 8 || month == 10) {
			button31->Visible = false;
		}

		button1->Text = "1\n" + "수입 : " + diary->GetDP(month, 0) + "\n" + "지출 : " + diary->GetDM(month, 0) + "\n" + "총합 : " + (diary->GetDP(month, 0) - diary->GetDM(month, 0));
		button2->Text = "2\n" + "수입 : " + diary->GetDP(month, 1) + "\n" + "지출 : " + diary->GetDM(month, 1) + "\n" + "총합 : " + (diary->GetDP(month, 1) - diary->GetDM(month, 1));
		button3->Text = "3\n" + "수입 : " + diary->GetDP(month, 2) + "\n" + "지출 : " + diary->GetDM(month, 2) + "\n" + "총합 : " + (diary->GetDP(month, 2) - diary->GetDM(month, 2));
		button4->Text = "4\n" + "수입 : " + diary->GetDP(month, 3) + "\n" + "지출 : " + diary->GetDM(month, 3) + "\n" + "총합 : " + (diary->GetDP(month, 3) - diary->GetDM(month, 3));
		button5->Text = "5\n" + "수입 : " + diary->GetDP(month, 4) + "\n" + "지출 : " + diary->GetDM(month, 4) + "\n" + "총합 : " + (diary->GetDP(month, 4) - diary->GetDM(month, 4));
		button6->Text = "6\n" + "수입 : " + diary->GetDP(month, 5) + "\n" + "지출 : " + diary->GetDM(month, 5) + "\n" + "총합 : " + (diary->GetDP(month, 5) - diary->GetDM(month, 5));
		button7->Text = "7\n" + "수입 : " + diary->GetDP(month, 6) + "\n" + "지출 : " + diary->GetDM(month, 6) + "\n" + "총합 : " + (diary->GetDP(month, 6) - diary->GetDM(month, 6));
		button8->Text = "8\n" + "수입 : " + diary->GetDP(month, 7) + "\n" + "지출 : " + diary->GetDM(month, 7) + "\n" + "총합 : " + (diary->GetDP(month, 7) - diary->GetDM(month, 7));
		button9->Text = "9\n" + "수입 : " + diary->GetDP(month, 8) + "\n" + "지출 : " + diary->GetDM(month, 8) + "\n" + "총합 : " + (diary->GetDP(month, 8) - diary->GetDM(month, 8));
		button10->Text = "10\n" + "수입 : " + diary->GetDP(month, 9) + "\n" + "지출 : " + diary->GetDM(month, 9) + "\n" + "총합 : " + (diary->GetDP(month, 9) - diary->GetDM(month, 9));
		button11->Text = "11\n" + "수입 : " + diary->GetDP(month, 10) + "\n" + "지출 : " + diary->GetDM(month, 10) + "\n" + "총합 : " + (diary->GetDP(month, 10) - diary->GetDM(month, 10));
		button12->Text = "12\n" + "수입 : " + diary->GetDP(month, 11) + "\n" + "지출 : " + diary->GetDM(month, 11) + "\n" + "총합 : " + (diary->GetDP(month, 11) - diary->GetDM(month, 11));
		button13->Text = "13\n" + "수입 : " + diary->GetDP(month, 12) + "\n" + "지출 : " + diary->GetDM(month, 12) + "\n" + "총합 : " + (diary->GetDP(month, 12) - diary->GetDM(month, 12));
		button14->Text = "14\n" + "수입 : " + diary->GetDP(month, 13) + "\n" + "지출 : " + diary->GetDM(month, 13) + "\n" + "총합 : " + (diary->GetDP(month, 13) - diary->GetDM(month, 13));
		button15->Text = "15\n" + "수입 : " + diary->GetDP(month, 14) + "\n" + "지출 : " + diary->GetDM(month, 14) + "\n" + "총합 : " + (diary->GetDP(month, 14) - diary->GetDM(month, 14));
		button16->Text = "16\n" + "수입 : " + diary->GetDP(month, 15) + "\n" + "지출 : " + diary->GetDM(month, 15) + "\n" + "총합 : " + (diary->GetDP(month, 15) - diary->GetDM(month, 15));
		button17->Text = "17\n" + "수입 : " + diary->GetDP(month, 16) + "\n" + "지출 : " + diary->GetDM(month, 16) + "\n" + "총합 : " + (diary->GetDP(month, 16) - diary->GetDM(month, 16));
		button18->Text = "18\n" + "수입 : " + diary->GetDP(month, 17) + "\n" + "지출 : " + diary->GetDM(month, 17) + "\n" + "총합 : " + (diary->GetDP(month, 17) - diary->GetDM(month, 17));
		button19->Text = "19\n" + "수입 : " + diary->GetDP(month, 18) + "\n" + "지출 : " + diary->GetDM(month, 18) + "\n" + "총합 : " + (diary->GetDP(month, 18) - diary->GetDM(month, 18));
		button20->Text = "20\n" + "수입 : " + diary->GetDP(month, 19) + "\n" + "지출 : " + diary->GetDM(month, 19) + "\n" + "총합 : " + (diary->GetDP(month, 19) - diary->GetDM(month, 19));
		button21->Text = "21\n" + "수입 : " + diary->GetDP(month, 20) + "\n" + "지출 : " + diary->GetDM(month, 20) + "\n" + "총합 : " + (diary->GetDP(month, 20) - diary->GetDM(month, 20));
		button22->Text = "22\n" + "수입 : " + diary->GetDP(month, 21) + "\n" + "지출 : " + diary->GetDM(month, 21) + "\n" + "총합 : " + (diary->GetDP(month, 21) - diary->GetDM(month, 21));
		button23->Text = "23\n" + "수입 : " + diary->GetDP(month, 22) + "\n" + "지출 : " + diary->GetDM(month, 22) + "\n" + "총합 : " + (diary->GetDP(month, 22) - diary->GetDM(month, 22));
		button24->Text = "24\n" + "수입 : " + diary->GetDP(month, 23) + "\n" + "지출 : " + diary->GetDM(month, 23) + "\n" + "총합 : " + (diary->GetDP(month, 23) - diary->GetDM(month, 23));
		button25->Text = "25\n" + "수입 : " + diary->GetDP(month, 24) + "\n" + "지출 : " + diary->GetDM(month, 24) + "\n" + "총합 : " + (diary->GetDP(month, 24) - diary->GetDM(month, 24));
		button26->Text = "26\n" + "수입 : " + diary->GetDP(month, 25) + "\n" + "지출 : " + diary->GetDM(month, 25) + "\n" + "총합 : " + (diary->GetDP(month, 25) - diary->GetDM(month, 25));
		button27->Text = "27\n" + "수입 : " + diary->GetDP(month, 26) + "\n" + "지출 : " + diary->GetDM(month, 26) + "\n" + "총합 : " + (diary->GetDP(month, 26) - diary->GetDM(month, 26));
		button28->Text = "28\n" + "수입 : " + diary->GetDP(month, 27) + "\n" + "지출 : " + diary->GetDM(month, 27) + "\n" + "총합 : " + (diary->GetDP(month, 27) - diary->GetDM(month, 27));
		button29->Text = "29\n" + "수입 : " + diary->GetDP(month, 28) + "\n" + "지출 : " + diary->GetDM(month, 28) + "\n" + "총합 : " + (diary->GetDP(month, 28) - diary->GetDM(month, 28));
		button30->Text = "30\n" + "수입 : " + diary->GetDP(month, 29) + "\n" + "지출 : " + diary->GetDM(month, 29) + "\n" + "총합 : " + (diary->GetDP(month, 29) - diary->GetDM(month, 29));
		button31->Text = "31\n" + "수입 : " + diary->GetDP(month, 30) + "\n" + "지출 : " + diary->GetDM(month, 30) + "\n" + "총합 : " + (diary->GetDP(month, 30) - diary->GetDM(month, 30));
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 0);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button1->Text = "1\n" + "수입 : " + diary->GetDP(month, 0) + "\n" + "지출 : " + diary->GetDM(month, 0) + "\n" + "총합 : " + (diary->GetDP(month, 0) - diary->GetDM(month, 0));
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 1);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button2->Text = "2\n" + "수입 : " + diary->GetDP(month, 1) + "\n" + "지출 : " + diary->GetDM(month, 1) + "\n" + "총합 : " + (diary->GetDP(month, 1) - diary->GetDM(month, 1));

	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 2);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button3->Text = "3\n" + "수입 : " + diary->GetDP(month, 2) + "\n" + "지출 : " + diary->GetDM(month, 2) + "\n" + "총합 : " + (diary->GetDP(month, 2) - diary->GetDM(month, 2));
	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 3);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button4->Text = "4\n" + "수입 : " + diary->GetDP(month, 3) + "\n" + "지출 : " + diary->GetDM(month, 3) + "\n" + "총합 : " + (diary->GetDP(month, 3) - diary->GetDM(month, 3));
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 4);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button5->Text = "5\n" + "수입 : " + diary->GetDP(month, 4) + "\n" + "지출 : " + diary->GetDM(month, 4) + "\n" + "총합 : " + (diary->GetDP(month, 4) - diary->GetDM(month, 4));
	}
	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 5);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button6->Text = "6\n" + "수입 : " + diary->GetDP(month, 5) + "\n" + "지출 : " + diary->GetDM(month, 5) + "\n" + "총합 : " + (diary->GetDP(month, 5) - diary->GetDM(month, 5));
	}
	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 6);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button7->Text = "7\n" + "수입 : " + diary->GetDP(month, 6) + "\n" + "지출 : " + diary->GetDM(month, 6) + "\n" + "총합 : " + (diary->GetDP(month, 6) - diary->GetDM(month, 6));
	}
	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 7);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button8->Text = "8\n" + "수입 : " + diary->GetDP(month, 7) + "\n" + "지출 : " + diary->GetDM(month, 7) + "\n" + "총합 : " + (diary->GetDP(month, 7) - diary->GetDM(month, 7));
	}
	private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 8);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button9->Text = "9\n" + "수입 : " + diary->GetDP(month, 8) + "\n" + "지출 : " + diary->GetDM(month, 8) + "\n" + "총합 : " + (diary->GetDP(month, 8) - diary->GetDM(month, 8));
	}
	private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 9);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button10->Text = "10\n" + "수입 : " + diary->GetDP(month, 9) + "\n" + "지출 : " + diary->GetDM(month, 9) + "\n" + "총합 : " + (diary->GetDP(month, 9) - diary->GetDM(month, 9));
	}
	private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 10);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button11->Text = "11\n" + "수입 : " + diary->GetDP(month, 10) + "\n" + "지출 : " + diary->GetDM(month, 10) + "\n" + "총합 : " + (diary->GetDP(month, 10) - diary->GetDM(month, 10));
	}
	private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 11);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button12->Text = "12\n" + "수입 : " + diary->GetDP(month, 11) + "\n" + "지출 : " + diary->GetDM(month, 11) + "\n" + "총합 : " + (diary->GetDP(month, 11) - diary->GetDM(month, 11));
	}
	private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 12);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button13->Text = "13\n" + "수입 : " + diary->GetDP(month, 12) + "\n" + "지출 : " + diary->GetDM(month, 12) + "\n" + "총합 : " + (diary->GetDP(month, 12) - diary->GetDM(month, 12));
	}
	private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 13);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button14->Text = "14\n" + "수입 : " + diary->GetDP(month, 13) + "\n" + "지출 : " + diary->GetDM(month, 13) + "\n" + "총합 : " + (diary->GetDP(month, 13) - diary->GetDM(month, 13));
	}
	private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 14);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button15->Text = "15\n" + "수입 : " + diary->GetDP(month, 14) + "\n" + "지출 : " + diary->GetDM(month, 14) + "\n" + "총합 : " + (diary->GetDP(month, 14) - diary->GetDM(month, 14));
	}
	private: System::Void Button16_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 15);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button16->Text = "16\n" + "수입 : " + diary->GetDP(month, 15) + "\n" + "지출 : " + diary->GetDM(month, 15) + "\n" + "총합 : " + (diary->GetDP(month, 15) - diary->GetDM(month, 15));
	}
	private: System::Void Button17_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 16);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button17->Text = "17\n" + "수입 : " + diary->GetDP(month, 16) + "\n" + "지출 : " + diary->GetDM(month, 16) + "\n" + "총합 : " + (diary->GetDP(month, 16) - diary->GetDM(month, 16));
	}
	private: System::Void Button18_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 17);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button18->Text = "18\n" + "수입 : " + diary->GetDP(month, 17) + "\n" + "지출 : " + diary->GetDM(month, 17) + "\n" + "총합 : " + (diary->GetDP(month, 17) - diary->GetDM(month, 17));
	}
	private: System::Void Button19_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 18);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button19->Text = "19\n" + "수입 : " + diary->GetDP(month, 18) + "\n" + "지출 : " + diary->GetDM(month, 18) + "\n" + "총합 : " + (diary->GetDP(month, 18) - diary->GetDM(month, 18));
	}
	private: System::Void Button20_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 19);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button20->Text = "20\n" + "수입 : " + diary->GetDP(month, 19) + "\n" + "지출 : " + diary->GetDM(month, 19) + "\n" + "총합 : " + (diary->GetDP(month, 19) - diary->GetDM(month, 19));
	}
	private: System::Void Button21_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 20);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button21->Text = "21\n" + "수입 : " + diary->GetDP(month, 20) + "\n" + "지출 : " + diary->GetDM(month, 20) + "\n" + "총합 : " + (diary->GetDP(month, 20) - diary->GetDM(month, 20));
	}
	private: System::Void Button22_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 21);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button22->Text = "22\n" + "수입 : " + diary->GetDP(month, 21) + "\n" + "지출 : " + diary->GetDM(month, 21) + "\n" + "총합 : " + (diary->GetDP(month, 21) - diary->GetDM(month, 21));
	}
	private: System::Void Button23_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 22);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button23->Text = "23\n" + "수입 : " + diary->GetDP(month, 22) + "\n" + "지출 : " + diary->GetDM(month, 22) + "\n" + "총합 : " + (diary->GetDP(month, 22) - diary->GetDM(month, 22));
	}
	private: System::Void Button24_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 23);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button24->Text = "24\n" + "수입 : " + diary->GetDP(month, 23) + "\n" + "지출 : " + diary->GetDM(month, 23) + "\n" + "총합 : " + (diary->GetDP(month, 23) - diary->GetDM(month, 23));
	}
	private: System::Void Button25_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 24);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button25->Text = "25\n" + "수입 : " + diary->GetDP(month, 24) + "\n" + "지출 : " + diary->GetDM(month, 24) + "\n" + "총합 : " + (diary->GetDP(month, 24) - diary->GetDM(month, 24));
	}
	private: System::Void Button26_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 25);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button26->Text = "26\n" + "수입 : " + diary->GetDP(month, 25) + "\n" + "지출 : " + diary->GetDM(month, 25) + "\n" + "총합 : " + (diary->GetDP(month, 25) - diary->GetDM(month, 25));
	}
	private: System::Void Button27_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 26);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button27->Text = "27\n" + "수입 : " + diary->GetDP(month, 26) + "\n" + "지출 : " + diary->GetDM(month, 26) + "\n" + "총합 : " + (diary->GetDP(month, 26) - diary->GetDM(month, 26));
	}
	private: System::Void Button28_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 27);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button28->Text = "28\n" + "수입 : " + diary->GetDP(month, 27) + "\n" + "지출 : " + diary->GetDM(month, 27) + "\n" + "총합 : " + (diary->GetDP(month, 27) - diary->GetDM(month, 27));
	}
	private: System::Void Button29_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 28);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button29->Text = "29\n" + "수입 : " + diary->GetDP(month, 28) + "\n" + "지출 : " + diary->GetDM(month, 28) + "\n" + "총합 : " + (diary->GetDP(month, 28) - diary->GetDM(month, 28));
	}
	private: System::Void Button30_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 29);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button30->Text = "30\n" + "수입 : " + diary->GetDP(month, 29) + "\n" + "지출 : " + diary->GetDM(month, 29) + "\n" + "총합 : " + (diary->GetDP(month, 29) - diary->GetDM(month, 29));
	}
	private: System::Void Button31_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm4 form4(diary, month, 30);
		form4.Owner = this;
		form4.ShowDialog();
		label2->Text = "총합 : " + (diary->GetMP(month) - diary->GetMM(month)) + "원\n";
		label3->Text = "총 수입 : " + diary->GetMP(month) + "원\n";
		label4->Text = "총 지출 : " + diary->GetMM(month) + "원\n";
		button31->Text = "31\n" + "수입 : " + diary->GetDP(month, 30) + "\n" + "지출 : " + diary->GetDM(month, 30) + "\n" + "총합 : " + (diary->GetDP(month, 30) - diary->GetDM(month, 30));
	}
	private: System::Void Button32_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Owner->Visible = true;
		this->Close();
	}
	};
}