#pragma once
#include<string>
#include "Meme.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class MainWindow : public System::Windows::Forms::Form {
	public:
		MainWindow(void);

	protected:
		~MainWindow();

private: 
	System::Windows::Forms::PictureBox^  pictureDisplay;
	System::Windows::Forms::Label^  sourceFileLabel;
	System::Windows::Forms::Button^  sourceFileChooseButton;
	System::Windows::Forms::Label^  topTextLabel;
	System::Windows::Forms::TextBox^  topCaptionTextBox;
	System::Windows::Forms::Label^  label1;
	System::Windows::Forms::Button^  saveImageButton;
	System::Windows::Forms::Button^  button3;
	System::Windows::Forms::ColorDialog^  colorDialog1;
	System::Windows::Forms::OpenFileDialog^  openFileDialog;
	System::Windows::Forms::SaveFileDialog^  saveFileDialog;
	System::Windows::Forms::PictureBox^  pictureBox1;
	System::Windows::Forms::Label^  label2;
	System::Windows::Forms::Label^  label3;
	System::Windows::Forms::PictureBox^  pictureBox2;
	System::Windows::Forms::TextBox^  bottomCaptionTextBox;
	System::Windows::Forms::FontDialog^  fontDialog1;
	System::Windows::Forms::Button^  chooseFontButton;
	

	System::Void captionTextChanged(System::Object^  sender, System::EventArgs^  e);

	System::Void sourceFileChooseButton_Click(System::Object^  sender, System::EventArgs^  e);

	System::Void saveImageButton_Click(System::Object^  sender, System::EventArgs^  e);

	System::Void chooseFontButton_Click(System::Object^  sender, System::EventArgs^  e);
	
	System::Void MainWindow::Meme_Load(System::Object^, System::EventArgs^);


	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void) {
		this->pictureDisplay = (gcnew System::Windows::Forms::PictureBox());
		this->sourceFileLabel = (gcnew System::Windows::Forms::Label());
		this->sourceFileChooseButton = (gcnew System::Windows::Forms::Button());
		this->topTextLabel = (gcnew System::Windows::Forms::Label());
		this->topCaptionTextBox = (gcnew System::Windows::Forms::TextBox());
		this->bottomCaptionTextBox = (gcnew System::Windows::Forms::TextBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->saveImageButton = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
		this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
		this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
		this->chooseFontButton = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDisplay))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
		this->SuspendLayout();
		// 
		// pictureDisplay
		// 
		this->pictureDisplay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->pictureDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->pictureDisplay->ImageLocation = L"";
		this->pictureDisplay->Location = System::Drawing::Point(22, 19);
		this->pictureDisplay->Margin = System::Windows::Forms::Padding(2);
		this->pictureDisplay->Name = L"pictureDisplay";
		this->pictureDisplay->Size = System::Drawing::Size(694, 499);
		this->pictureDisplay->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureDisplay->TabIndex = 2;
		this->pictureDisplay->TabStop = false;
		// 
		// sourceFileLabel
		// 
		this->sourceFileLabel->AutoSize = true;
		this->sourceFileLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->sourceFileLabel->Location = System::Drawing::Point(905, 32);
		this->sourceFileLabel->Name = L"sourceFileLabel";
		this->sourceFileLabel->Size = System::Drawing::Size(0, 17);
		this->sourceFileLabel->TabIndex = 3;
		// 
		// sourceFileChooseButton
		// 
		this->sourceFileChooseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->sourceFileChooseButton->Location = System::Drawing::Point(729, 21);
		this->sourceFileChooseButton->Name = L"sourceFileChooseButton";
		this->sourceFileChooseButton->Size = System::Drawing::Size(160, 43);
		this->sourceFileChooseButton->TabIndex = 4;
		this->sourceFileChooseButton->Text = L"Choose Source File";
		this->sourceFileChooseButton->UseVisualStyleBackColor = true;
		this->sourceFileChooseButton->Click += gcnew System::EventHandler(this, &MainWindow::sourceFileChooseButton_Click);
		// 
		// topTextLabel
		// 
		this->topTextLabel->AutoSize = true;
		this->topTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->topTextLabel->Location = System::Drawing::Point(725, 92);
		this->topTextLabel->Name = L"topTextLabel";
		this->topTextLabel->Size = System::Drawing::Size(95, 20);
		this->topTextLabel->TabIndex = 5;
		this->topTextLabel->Text = L"Top Caption";
		// 
		// topCaptionTextBox
		// 
		this->topCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		this->topCaptionTextBox->Enabled = false;
		this->topCaptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->topCaptionTextBox->Location = System::Drawing::Point(729, 115);
		this->topCaptionTextBox->Name = L"topCaptionTextBox";
		this->topCaptionTextBox->Size = System::Drawing::Size(344, 26);
		this->topCaptionTextBox->TabIndex = 6;
		this->topCaptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::captionTextChanged);
		// 
		// bottomCaptionTextBox
		// 
		this->bottomCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		this->bottomCaptionTextBox->Enabled = false;
		this->bottomCaptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->bottomCaptionTextBox->Location = System::Drawing::Point(729, 186);
		this->bottomCaptionTextBox->Name = L"bottomCaptionTextBox";
		this->bottomCaptionTextBox->Size = System::Drawing::Size(344, 26);
		this->bottomCaptionTextBox->TabIndex = 8;
		this->bottomCaptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::captionTextChanged);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(725, 163);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(120, 20);
		this->label1->TabIndex = 7;
		this->label1->Text = L"Bottom Caption";
		// 
		// saveImageButton
		// 
		this->saveImageButton->Enabled = false;
		this->saveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->saveImageButton->Location = System::Drawing::Point(729, 461);
		this->saveImageButton->Name = L"saveImageButton";
		this->saveImageButton->Size = System::Drawing::Size(160, 43);
		this->saveImageButton->TabIndex = 10;
		this->saveImageButton->Text = L"Save Image";
		this->saveImageButton->UseVisualStyleBackColor = true;
		this->saveImageButton->Click += gcnew System::EventHandler(this, &MainWindow::saveImageButton_Click);
		// 
		// button3
		// 
		this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button3->Location = System::Drawing::Point(909, 461);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(160, 43);
		this->button3->TabIndex = 11;
		this->button3->Text = L"Publish to Web";
		this->button3->UseVisualStyleBackColor = true;
		// 
		// openFileDialog
		// 
		this->openFileDialog->Filter = L"Image files|*.jpg;*.jpeg;*.png;*.gif";
		this->openFileDialog->ShowHelp = true;
		this->openFileDialog->Title = L"Choose source file";
		// 
		// saveFileDialog
		// 
		this->saveFileDialog->DefaultExt = L"jpg";
		this->saveFileDialog->Filter = L"JPEG Image|*.jpg";
		this->saveFileDialog->ShowHelp = true;
		this->saveFileDialog->Title = L"Save meme";
		// 
		// pictureBox1
		// 
		this->pictureBox1->BackColor = System::Drawing::Color::White;
		this->pictureBox1->Location = System::Drawing::Point(839, 243);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(25, 25);
		this->pictureBox1->TabIndex = 12;
		this->pictureBox1->TabStop = false;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(753, 243);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(80, 20);
		this->label2->TabIndex = 13;
		this->label2->Text = L"Text Color";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->Location = System::Drawing::Point(896, 243);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(97, 20);
		this->label3->TabIndex = 15;
		this->label3->Text = L"Stroke Color";
		// 
		// pictureBox2
		// 
		this->pictureBox2->BackColor = System::Drawing::Color::Black;
		this->pictureBox2->Location = System::Drawing::Point(1015, 240);
		this->pictureBox2->Name = L"pictureBox2";
		this->pictureBox2->Size = System::Drawing::Size(25, 25);
		this->pictureBox2->TabIndex = 14;
		this->pictureBox2->TabStop = false;
		// 
		// chooseFontButton
		// 
		this->chooseFontButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->chooseFontButton->Location = System::Drawing::Point(729, 312);
		this->chooseFontButton->Name = L"chooseFontButton";
		this->chooseFontButton->Size = System::Drawing::Size(160, 43);
		this->chooseFontButton->TabIndex = 16;
		this->chooseFontButton->Text = L"Choose Font";
		this->chooseFontButton->UseVisualStyleBackColor = true;
		this->chooseFontButton->Click += gcnew System::EventHandler(this, &MainWindow::chooseFontButton_Click);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->AutoSize = true;
		this->ClientSize = System::Drawing::Size(1085, 529);
		this->Controls->Add(this->chooseFontButton);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->pictureBox2);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->pictureBox1);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->saveImageButton);
		this->Controls->Add(this->bottomCaptionTextBox);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->topCaptionTextBox);
		this->Controls->Add(this->topTextLabel);
		this->Controls->Add(this->sourceFileChooseButton);
		this->Controls->Add(this->sourceFileLabel);
		this->Controls->Add(this->pictureDisplay);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->Margin = System::Windows::Forms::Padding(2);
		this->Name = L"MainWindow";
		this->Text = L"Meme Generator";
		this->Load += gcnew System::EventHandler(this, &MainWindow::Meme_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDisplay))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
};