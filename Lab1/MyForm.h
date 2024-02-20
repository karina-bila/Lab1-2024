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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

     #pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
                        System::ComponentModel::ComponentResourceManager ^
                            resources =
                            (gcnew System::ComponentModel::
                                 ComponentResourceManager(MyForm::typeid));
                        this->label1 = (gcnew System::Windows::Forms::Label());
                        this->textBox1 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->label2 = (gcnew System::Windows::Forms::Label());
                        this->button1 =
                            (gcnew System::Windows::Forms::Button());
                        this->button2 =
                            (gcnew System::Windows::Forms::Button());
                        this->label3 = (gcnew System::Windows::Forms::Label());
                        this->label4 = (gcnew System::Windows::Forms::Label());
                        this->pictureBox1 =
                            (gcnew System::Windows::Forms::PictureBox());
                        this->textBox2 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->textBox3 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->label5 = (gcnew System::Windows::Forms::Label());
                        this->richTextBox1 =
                            (gcnew System::Windows::Forms::RichTextBox());
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->pictureBox1))
                            ->BeginInit();
                        this->SuspendLayout();
                        //
                        // label1
                        //
                        this->label1->AutoSize = true;
                        this->label1->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 20,
                            System::Drawing::FontStyle::Italic,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label1->Location =
                            System::Drawing::Point(60, 217);
                        this->label1->Name = L"label1";
                        this->label1->Size = System::Drawing::Size(53, 31);
                        this->label1->TabIndex = 0;
                        this->label1->Text = L"a =";
                        //
                        // textBox1
                        //
                        this->textBox1->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 20,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox1->Location =
                            System::Drawing::Point(117, 214);
                        this->textBox1->Name = L"textBox1";
                        this->textBox1->Size = System::Drawing::Size(76, 38);
                        this->textBox1->TabIndex = 1;
                        //
                        // label2
                        //
                        this->label2->AutoSize = true;
                        this->label2->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 25,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label2->Location = System::Drawing::Point(44, 9);
                        this->label2->Name = L"label2";
                        this->label2->Size = System::Drawing::Size(493, 39);
                        this->label2->TabIndex = 2;
                        this->label2->Text = L"Обчислення значення функції";
                        //
                        // button1
                        //
                        this->button1->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->button1->Location =
                            System::Drawing::Point(117, 460);
                        this->button1->Name = L"button1";
                        this->button1->Size = System::Drawing::Size(127, 39);
                        this->button1->TabIndex = 3;
                        this->button1->Text = L"Обчислити";
                        this->button1->UseVisualStyleBackColor = true;
                        this->button1->Click += gcnew System::EventHandler(
                            this, &MyForm::button1_Click);
                        //
                        // button2
                        //
                        this->button2->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->button2->Location =
                            System::Drawing::Point(410, 460);
                        this->button2->Name = L"button2";
                        this->button2->Size = System::Drawing::Size(127, 39);
                        this->button2->TabIndex = 4;
                        this->button2->Text = L"Очистити";
                        this->button2->UseVisualStyleBackColor = true;
                        this->button2->Click += gcnew System::EventHandler(
                            this, &MyForm::button2_Click);
                        //
                        // label3
                        //
                        this->label3->AutoSize = true;
                        this->label3->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 10,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label3->Location =
                            System::Drawing::Point(12, 536);
                        this->label3->Name = L"label3";
                        this->label3->Size = System::Drawing::Size(138, 17);
                        this->label3->TabIndex = 5;
                        this->label3->Text = L"© 2024, Біла Каріна";
                        //
                        // label4
                        //
                        this->label4->AutoSize = true;
                        this->label4->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 20,
                            System::Drawing::FontStyle::Italic,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label4->Location =
                            System::Drawing::Point(60, 287);
                        this->label4->Name = L"label4";
                        this->label4->Size = System::Drawing::Size(53, 31);
                        this->label4->TabIndex = 6;
                        this->label4->Text = L"b =";
                        //
                        // pictureBox1
                        //
                        this->pictureBox1->Image =
                            (cli::safe_cast<System::Drawing::Image ^>(
                                resources->GetObject(L"pictureBox1.Image")));
                        this->pictureBox1->Location =
                            System::Drawing::Point(166, 60);
                        this->pictureBox1->Name = L"pictureBox1";
                        this->pictureBox1->Size =
                            System::Drawing::Size(278, 127);
                        this->pictureBox1->SizeMode = System::Windows::Forms::
                            PictureBoxSizeMode::AutoSize;
                        this->pictureBox1->TabIndex = 8;
                        this->pictureBox1->TabStop = false;
                        //
                        // textBox2
                        //
                        this->textBox2->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 20,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox2->Location =
                            System::Drawing::Point(117, 284);
                        this->textBox2->Name = L"textBox2";
                        this->textBox2->Size = System::Drawing::Size(76, 38);
                        this->textBox2->TabIndex = 9;
                        //
                        // textBox3
                        //
                        this->textBox3->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 20,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox3->Location =
                            System::Drawing::Point(117, 346);
                        this->textBox3->Name = L"textBox3";
                        this->textBox3->Size = System::Drawing::Size(76, 38);
                        this->textBox3->TabIndex = 10;
                        //
                        // label5
                        //
                        this->label5->AutoSize = true;
                        this->label5->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 20,
                            System::Drawing::FontStyle::Italic,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label5->Location =
                            System::Drawing::Point(60, 353);
                        this->label5->Name = L"label5";
                        this->label5->Size = System::Drawing::Size(51, 31);
                        this->label5->TabIndex = 11;
                        this->label5->Text = L"c =";
                        //
                        // richTextBox1
                        //
                        this->richTextBox1->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 10,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->richTextBox1->Location =
                            System::Drawing::Point(257, 217);
                        this->richTextBox1->Name = L"richTextBox1";
                        this->richTextBox1->Size =
                            System::Drawing::Size(310, 167);
                        this->richTextBox1->TabIndex = 12;
                        this->richTextBox1->Text = L"";
                        //
                        // MyForm
                        //
                        this->AutoScaleDimensions =
                            System::Drawing::SizeF(6, 13);
                        this->AutoScaleMode =
                            System::Windows::Forms::AutoScaleMode::Font;
                        this->ClientSize = System::Drawing::Size(630, 567);
                        this->Controls->Add(this->richTextBox1);
                        this->Controls->Add(this->label5);
                        this->Controls->Add(this->textBox3);
                        this->Controls->Add(this->textBox2);
                        this->Controls->Add(this->pictureBox1);
                        this->Controls->Add(this->label4);
                        this->Controls->Add(this->label3);
                        this->Controls->Add(this->button2);
                        this->Controls->Add(this->button1);
                        this->Controls->Add(this->label2);
                        this->Controls->Add(this->textBox1);
                        this->Controls->Add(this->label1);
                        this->FormBorderStyle = System::Windows::Forms::
                            FormBorderStyle::FixedDialog;
                        this->Name = L"MyForm";
                        this->Text = L"Function";
                        this->TopMost = true;
                        this->Load += gcnew System::EventHandler(
                            this, &MyForm::MyForm_Load);
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->pictureBox1))
                            ->EndInit();
                        this->ResumeLayout(false);
                        this->PerformLayout();
                }

               private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//перевірка на введення всіх значень
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") {
		MessageBox::Show("Введіть всі значення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->Focus();
		return;
	}
	double a, b, c;
	if (!Double::TryParse(textBox1->Text, a) || !Double::TryParse(textBox2->Text, b) || !Double::TryParse(textBox3->Text, c)) {
		MessageBox::Show("Введіть коректні значення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->Focus();
		return;
	}

	//обчислення значення функції y = ctg c + sqrt((c/b)+a)
    double result = 1 / tan(c) + sqrt((c / b) + a);
    //виведення результату
    richTextBox1->Text = "Лабораторна робота №1-2\n" +
		"Обчислення значення функції\n\n" +
		"y = ctg c + sqrt((c/b)+a)\n" +
		"a = " + a + "\n" +
		"b = " + b + "\n" +
		"c = " + c + "\n\n" +
		"Результат: y = " + result;
		

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//clear all
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		richTextBox1->Clear();
		textBox1->Focus();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//center the form
	this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
		(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);
}
};
}
