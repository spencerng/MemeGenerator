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
private: System::Windows::Forms::Button^  publishImgurButton;

	System::Windows::Forms::ColorDialog^  colorDialog1;
	System::Windows::Forms::OpenFileDialog^  openFileDialog;
	System::Windows::Forms::SaveFileDialog^  saveFileDialog;
private: System::Windows::Forms::PictureBox^  textColorBox;


	System::Windows::Forms::Label^  label2;
	System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  strokeColorBox;


	System::Windows::Forms::TextBox^  bottomCaptionTextBox;


private: System::Windows::Forms::ComboBox^  chooseFontBox;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::CheckBox^  forceUppercase;


		 Meme^ currentMeme;
	System::Void displayMeme();
	

	System::Void captionTextChanged(System::Object^  sender, System::EventArgs^  e);

	System::Void sourceFileChooseButton_Click(System::Object^  sender, System::EventArgs^  e);

	System::Void saveImageButton_Click(System::Object^  sender, System::EventArgs^  e);

	

	
	System::Void MainWindow::Meme_Load(System::Object^, System::EventArgs^);

	System::Void chooseFontBoxChange(System::Object^, System::EventArgs^);

	System::Void forceUppercase_CheckedChanged(System::Object^  sender, System::EventArgs^  e);


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
		this->publishImgurButton = (gcnew System::Windows::Forms::Button());
		this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
		this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
		this->textColorBox = (gcnew System::Windows::Forms::PictureBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->strokeColorBox = (gcnew System::Windows::Forms::PictureBox());
		this->chooseFontBox = (gcnew System::Windows::Forms::ComboBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->forceUppercase = (gcnew System::Windows::Forms::CheckBox());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDisplay))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textColorBox))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->strokeColorBox))->BeginInit();
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
		this->sourceFileChooseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
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
		this->topTextLabel->Location = System::Drawing::Point(725, 145);
		this->topTextLabel->Name = L"topTextLabel";
		this->topTextLabel->Size = System::Drawing::Size(95, 20);
		this->topTextLabel->TabIndex = 5;
		this->topTextLabel->Text = L"Top Caption";
		// 
		// topCaptionTextBox
		// 
		this->topCaptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->topCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		this->topCaptionTextBox->Enabled = false;
		this->topCaptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->topCaptionTextBox->Location = System::Drawing::Point(729, 168);
		this->topCaptionTextBox->Multiline = true;
		this->topCaptionTextBox->Name = L"topCaptionTextBox";
		this->topCaptionTextBox->Size = System::Drawing::Size(375, 69);
		this->topCaptionTextBox->TabIndex = 6;
		this->topCaptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::captionTextChanged);
		// 
		// bottomCaptionTextBox
		// 
		this->bottomCaptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->bottomCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		this->bottomCaptionTextBox->Enabled = false;
		this->bottomCaptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->bottomCaptionTextBox->Location = System::Drawing::Point(729, 278);
		this->bottomCaptionTextBox->Multiline = true;
		this->bottomCaptionTextBox->Name = L"bottomCaptionTextBox";
		this->bottomCaptionTextBox->Size = System::Drawing::Size(375, 69);
		this->bottomCaptionTextBox->TabIndex = 8;
		this->bottomCaptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::captionTextChanged);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(725, 255);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(120, 20);
		this->label1->TabIndex = 7;
		this->label1->Text = L"Bottom Caption";
		// 
		// saveImageButton
		// 
		this->saveImageButton->Enabled = false;
		this->saveImageButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->saveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->saveImageButton->Location = System::Drawing::Point(729, 461);
		this->saveImageButton->Name = L"saveImageButton";
		this->saveImageButton->Size = System::Drawing::Size(170, 43);
		this->saveImageButton->TabIndex = 10;
		this->saveImageButton->Text = L"Save Image";
		this->saveImageButton->UseVisualStyleBackColor = true;
		this->saveImageButton->Click += gcnew System::EventHandler(this, &MainWindow::saveImageButton_Click);
		// 
		// publishImgurButton
		// 
		this->publishImgurButton->Enabled = false;
		this->publishImgurButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->publishImgurButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->publishImgurButton->Location = System::Drawing::Point(934, 461);
		this->publishImgurButton->Name = L"publishImgurButton";
		this->publishImgurButton->Size = System::Drawing::Size(170, 43);
		this->publishImgurButton->TabIndex = 11;
		this->publishImgurButton->Text = L"Publish to Imgur";
		this->publishImgurButton->UseVisualStyleBackColor = true;
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
		// textColorBox
		// 
		this->textColorBox->BackColor = System::Drawing::Color::White;
		this->textColorBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textColorBox->Location = System::Drawing::Point(843, 401);
		this->textColorBox->Name = L"textColorBox";
		this->textColorBox->Size = System::Drawing::Size(25, 25);
		this->textColorBox->TabIndex = 12;
		this->textColorBox->TabStop = false;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(740, 404);
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
		this->label3->Location = System::Drawing::Point(911, 403);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(97, 20);
		this->label3->TabIndex = 15;
		this->label3->Text = L"Stroke Color";
		// 
		// strokeColorBox
		// 
		this->strokeColorBox->BackColor = System::Drawing::Color::Black;
		this->strokeColorBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		this->strokeColorBox->Location = System::Drawing::Point(1022, 400);
		this->strokeColorBox->Name = L"strokeColorBox";
		this->strokeColorBox->Size = System::Drawing::Size(25, 25);
		this->strokeColorBox->TabIndex = 14;
		this->strokeColorBox->TabStop = false;
		// 
		// chooseFontBox
		// 
		this->chooseFontBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->chooseFontBox->Enabled = false;
		this->chooseFontBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->chooseFontBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
		this->chooseFontBox->FormattingEnabled = true;
		this->chooseFontBox->Location = System::Drawing::Point(729, 103);
		this->chooseFontBox->Name = L"chooseFontBox";
		this->chooseFontBox->Size = System::Drawing::Size(375, 28);
		this->chooseFontBox->TabIndex = 17;
		this->chooseFontBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::chooseFontBoxChange);
		this->chooseFontBox->SelectedValueChanged += gcnew System::EventHandler(this, &MainWindow::chooseFontBoxChange);
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->Location = System::Drawing::Point(725, 74);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(74, 20);
		this->label4->TabIndex = 18;
		this->label4->Text = L"Typeface";
		// 
		// forceUppercase
		// 
		this->forceUppercase->AutoSize = true;
		this->forceUppercase->Checked = true;
		this->forceUppercase->CheckState = System::Windows::Forms::CheckState::Checked;
		this->forceUppercase->Enabled = false;
		this->forceUppercase->FlatAppearance->BorderSize = 10;
		this->forceUppercase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->forceUppercase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
		this->forceUppercase->Location = System::Drawing::Point(729, 357);
		this->forceUppercase->Name = L"forceUppercase";
		this->forceUppercase->Size = System::Drawing::Size(148, 24);
		this->forceUppercase->TabIndex = 19;
		this->forceUppercase->Text = L"Force Uppercase";
		this->forceUppercase->UseVisualStyleBackColor = true;
		this->forceUppercase->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::forceUppercase_CheckedChanged);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->AutoSize = true;
		this->ClientSize = System::Drawing::Size(1116, 529);
		this->Controls->Add(this->forceUppercase);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->chooseFontBox);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->strokeColorBox);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->textColorBox);
		this->Controls->Add(this->publishImgurButton);
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
		this->MaximizeBox = false;
		this->Name = L"MainWindow";
		this->Text = L"Meme Generator";
		this->Shown += gcnew System::EventHandler(this, &MainWindow::Meme_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDisplay))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textColorBox))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->strokeColorBox))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
};