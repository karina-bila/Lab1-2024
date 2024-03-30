#pragma once
#include <math.h>


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







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîãToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->êîë³ğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîãToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->÷åğâîíèéToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->÷åğâîíèéToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1, 439);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"© 2024, Á³ëà Êàğ³íà";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(187, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 37);
			this->label1->TabIndex = 13;
			this->label1->Text = L"ÒÅÊÑÒ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->êîë³ğToolStripMenuItem,
					this->âèõ³äToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(491, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// êîë³ğToolStripMenuItem
			// 
			this->êîë³ğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôîãToolStripMenuItem,
					this->òåêñòToolStripMenuItem
			});
			this->êîë³ğToolStripMenuItem->Name = L"êîë³ğToolStripMenuItem";
			this->êîë³ğToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->êîë³ğToolStripMenuItem->Text = L"Êîë³ğ";
			// 
			// ôîãToolStripMenuItem
			// 
			this->ôîãToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem1,
					this->çåëåíèéToolStripMenuItem1, this->ñèí³éToolStripMenuItem1
			});
			this->ôîãToolStripMenuItem->Name = L"ôîãToolStripMenuItem";
			this->ôîãToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->ôîãToolStripMenuItem->Tag = L"";
			this->ôîãToolStripMenuItem->Text = L"Ôîí";
			// 
			// ÷åğâîíèéToolStripMenuItem1
			// 
			this->÷åğâîíèéToolStripMenuItem1->Name = L"÷åğâîíèéToolStripMenuItem1";
			this->÷åğâîíèéToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->÷åğâîíèéToolStripMenuItem1->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem1_Click);
			// 
			// çåëåíèéToolStripMenuItem1
			// 
			this->çåëåíèéToolStripMenuItem1->Name = L"çåëåíèéToolStripMenuItem1";
			this->çåëåíèéToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->çåëåíèéToolStripMenuItem1->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem1_Click);
			// 
			// ñèí³éToolStripMenuItem1
			// 
			this->ñèí³éToolStripMenuItem1->Name = L"ñèí³éToolStripMenuItem1";
			this->ñèí³éToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->ñèí³éToolStripMenuItem1->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem1_Click);
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem,
					this->çåëåíèéToolStripMenuItem, this->ñèí³éToolStripMenuItem
			});
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->òåêñòToolStripMenuItem->Text = L"Òåêñò";
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->÷åğâîíèéToolStripMenuItem->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem2,
					this->çåëåíèéToolStripMenuItem2, this->ñèí³éToolStripMenuItem2
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(130, 70);
			// 
			// ÷åğâîíèéToolStripMenuItem2
			// 
			this->÷åğâîíèéToolStripMenuItem2->Name = L"÷åğâîíèéToolStripMenuItem2";
			this->÷åğâîíèéToolStripMenuItem2->Size = System::Drawing::Size(129, 22);
			this->÷åğâîíèéToolStripMenuItem2->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem2_Click);
			// 
			// çåëåíèéToolStripMenuItem2
			// 
			this->çåëåíèéToolStripMenuItem2->Name = L"çåëåíèéToolStripMenuItem2";
			this->çåëåíèéToolStripMenuItem2->Size = System::Drawing::Size(129, 22);
			this->çåëåíèéToolStripMenuItem2->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem2_Click);
			// 
			// ñèí³éToolStripMenuItem2
			// 
			this->ñèí³éToolStripMenuItem2->Name = L"ñèí³éToolStripMenuItem2";
			this->ñèí³éToolStripMenuItem2->Size = System::Drawing::Size(129, 22);
			this->ñèí³éToolStripMenuItem2->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem2_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem3,
					this->çåëåíèéToolStripMenuItem3, this->ñèí³éToolStripMenuItem3
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(130, 70);
			// 
			// ÷åğâîíèéToolStripMenuItem3
			// 
			this->÷åğâîíèéToolStripMenuItem3->Name = L"÷åğâîíèéToolStripMenuItem3";
			this->÷åğâîíèéToolStripMenuItem3->Size = System::Drawing::Size(129, 22);
			this->÷åğâîíèéToolStripMenuItem3->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem3_Click);
			// 
			// çåëåíèéToolStripMenuItem3
			// 
			this->çåëåíèéToolStripMenuItem3->Name = L"çåëåíèéToolStripMenuItem3";
			this->çåëåíèéToolStripMenuItem3->Size = System::Drawing::Size(129, 22);
			this->çåëåíèéToolStripMenuItem3->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem3_Click);
			// 
			// ñèí³éToolStripMenuItem3
			// 
			this->ñèí³éToolStripMenuItem3->Name = L"ñèí³éToolStripMenuItem3";
			this->ñèí³éToolStripMenuItem3->Size = System::Drawing::Size(129, 22);
			this->ñèí³éToolStripMenuItem3->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 464);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Êîíñòğóşâàííÿ ìåíş";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//öåíòğóâàííÿ ôîğìè
		this->Location = System::Drawing::Point((Screen::PrimaryScreen->Bounds.Width - this->Width) / 2,
			(Screen::PrimaryScreen->Bounds.Height - this->Height) / 2);

	}
	private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Red;
	}
	private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Green;
	}
	private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Blue;
	}
	private: System::Void ÷åğâîíèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Red;
	}
	private: System::Void çåëåíèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Green;
	}
	private: System::Void ñèí³éToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Blue;
	}
	private: System::Void ÷åğâîíèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Red;
	}
	private: System::Void çåëåíèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Green;
	}
	private: System::Void ñèí³éToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Blue;
	}
	private: System::Void ÷åğâîíèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Red;
	}
	private: System::Void çåëåíèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Green;
	}
	private: System::Void ñèí³éToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Blue;
	}
	private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
