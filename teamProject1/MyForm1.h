#pragma once
#include"MoneyDiary.h"
#include"MyForm2.h"

/*
	�� Ŭ������ ��ó�� ����ȭ�鿡 �ش��ϴ� Ŭ�����Դϴ�.
	moneyDiary class�� �����͸� �ɹ������� ������ �ֽ��ϴ�.(����Ŭ�������� �Ϲ�Ŭ���� ��ü�� ����� ������ ���ٰ� �մϴ�. �׷��� �����͸� ����� �����ϴ�.)
	�׸��� �����ڿ��� �����Ϳ� ��ü�� �Ҵ����ְ�, ��ü�� fileread �Լ��� ȣ���Ͽ�, ���Ͽ� ���� ��� �ǵ鿡 ���� ������ �о� �ɴϴ�.

	��ư�Ѱ��� �󺧷� �����Ǿ� ������, ��ư�� Ŭ�� �� �̺�Ʈ �����ʰ� �۵��Ͽ�, form2(�⿡ ���� ȭ��)�� ���̾�α׷� ȭ�鿡 ����ݴϴ�.
	�׸��� form2�� owner�� �������ݴϴ�.
*/

namespace teamProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1�� ���� ����Դϴ�.
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public: MoneyDiary* diary;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			diary = new MoneyDiary();
			diary->FileRead();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"HY�߰��", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(659, 430);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 78);
			this->button1->TabIndex = 1;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"HY�߰��", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(136, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(657, 80);
			this->label1->TabIndex = 2;
			this->label1->Text = L"MONEY DIARY";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(882, 552);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		teamProject1::MyForm2 form2(diary);
		form2.Owner = this;
		form2.ShowDialog();
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
