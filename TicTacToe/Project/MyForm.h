#pragma once

namespace Project {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 500);
			this->panel1->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Script", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->Location = System::Drawing::Point(7, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(491, 100);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Tic-Tac-Toe";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(91, 389);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 100);
			this->label7->TabIndex = 11;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(197, 389);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 100);
			this->label8->TabIndex = 10;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(303, 389);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 100);
			this->label9->TabIndex = 9;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(91, 282);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 100);
			this->label4->TabIndex = 8;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(197, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 100);
			this->label5->TabIndex = 7;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(303, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 100);
			this->label6->TabIndex = 6;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(303, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 100);
			this->label3->TabIndex = 5;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(197, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 100);
			this->label2->TabIndex = 4;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(91, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 100);
			this->label1->TabIndex = 3;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(475, 514);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 36);
			this->label10->TabIndex = 12;
			this->label10->Text = L"X";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label11->Location = System::Drawing::Point(113, 514);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(312, 36);
			this->label11->TabIndex = 12;
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::DarkRed;
			this->label12->Enabled = false;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label12->Location = System::Drawing::Point(12, 514);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 36);
			this->label12->TabIndex = 13;
			this->label12->Text = L"O";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 554);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(305, 28);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Play Again";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(120, 590);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(305, 28);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 631);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label3->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label3->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label3->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}

	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label6->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label6->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label6->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}
		control();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label1->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label1->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}
		control();

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label2->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label2->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label2->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label4->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label4->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label4->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}

	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label5->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label5->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label5->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label9->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label9->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}

	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label8->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D)
			{
				label8->Text = label10->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				control();
			}
			else
			{
				label8->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}
		control();

	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label7->Text == "")
		{
			if (label10->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D) {
				label7->Text = label10->Text;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				control();
			}
			else {
				label7->Text = label12->Text;
				label12->BorderStyle = System::Windows::Forms::BorderStyle::None;
				label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				OpponentControl();
			}
		}

	}
	private: bool matchFinish = false;
	private: System::Void control() {
		if (label1->Text == label10->Text && label2->Text == label10->Text && label3->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label1->BackColor = System::Drawing::Color::Red;
			label2->BackColor = System::Drawing::Color::Red;
			label3->BackColor = System::Drawing::Color::Red;
		}
		if (label4->Text == label10->Text && label5->Text == label10->Text && label6->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label4->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label6->BackColor = System::Drawing::Color::Red;
		}
		if (label7->Text == label10->Text && label8->Text == label10->Text && label9->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label7->BackColor = System::Drawing::Color::Red;
			label8->BackColor = System::Drawing::Color::Red;
			label9->BackColor = System::Drawing::Color::Red;
		}
		if (label1->Text == label10->Text && label4->Text == label10->Text && label7->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label1->BackColor = System::Drawing::Color::Red;
			label4->BackColor = System::Drawing::Color::Red;
			label7->BackColor = System::Drawing::Color::Red;
		}
		if (label2->Text == label10->Text && label5->Text == label10->Text && label8->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label2->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label8->BackColor = System::Drawing::Color::Red;
		}
		if (label3->Text == label10->Text && label6->Text == label10->Text && label9->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label3->BackColor = System::Drawing::Color::Red;
			label6->BackColor = System::Drawing::Color::Red;
			label9->BackColor = System::Drawing::Color::Red;
		}
		if (label1->Text == label10->Text && label5->Text == label10->Text && label9->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label1->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label9->BackColor = System::Drawing::Color::Red;
		}
		if (label3->Text == label10->Text && label5->Text == label10->Text && label7->Text == label10->Text) {
			label11->Text = label10->Text + " Won! Congrats!";
			label3->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label7->BackColor = System::Drawing::Color::Red;
		}
		if (label11->Text == label10->Text + " Won! Congrats!") {
			label1->Enabled = false; label2->Enabled = false; label3->Enabled = false;
			label4->Enabled = false; label5->Enabled = false; label6->Enabled = false;
			label7->Enabled = false; label8->Enabled = false; label9->Enabled = false;
			matchFinish = true;
		}
	}

	private: System::Void OpponentControl() {
		if (label1->Text == label12->Text && label2->Text == label12->Text && label3->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label1->BackColor = System::Drawing::Color::Red;
			label2->BackColor = System::Drawing::Color::Red;
			label3->BackColor = System::Drawing::Color::Red;
		}
		if (label4->Text == label12->Text && label5->Text == label12->Text && label6->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label4->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label6->BackColor = System::Drawing::Color::Red;
		}
		if (label7->Text == label12->Text && label8->Text == label12->Text && label9->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label7->BackColor = System::Drawing::Color::Red;
			label8->BackColor = System::Drawing::Color::Red;
			label9->BackColor = System::Drawing::Color::Red;
		}
		if (label1->Text == label12->Text && label4->Text == label12->Text && label7->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label1->BackColor = System::Drawing::Color::Red;
			label4->BackColor = System::Drawing::Color::Red;
			label7->BackColor = System::Drawing::Color::Red;
		}
		if (label2->Text == label12->Text && label5->Text == label12->Text && label8->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label2->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label8->BackColor = System::Drawing::Color::Red;
		}
		if (label3->Text == label12->Text && label6->Text == label12->Text && label9->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label3->BackColor = System::Drawing::Color::Red;
			label6->BackColor = System::Drawing::Color::Red;
			label9->BackColor = System::Drawing::Color::Red;
		}
		if (label1->Text == label12->Text && label5->Text == label12->Text && label9->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label1->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label9->BackColor = System::Drawing::Color::Red;
		}
		if (label3->Text == label12->Text && label5->Text == label12->Text && label7->Text == label12->Text) {
			label11->Text = label12->Text + " Won! Congrats!";
			label3->BackColor = System::Drawing::Color::Red;
			label5->BackColor = System::Drawing::Color::Red;
			label7->BackColor = System::Drawing::Color::Red;
		}
		if (label11->Text == label12->Text + " Won! Congrats!") {
			label1->Enabled = false; label2->Enabled = false; label3->Enabled = false;
			label4->Enabled = false; label5->Enabled = false; label6->Enabled = false;
			label7->Enabled = false; label8->Enabled = false; label9->Enabled = false;
			matchFinish = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm^ f = gcnew MyForm();
		f->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}