#pragma once
#include <cmath>
#include "Author.h"
#include "AboutApp.h"

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Lab1;
	//import author info form


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





	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ îá÷èñëèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀâòîğàToolStripMenuItem;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îá÷èñëèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(333, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ââåä³òü ä³éñí³ ÷èñëà (ğîçä³ëÿş÷è Enter)";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(5, 73);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(336, 223);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îá÷èñëèòèToolStripMenuItem,
					this->î÷èñòèòèToolStripMenuItem, this->ïğîÏğîãğàìóToolStripMenuItem, this->ïğîÀâòîğàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(350, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îá÷èñëèòèToolStripMenuItem
			// 
			this->îá÷èñëèòèToolStripMenuItem->Name = L"îá÷èñëèòèToolStripMenuItem";
			this->îá÷èñëèòèToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->îá÷èñëèòèToolStripMenuItem->Text = L"Îá÷èñëèòè";
			this->îá÷èñëèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îá÷èñëèòèToolStripMenuItem_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->î÷èñòèòèToolStripMenuItem->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// ïğîÀâòîğàToolStripMenuItem
			// 
			this->ïğîÀâòîğàToolStripMenuItem->Name = L"ïğîÀâòîğàToolStripMenuItem";
			this->ïğîÀâòîğàToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->ïğîÀâòîğàToolStripMenuItem->Text = L"Ïğî àâòîğà";
			this->ïğîÀâòîğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÀâòîğàToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 308);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Function";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//center the form
		this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
			(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);
	}

	private: System::Void îá÷èñëèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ïåğåòâîğåííÿ òåêñòó â ìàñèâ ÷èñåë
		String^ str = richTextBox1->Text;
		array<String^>^ arr = str->Split('\n');

		//ïîøóê ìàêñèìàëüíîãî òà ì³í³ìàëüíîãî ÷èñëà
		double max = Convert::ToDouble(arr[0]);
		double min = Convert::ToDouble(arr[0]);
		for (int i = 1; i < arr->Length; i++) {
			double num = Convert::ToDouble(arr[i]);
			if (num > max) max = num;
			if (num < min) min = num;
		}

		//ï³äğàõóíîê ğ³çíèö³ ì³æ íèìè
		double diff = max - min;

		//âèâåäåííÿ ğåçóëüòàòó
		richTextBox1->Clear();
		richTextBox1->AppendText("Ìàêñèìàëüíå ÷èñëî: " + max
			+ "\nÌ³í³ìàëüíå ÷èñëî: "
			+ min + "\nĞ³çíèöÿ: " + diff);
	}
	private: System::Void î÷èñòèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		richTextBox1->Focus();
	}
	private: System::Void ïğîÀâòîğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Author^ form = gcnew Author();

		form->ShowDialog();
	}
	private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AboutApp^ form = gcnew AboutApp();

		form->ShowDialog();
	}
	};
}
