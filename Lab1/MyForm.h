#pragma once
#include <cmath>


namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������ ����";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(162, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(367, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"� 2024, ���� �����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(105, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 31);
			this->label4->TabIndex = 6;
			this->label4->Text = L"�������";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(253, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(306, 38);
			this->textBox2->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"���", L"г���", L"�����", L"����", L"�������",
					L"�������", L"�����-���������", L"��������", L"������������", L"�������", L"³�����", L"�������", L"�������", L"������",
					L"����", L"�����", L"�������������", L"�����", L"�������", L"�����", L"��������", L"�������", L"�����", L"������", L"������",
					L"ѳ���������"
			});
			this->comboBox1->Location = System::Drawing::Point(253, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(306, 39);
			this->comboBox1->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 328);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Function";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ city = comboBox1->Text;

		if (city == "���") {
			textBox2->Text = "�������";
		}
		else if (city == "г���") {
			textBox2->Text = "г��������";
		}
		else if (city == "�����") {
			textBox2->Text = "���������";
		}
		else if (city == "����") {
			textBox2->Text = "��������";
		}
		else if (city == "�������") {
			textBox2->Text = "�����������";
		}
		else if (city == "�������") {
			textBox2->Text = "����������";
		}
		else if (city == "�����-���������") {
			textBox2->Text = "�����-����������";
		}
		else if (city == "��������") {
			textBox2->Text = "������������";
		}
		else if (city == "������������") {
			textBox2->Text = "�����������";
		}
		else if (city == "�������") {
			textBox2->Text = "������������";
		}
		else if (city == "³�����") {
			textBox2->Text = "³�������";
		}
		else if (city == "�������") {
			textBox2->Text = "���������";
		}
		else if (city == "�������") {
			textBox2->Text = "����������";
		}
		else if (city == "������") {
			textBox2->Text = "����������";
		}
		else if (city == "����") {
			textBox2->Text = "�������";
		}
		else if (city == "�����") {
			textBox2->Text = "���������";
		}
		else if (city == "�������������") {
			textBox2->Text = "ʳ������������";
		}
		else if (city == "�����") {
			textBox2->Text = "���������������";
		}
		else if (city == "�������") {
			textBox2->Text = "�����������";
		}
		else if (city == "�����") {
			textBox2->Text = "���������";
		}
		else if (city == "��������") {
			textBox2->Text = "���������";
		}
		else if (city == "�������") {
			textBox2->Text = "��������";
		}
		else if (city == "�����") {
			textBox2->Text = "�������";
		}
		else if (city == "������") {
			textBox2->Text = "����������";
		}
		else if (city == "������") {
			textBox2->Text = "����������";
		}
		else if (city == "ѳ���������") {
			textBox2->Text = "�� ����";
		}
		else {
			textBox2->Text = "������� ����";
		}

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Text = "";
		textBox2->Text = "";

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
			(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);
	}
	};
}
