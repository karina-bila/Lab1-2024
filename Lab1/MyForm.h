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
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 38);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(96, 721);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(349, 721);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 776);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"© 2024, Біла Каріна";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть розмір масиву через пробіл";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(21, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(502, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Обробка двовимірного масиву";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 490);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 31);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Результат";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 524);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(511, 180);
			this->textBox2->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 172);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(520, 300);
			this->dataGridView1->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(260, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 39);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Створити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(405, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 39);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Заповнити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 802);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"App";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//отримуємо розмір dataGridView
		int rows = dataGridView1->RowCount;
		int columns = dataGridView1->ColumnCount;

		//заповнюємо масив з dataGridView
		array<int, 2>^ arr = gcnew array<int, 2>(rows, columns);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				arr[i, j] = Int32::Parse(dataGridView1->Rows[i]->Cells[j]->Value->ToString());
			}
		}

		// рахуємо середнє арифметичне від'ємних елементів
		int sum = 0;
		int count = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				if (arr[i, j] < 0) {
					sum += arr[i, j];
					count++;
				}
			}
		}
		double result = (double)sum / count;

		//виводимо результат
		textBox2->Text = "Середнє арифметичне від'ємних елементів: " + result;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		textBox1->Focus();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//центрування форми
		this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
			(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//отримуємо розмір масиву з textBox1
		array<String^>^ arr = textBox1->Text->Split(' ');

		//перевіряємо чи користувач ввів розмір масиву
		if (arr->Length == 0) {
			MessageBox::Show("Введіть розмір через пробіл", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Focus();
			return;
		}

		//додаємо рядки і стовпці в dataGridView
		dataGridView1->RowCount = Int32::Parse(arr[0]) + 1;
		dataGridView1->ColumnCount = Int32::Parse(arr[1]);

		//робимо рядки і стовпці на весь розмір dataGridView
		for (int i = 0; i < dataGridView1->ColumnCount; i++) {
			dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		}
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			dataGridView1->Rows[i]->Height = dataGridView1->Height / dataGridView1->RowCount;
		}

		//ховаємо заголовки
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->ColumnHeadersVisible = false;

		//вимикаємо можливість додавати рядки в dataGridView
		dataGridView1->AllowUserToAddRows = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//отримуємо розмір dataGridView
		int rows = dataGridView1->RowCount + 1;
		int columns = dataGridView1->ColumnCount;

		//заповнюємо dataGridView випадковими числами
		Random^ rnd = gcnew Random();
		for (int i = 0; i < rows - 1; i++) {
			for (int j = 0; j < columns; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = rnd->Next(-100, 100);
			}
		}
	}
	};
}
