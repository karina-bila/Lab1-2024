#pragma once
#include "MyForm.h"
#include <vector>
#include <list>
#include <vcclr.h>
#include <random>

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public value struct Student {
		String^ firstName;
		String^ lastName;
		String^ middleName;
		String^ group;
		int age;
		int course;
		double firstSubjectMark;
		double secondSubjectMark;
		double thirdSubjectMark;
		double fourthSubjectMark;
		double fifthSubjectMark;
	};


	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		List<Student>^ dataList;

	public:
		MyForm(void)
		{
			InitializeComponent();
			dataList = gcnew List<Student>();

			dataGridView1 = gcnew DataGridView();

			dataGridView1->Dock = DockStyle::Fill;
			dataGridView1->Columns->Add("firstName", "Ім'я");
			dataGridView1->Columns->Add("lastName", "Прізвище");
			dataGridView1->Columns->Add("middleName", "По-батькові");
			dataGridView1->Columns->Add("group", "Група");
			dataGridView1->Columns->Add("age", "Вік");
			dataGridView1->Columns->Add("course", "Курс");
			dataGridView1->Columns->Add("firstSubjectMark", "Предмет 1");
			dataGridView1->Columns->Add("secondSubjectMark", "Предмет 2");
			dataGridView1->Columns->Add("thirdSubjectMark", "Предмет 3");
			dataGridView1->Columns->Add("fourthSubjectMark", "Предмет 4");
			dataGridView1->Columns->Add("fifthSubjectMark", "Предмет 5");

			dataGridView1->Location = System::Drawing::Point(0, menuStrip1->Height);
			dataGridView1->Size = System::Drawing::Size(this->ClientSize.Width, this->ClientSize.Height - menuStrip1->Height);

			dataGridView1->Dock = DockStyle::None;
			dataGridView1->AllowUserToAddRows = false;
			dataGridView1->AllowUserToDeleteRows = false;
			dataGridView1->AllowUserToOrderColumns = false;
			dataGridView1->AllowUserToResizeColumns = false;
			dataGridView1->AllowUserToResizeRows = false;

			this->Controls->Add(dataGridView1);
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ записатиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вивестиВідміниківToolStripMenuItem;


	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->записатиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вивестиВідміниківToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->записатиДаніToolStripMenuItem,
					this->вивестиВідміниківToolStripMenuItem, this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1179, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// записатиДаніToolStripMenuItem
			// 
			this->записатиДаніToolStripMenuItem->Name = L"записатиДаніToolStripMenuItem";
			this->записатиДаніToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->записатиДаніToolStripMenuItem->Text = L"Записати дані";
			this->записатиДаніToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::записатиДаніToolStripMenuItem_Click_1);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// вивестиВідміниківToolStripMenuItem
			// 
			this->вивестиВідміниківToolStripMenuItem->Name = L"вивестиВідміниківToolStripMenuItem";
			this->вивестиВідміниківToolStripMenuItem->Size = System::Drawing::Size(122, 20);
			this->вивестиВідміниківToolStripMenuItem->Text = L"Вивести відміників";
			this->вивестиВідміниківToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вивестиВідміниківToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1179, 468);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Function";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		array<String^>^ firstNames;
		array<String^>^ lastNames;
		array<String^>^ middleNames;

	public: void addStudent() {
		initializeNames();
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 5);
		std::uniform_int_distribution<> disAge(17, 22);
		std::uniform_int_distribution<> disCourse(1, 6);
		std::uniform_int_distribution<> disMark(3, 5);

		Student student = Student();
		student.firstName = firstNames[randomInt(0, firstNames->Length - 1)];
		student.lastName = lastNames[randomInt(0, lastNames->Length - 1)];
		student.middleName = middleNames[randomInt(0, middleNames->Length - 1)];
		student.group = gcnew String("ГР-" + dis(gen));
		student.age = disAge(gen);
		student.course = disCourse(gen);
		student.firstSubjectMark = disMark(gen);
		student.secondSubjectMark = disMark(gen);
		student.thirdSubjectMark = disMark(gen);
		student.fourthSubjectMark = disMark(gen);
		student.fifthSubjectMark = disMark(gen);

		dataList->Add(student);
	}

	public: void loadStudents() {
		dataGridView1->Rows->Clear();
		for each (Student student in dataList) {
			dataGridView1->Rows->Add(student.firstName, student.lastName, student.middleName, student.group, student.age, student.course, student.firstSubjectMark, student.secondSubjectMark, student.thirdSubjectMark, student.fourthSubjectMark, student.fifthSubjectMark);
		}
	}

	public: int randomInt(int min, int max) {
		static bool initialized = false;
		if (!initialized) {
			srand(time(nullptr));
			initialized = true;
		}
		return min + rand() % (max - min + 1);
	}

	protected: void initializeNames() {
		firstNames = gcnew array<String^> { "Іван", "Петро", "Сидор", "Василь", "Олег", "Микола", "Віктор", "Олександр", "Ігор", "Володимир" };
		lastNames = gcnew array<String^>{ "Білий", "Чорний", "Червоний", "Жовтий", "Зелений", "Синій", "Фіолетовий", "Блакитний", "Бірюзовий", "Оранжевий" };
		middleNames = gcnew array<String^>{ "Іванович", "Петрович", "Сидорович", "Васильович", "Олегович", "Миколайович", "Вікторович", "Олександрович", "Ігорович", "Володимирович" };
	}

	private: System::Void записатиДаніToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		addStudent();

		loadStudents();

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		addStudent();

		loadStudents();

	}

	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Програма для вивчення роботи з структурами", "Про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("©Біла Карина Русланівна \n Студенка групи 3СОМ", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void вивестиВідміниківToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Student>^ excellentStudents = gcnew List<Student>();
		for each (Student student in dataList) {
			int averageMark = (student.firstSubjectMark + student.secondSubjectMark + student.thirdSubjectMark + student.fourthSubjectMark + student.fifthSubjectMark) / 5;
			if (averageMark >= 4) {
				excellentStudents->Add(student);
			}
		}

		if (excellentStudents->Count == 0) {
			MessageBox::Show("Відміників немає", "Відміники", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			String^ message = "Відміники:\n";
			for each (Student student in excellentStudents) {
				message += student.firstName + " " + student.lastName + " " + student.middleName + "\n";
			}
			MessageBox::Show(message, "Відміники", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	};
}
