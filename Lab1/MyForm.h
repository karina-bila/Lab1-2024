#pragma once
#include <cmath>]
#include <vector>
#include <iostream>
#include <string>


namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;




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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 469);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"© 2024, Біла Каріна";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(606, 465);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(598, 439);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(545, 357);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(246, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(598, 439);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(27, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(545, 357);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 500);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Function";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//створюємо одновимірний масив з вказівником та заповнюємо його випадковими числами від -100 до 100
		int size = 10;
		int* arr = new int[size];

		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 201 - 100;
		}

		//заповнюємо таблицю даними
		dataGridView1->ColumnCount = 1;
		dataGridView1->RowCount = size;
		dataGridView1->Columns[0]->HeaderText = "Масив";
		for (int i = 0; i < size; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = arr[i];
		}

		//знаходимо найменший елемент масиву та виводимо його на екран як messagebox
		int min = arr[0];
		for (int i = 1; i < size; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		MessageBox::Show("Мінімальний елемент масиву: " + min, "Результат");


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//створити двовимірний масив з vector
		int rows = 10;
		int cols = 10;
		vector<vector<int>> arr(rows, vector<int>(cols));

		//заповнити масив випадковими числами від -100 до 100
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				arr[i][j] = rand() % 201 - 100;
			}
		}

		//заповнити таблицю даними
		dataGridView2->ColumnCount = cols;
		dataGridView2->RowCount = rows;

		//робимо ширину стовпців однаковою
		for (int i = 0; i < cols; i++) {
			dataGridView2->Columns[i]->Width = 45;
		}

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = arr[i][j];
			}
		}

		//підрахувати середнє арифметичне від'ємних елементів масиву
		double sum = 0;
		int count = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (arr[i][j] < 0) {
					sum += arr[i][j];
					count++;
				}
			}
		}
		double avg = sum / count;

		MessageBox::Show("Середнє арифметичне від'ємних елементів масиву: " + avg, "Результат");


	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//center the form
		this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
			(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
