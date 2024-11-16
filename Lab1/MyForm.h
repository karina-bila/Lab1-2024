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

	protected:




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label10;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 750);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"© 2024, Біла Каріна";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1290, 747);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox6);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1282, 721);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1032, 387);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Сектор";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(158, 387);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Еліпс";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(550, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Зафарбований еліпс";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(968, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(279, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Зафарбований прямокутник";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(584, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Прямокутник";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(158, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Лінія";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(876, 415);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(400, 300);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox6_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(443, 415);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(400, 300);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox5_Paint);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(11, 415);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(400, 300);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox4_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(876, 47);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(400, 300);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox3_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(443, 47);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(400, 300);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(11, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 300);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->pictureBox7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1282, 721);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(565, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Зірка";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(36, 51);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1200, 650);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox7_Paint);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->pictureBox10);
			this->tabPage3->Controls->Add(this->pictureBox9);
			this->tabPage3->Controls->Add(this->pictureBox8);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1282, 721);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(489, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Анімація";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(509, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 51);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.InitialImage")));
			this->pictureBox10->Location = System::Drawing::Point(391, 147);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(300, 300);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 2;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			this->pictureBox9->Location = System::Drawing::Point(248, 80);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(300, 300);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.InitialImage")));
			this->pictureBox8->Location = System::Drawing::Point(99, 80);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(300, 300);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->pictureBox17);
			this->tabPage4->Controls->Add(this->pictureBox16);
			this->tabPage4->Controls->Add(this->pictureBox15);
			this->tabPage4->Controls->Add(this->pictureBox14);
			this->tabPage4->Controls->Add(this->pictureBox13);
			this->tabPage4->Controls->Add(this->pictureBox12);
			this->tabPage4->Controls->Add(this->pictureBox11);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1282, 721);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Завдання 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(657, 399);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(189, 240);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 6;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(402, 399);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(189, 240);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 5;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(157, 399);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(189, 240);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 4;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(916, 123);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(189, 240);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 3;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(657, 123);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(189, 240);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 2;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(402, 123);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(189, 240);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 1;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(157, 123);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(189, 240);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(433, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(413, 25);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Тисни на картинки щоб прослухати вимову";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 776);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Function";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//center the form
		this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
			(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);

		tabPage3->BackColor = Color::FromArgb(130, 207, 242);
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw the line with Pen
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Black);
		pen->Width = 4;
		g->DrawLine(pen, 10, 10, 390, 290);
	}

	private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw the rectangle with Pen
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Green);
		pen->Width = 4;
		g->DrawRectangle(pen, 10, 10, 380, 280);
	}

	private: System::Void pictureBox3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw the rectangle with filled with Pen
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Green);
		pen->Width = 4;
		g->DrawRectangle(pen, 10, 10, 380, 280);
		SolidBrush^ brush = gcnew SolidBrush(Color::Green);
		g->FillRectangle(brush, 10, 10, 380, 280);
	}
	private: System::Void pictureBox4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw the ellipse with Pen
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Red);
		pen->Width = 4;
		g->DrawEllipse(pen, 10, 10, 380, 280);
	}
	private: System::Void pictureBox5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw the ellipse with filled with Pen
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Red);
		pen->Width = 4;
		g->DrawEllipse(pen, 10, 10, 380, 280);
		SolidBrush^ brush = gcnew SolidBrush(Color::Red);
		g->FillEllipse(brush, 10, 10, 380, 280);
	}
	private: System::Void pictureBox6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw circular sector filled violet color
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Violet);
		pen->Width = 4;
		g->DrawPie(pen, 10, 10, 280, 280, 0, 90);
		SolidBrush^ brush = gcnew SolidBrush(Color::Violet);
		g->FillPie(brush, 10, 10, 280, 280, 0, 90);

	}
	private: System::Void pictureBox7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Yellow);
		pen->Width = 4;

		int centerX = 600;
		int centerY = 350;
		int outerRadius = 250;
		int innerRadius = 100;
		int numPoints = 5;

		array<Point>^ points = gcnew array<Point>(2 * numPoints);
		double angleOffset = Math::PI / 2;

		for (int i = 0; i < numPoints * 2; i++) {
			double angle = i * Math::PI / numPoints + angleOffset;

			int radius = (i % 2 == 0) ? outerRadius : innerRadius;

			int x = centerX + static_cast<int>(radius * Math::Cos(angle));
			int y = centerY - static_cast<int>(radius * Math::Sin(angle));

			points[i] = Point(x, y);
		}

		g->DrawPolygon(pen, points);
		SolidBrush^ brush = gcnew SolidBrush(Color::Yellow);
		g->FillPolygon(brush, points);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		timer2->Start();
		timer3->Start();

		timer1->Interval = 500;
		timer2->Interval = 500;
		timer3->Interval = 500;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();
		timer2->Stop();
		timer3->Stop();

		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		pictureBox10->Visible = false;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		pictureBox8->Visible = true;
		pictureBox9->Visible = false;
		pictureBox10->Visible = false;

		timer2->Enabled = true;
		timer2->Interval = 500;
		timer1->Enabled = false;
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		pictureBox8->Visible = false;
		pictureBox9->Visible = true;
		pictureBox10->Visible = false;

		timer3->Enabled = true;
		timer3->Interval = 500;
		timer2->Enabled = false;
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		pictureBox10->Visible = true;

		timer1->Enabled = true;
		timer1->Interval = 500;
		timer3->Enabled = false;
	}



	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\monday.wav");
		player->Play();
	}

	private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\tuesday.wav");
		player->Play();
	}
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\wednesday.wav");
		player->Play();
	}
	private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\thursday.wav");
		player->Play();
	}
	private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\friday.wav");
		player->Play();
	}
	private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\saturday.wav");
		player->Play();
	}
	private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
		// Use a relative path to access the audio file in the 'audio' folder
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("..\\audio\\days\\sunday.wav");
		player->Play();
	}
	};
}
