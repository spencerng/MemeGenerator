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


















	System::Void selectUrlButton_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void textColorBox_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void strokeColorBox_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void publishImgurButton_Click(System::Object^  sender, System::EventArgs^  e);
		 System::Void enableControls();
private: System::Windows::Forms::Panel^  mainComponentPanel;
private: System::Windows::Forms::Button^  selectUrlButton;
private: System::Windows::Forms::CheckBox^  forceUppercase;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::ComboBox^  chooseFontBox;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  strokeColorBox;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::PictureBox^  textColorBox;
private: System::Windows::Forms::Button^  publishImgurButton;
private: System::Windows::Forms::Button^  saveImageButton;
private: System::Windows::Forms::TextBox^  bottomCaptionTextBox;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  topCaptionTextBox;
private: System::Windows::Forms::Label^  topTextLabel;
private: System::Windows::Forms::Button^  sourceFileChooseButton;
private: System::Windows::Forms::Label^  sourceFileLabel;
private: System::Windows::Forms::PictureBox^  pictureDisplay;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
private: System::Windows::Forms::ColorDialog^  colorDialog1;
private: System::Windows::Forms::Panel^  helpPanel;

private: System::Windows::Forms::Label^  memeGeneratorLabel;
private: System::Windows::Forms::Button^  startButton;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::LinkLabel^  repoUrlLabel;

private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;












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
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
		this->mainComponentPanel = (gcnew System::Windows::Forms::Panel());
		this->selectUrlButton = (gcnew System::Windows::Forms::Button());
		this->forceUppercase = (gcnew System::Windows::Forms::CheckBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->chooseFontBox = (gcnew System::Windows::Forms::ComboBox());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->strokeColorBox = (gcnew System::Windows::Forms::PictureBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->textColorBox = (gcnew System::Windows::Forms::PictureBox());
		this->publishImgurButton = (gcnew System::Windows::Forms::Button());
		this->saveImageButton = (gcnew System::Windows::Forms::Button());
		this->bottomCaptionTextBox = (gcnew System::Windows::Forms::TextBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->topCaptionTextBox = (gcnew System::Windows::Forms::TextBox());
		this->topTextLabel = (gcnew System::Windows::Forms::Label());
		this->sourceFileChooseButton = (gcnew System::Windows::Forms::Button());
		this->sourceFileLabel = (gcnew System::Windows::Forms::Label());
		this->pictureDisplay = (gcnew System::Windows::Forms::PictureBox());
		this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
		this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
		this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		this->helpPanel = (gcnew System::Windows::Forms::Panel());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->repoUrlLabel = (gcnew System::Windows::Forms::LinkLabel());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->memeGeneratorLabel = (gcnew System::Windows::Forms::Label());
		this->startButton = (gcnew System::Windows::Forms::Button());
		this->mainComponentPanel->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->strokeColorBox))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textColorBox))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDisplay))->BeginInit();
		this->helpPanel->SuspendLayout();
		this->SuspendLayout();
		// 
		// mainComponentPanel
		// 
		this->mainComponentPanel->Controls->Add(this->selectUrlButton);
		this->mainComponentPanel->Controls->Add(this->forceUppercase);
		this->mainComponentPanel->Controls->Add(this->label4);
		this->mainComponentPanel->Controls->Add(this->chooseFontBox);
		this->mainComponentPanel->Controls->Add(this->label3);
		this->mainComponentPanel->Controls->Add(this->strokeColorBox);
		this->mainComponentPanel->Controls->Add(this->label2);
		this->mainComponentPanel->Controls->Add(this->textColorBox);
		this->mainComponentPanel->Controls->Add(this->publishImgurButton);
		this->mainComponentPanel->Controls->Add(this->saveImageButton);
		this->mainComponentPanel->Controls->Add(this->bottomCaptionTextBox);
		this->mainComponentPanel->Controls->Add(this->label1);
		this->mainComponentPanel->Controls->Add(this->topCaptionTextBox);
		this->mainComponentPanel->Controls->Add(this->topTextLabel);
		this->mainComponentPanel->Controls->Add(this->sourceFileChooseButton);
		this->mainComponentPanel->Controls->Add(this->sourceFileLabel);
		this->mainComponentPanel->Controls->Add(this->pictureDisplay);
		this->mainComponentPanel->Location = System::Drawing::Point(12, 12);
		this->mainComponentPanel->Name = L"mainComponentPanel";
		this->mainComponentPanel->Size = System::Drawing::Size(1104, 505);
		this->mainComponentPanel->TabIndex = 0;
		this->mainComponentPanel->Visible = false;
		// 
		// selectUrlButton
		// 
		this->selectUrlButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->selectUrlButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->selectUrlButton->Location = System::Drawing::Point(910, 8);
		this->selectUrlButton->Name = L"selectUrlButton";
		this->selectUrlButton->Size = System::Drawing::Size(180, 41);
		this->selectUrlButton->TabIndex = 37;
		this->selectUrlButton->Text = L"Select Source URL";
		this->selectUrlButton->UseVisualStyleBackColor = true;
		this->selectUrlButton->Click += gcnew System::EventHandler(this, &MainWindow::selectUrlButton_Click);
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
		this->forceUppercase->Location = System::Drawing::Point(715, 373);
		this->forceUppercase->Name = L"forceUppercase";
		this->forceUppercase->Size = System::Drawing::Size(148, 24);
		this->forceUppercase->TabIndex = 36;
		this->forceUppercase->Text = L"Force Uppercase";
		this->forceUppercase->UseVisualStyleBackColor = true;
		this->forceUppercase->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::forceUppercase_CheckedChanged);
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->Location = System::Drawing::Point(711, 107);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(74, 20);
		this->label4->TabIndex = 35;
		this->label4->Text = L"Typeface";
		// 
		// chooseFontBox
		// 
		this->chooseFontBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->chooseFontBox->Enabled = false;
		this->chooseFontBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->chooseFontBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
		this->chooseFontBox->FormattingEnabled = true;
		this->chooseFontBox->Location = System::Drawing::Point(715, 136);
		this->chooseFontBox->Name = L"chooseFontBox";
		this->chooseFontBox->Size = System::Drawing::Size(375, 28);
		this->chooseFontBox->TabIndex = 34;
		this->chooseFontBox->SelectedValueChanged += gcnew System::EventHandler(this, &MainWindow::chooseFontBoxChange);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->Location = System::Drawing::Point(933, 415);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(97, 20);
		this->label3->TabIndex = 33;
		this->label3->Text = L"Stroke Color";
		// 
		// strokeColorBox
		// 
		this->strokeColorBox->BackColor = System::Drawing::Color::Black;
		this->strokeColorBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->strokeColorBox->Cursor = System::Windows::Forms::Cursors::Hand;
		this->strokeColorBox->Enabled = false;
		this->strokeColorBox->Location = System::Drawing::Point(1036, 413);
		this->strokeColorBox->Name = L"strokeColorBox";
		this->strokeColorBox->Size = System::Drawing::Size(25, 25);
		this->strokeColorBox->TabIndex = 32;
		this->strokeColorBox->TabStop = false;
		this->strokeColorBox->Click += gcnew System::EventHandler(this, &MainWindow::strokeColorBox_Click);
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(743, 415);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(80, 20);
		this->label2->TabIndex = 31;
		this->label2->Text = L"Text Color";
		// 
		// textColorBox
		// 
		this->textColorBox->BackColor = System::Drawing::Color::White;
		this->textColorBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textColorBox->Cursor = System::Windows::Forms::Cursors::Hand;
		this->textColorBox->Enabled = false;
		this->textColorBox->Location = System::Drawing::Point(829, 413);
		this->textColorBox->Name = L"textColorBox";
		this->textColorBox->Size = System::Drawing::Size(25, 25);
		this->textColorBox->TabIndex = 30;
		this->textColorBox->TabStop = false;
		this->textColorBox->Click += gcnew System::EventHandler(this, &MainWindow::textColorBox_Click);
		// 
		// publishImgurButton
		// 
		this->publishImgurButton->Enabled = false;
		this->publishImgurButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->publishImgurButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->publishImgurButton->Location = System::Drawing::Point(910, 456);
		this->publishImgurButton->Name = L"publishImgurButton";
		this->publishImgurButton->Size = System::Drawing::Size(180, 43);
		this->publishImgurButton->TabIndex = 29;
		this->publishImgurButton->Text = L"Publish to Imgur";
		this->publishImgurButton->UseVisualStyleBackColor = true;
		this->publishImgurButton->Click += gcnew System::EventHandler(this, &MainWindow::publishImgurButton_Click);
		// 
		// saveImageButton
		// 
		this->saveImageButton->Enabled = false;
		this->saveImageButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->saveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->saveImageButton->Location = System::Drawing::Point(715, 455);
		this->saveImageButton->Name = L"saveImageButton";
		this->saveImageButton->Size = System::Drawing::Size(180, 43);
		this->saveImageButton->TabIndex = 28;
		this->saveImageButton->Text = L"Save Image";
		this->saveImageButton->UseVisualStyleBackColor = true;
		this->saveImageButton->Click += gcnew System::EventHandler(this, &MainWindow::saveImageButton_Click);
		// 
		// bottomCaptionTextBox
		// 
		this->bottomCaptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->bottomCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		this->bottomCaptionTextBox->Enabled = false;
		this->bottomCaptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->bottomCaptionTextBox->Location = System::Drawing::Point(715, 298);
		this->bottomCaptionTextBox->Multiline = true;
		this->bottomCaptionTextBox->Name = L"bottomCaptionTextBox";
		this->bottomCaptionTextBox->Size = System::Drawing::Size(375, 69);
		this->bottomCaptionTextBox->TabIndex = 27;
		this->bottomCaptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::captionTextChanged);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(711, 275);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(120, 20);
		this->label1->TabIndex = 26;
		this->label1->Text = L"Bottom Caption";
		// 
		// topCaptionTextBox
		// 
		this->topCaptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->topCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		this->topCaptionTextBox->Enabled = false;
		this->topCaptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->topCaptionTextBox->Location = System::Drawing::Point(715, 198);
		this->topCaptionTextBox->Multiline = true;
		this->topCaptionTextBox->Name = L"topCaptionTextBox";
		this->topCaptionTextBox->Size = System::Drawing::Size(375, 69);
		this->topCaptionTextBox->TabIndex = 25;
		this->topCaptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::captionTextChanged);
		// 
		// topTextLabel
		// 
		this->topTextLabel->AutoSize = true;
		this->topTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->topTextLabel->Location = System::Drawing::Point(711, 175);
		this->topTextLabel->Name = L"topTextLabel";
		this->topTextLabel->Size = System::Drawing::Size(95, 20);
		this->topTextLabel->TabIndex = 24;
		this->topTextLabel->Text = L"Top Caption";
		// 
		// sourceFileChooseButton
		// 
		this->sourceFileChooseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->sourceFileChooseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->sourceFileChooseButton->Location = System::Drawing::Point(715, 8);
		this->sourceFileChooseButton->Name = L"sourceFileChooseButton";
		this->sourceFileChooseButton->Size = System::Drawing::Size(180, 41);
		this->sourceFileChooseButton->TabIndex = 23;
		this->sourceFileChooseButton->Text = L"Select Source File";
		this->sourceFileChooseButton->UseVisualStyleBackColor = true;
		this->sourceFileChooseButton->Click += gcnew System::EventHandler(this, &MainWindow::sourceFileChooseButton_Click);
		// 
		// sourceFileLabel
		// 
		this->sourceFileLabel->AutoSize = true;
		this->sourceFileLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->sourceFileLabel->Location = System::Drawing::Point(712, 68);
		this->sourceFileLabel->Name = L"sourceFileLabel";
		this->sourceFileLabel->Size = System::Drawing::Size(0, 17);
		this->sourceFileLabel->TabIndex = 22;
		// 
		// pictureDisplay
		// 
		this->pictureDisplay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->pictureDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->pictureDisplay->ImageLocation = L"";
		this->pictureDisplay->Location = System::Drawing::Point(3, 3);
		this->pictureDisplay->Margin = System::Windows::Forms::Padding(2);
		this->pictureDisplay->Name = L"pictureDisplay";
		this->pictureDisplay->Size = System::Drawing::Size(694, 499);
		this->pictureDisplay->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureDisplay->TabIndex = 21;
		this->pictureDisplay->TabStop = false;
		// 
		// saveFileDialog
		// 
		this->saveFileDialog->DefaultExt = L"jpg";
		this->saveFileDialog->Filter = L"JPEG Image|*.jpg";
		this->saveFileDialog->ShowHelp = true;
		this->saveFileDialog->Title = L"Save meme";
		// 
		// openFileDialog
		// 
		this->openFileDialog->Filter = L"Image files|*.jpg;*.jpeg;*.png;*.gif";
		this->openFileDialog->ShowHelp = true;
		this->openFileDialog->Title = L"Choose source file";
		// 
		// helpPanel
		// 
		this->helpPanel->Controls->Add(this->label7);
		this->helpPanel->Controls->Add(this->repoUrlLabel);
		this->helpPanel->Controls->Add(this->label6);
		this->helpPanel->Controls->Add(this->label5);
		this->helpPanel->Controls->Add(this->memeGeneratorLabel);
		this->helpPanel->Controls->Add(this->startButton);
		this->helpPanel->Location = System::Drawing::Point(12, 12);
		this->helpPanel->Name = L"helpPanel";
		this->helpPanel->Size = System::Drawing::Size(1092, 505);
		this->helpPanel->TabIndex = 38;
		// 
		// label7
		// 
		this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
		this->label7->Location = System::Drawing::Point(238, 136);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(657, 314);
		this->label7->TabIndex = 6;
		this->label7->Text = "Directions:" + "\n" +
			"1. Select a source image" + "\n" +
			"   i.  Open a downloaded image with \"Select source file\"\n" +
			"   ii. Paste an image address from the internet with \"Select source URL\"\n" +
			"       (such as https://i.imgur.com/iDpzD4A.png)\n" +
			"2. Add top and bottom captions by typing into the text boxes\n" +
			"3. Change typeface by selecting the dropdown bar\n" +
			"4. Change text and stroke color by clicking on the colored boxes\n" +
			"5. Export your meme\n" +
			"   i.  Save your meme as a JPEG locally with \"Save image\"\n" +
			"   ii. Publish your meme online to Imgur with \"Publish to Imgur.\"\n" +
			"       Once uploaded, the image's URL will be copied to your clipboard.\n";
		// 
		// repoUrlLabel
		// 
		this->repoUrlLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->repoUrlLabel->Location = System::Drawing::Point(3, 108);
		this->repoUrlLabel->Name = L"repoUrlLabel";
		this->repoUrlLabel->Size = System::Drawing::Size(1086, 23);
		this->repoUrlLabel->TabIndex = 5;
		this->repoUrlLabel->TabStop = true;
		this->repoUrlLabel->Text = L"http://github.com/spencerng/MemeGenerator";
		this->repoUrlLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		this->repoUrlLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainWindow::repoUrlLabel_LinkClicked);
		// 
		// label6
		// 
		this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
		this->label6->Location = System::Drawing::Point(3, 78);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(1089, 31);
		this->label6->TabIndex = 4;
		this->label6->Text = L"Version 1.1";
		this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label5
		// 
		this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
		this->label5->Location = System::Drawing::Point(3, 44);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(1089, 38);
		this->label5->TabIndex = 3;
		this->label5->Text = L"By Spencer Ng, Adrian Wylie, and Rameen Farooq";
		this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// memeGeneratorLabel
		// 
		this->memeGeneratorLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->memeGeneratorLabel->Location = System::Drawing::Point(3, 4);
		this->memeGeneratorLabel->Name = L"memeGeneratorLabel";
		this->memeGeneratorLabel->Size = System::Drawing::Size(1089, 41);
		this->memeGeneratorLabel->TabIndex = 2;
		this->memeGeneratorLabel->Text = L"Meme Generator";
		this->memeGeneratorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// startButton
		// 
		this->startButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
		this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->startButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->startButton->Location = System::Drawing::Point(455, 455);
		this->startButton->Name = L"startButton";
		this->startButton->Size = System::Drawing::Size(204, 44);
		this->startButton->TabIndex = 1;
		this->startButton->Text = L"Start Making Memes!";
		this->startButton->UseVisualStyleBackColor = true;
		this->startButton->Click += gcnew System::EventHandler(this, &MainWindow::startButton_Click);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1116, 529);
		this->Controls->Add(this->helpPanel);
		this->Controls->Add(this->mainComponentPanel);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->HelpButton = true;
		this->Margin = System::Windows::Forms::Padding(2);
		this->MaximizeBox = false;
		this->MinimizeBox = false;
		this->Name = L"MainWindow";
		this->Text = L"Meme Generator";
		this->HelpButtonClicked += gcnew System::ComponentModel::CancelEventHandler(this, &MainWindow::MainWindow_HelpButtonClicked);
		this->Shown += gcnew System::EventHandler(this, &MainWindow::Meme_Load);
		this->mainComponentPanel->ResumeLayout(false);
		this->mainComponentPanel->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->strokeColorBox))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textColorBox))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDisplay))->EndInit();
		this->helpPanel->ResumeLayout(false);
		this->ResumeLayout(false);

	}
#pragma endregion
	


private: System::Void repoUrlLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 
			 this->repoUrlLabel->Links[repoUrlLabel->Links->IndexOf(e->Link)]->Visited = true;

			 // Display the appropriate link based on the value of the
			 // LinkData property of the Link Object*.
			 String^ target = dynamic_cast<String^>(e->Link->LinkData);

			 // If the value looks like a URL, navigate to it.
			 // Otherwise, display it in a message box.
			 
				 System::Diagnostics::Process::Start("http://github.com/spencerng/MemeGenerator");
			 
}

private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 helpPanel->Visible = false;
			 mainComponentPanel->Visible = true;
}
private: System::Void MainWindow_HelpButtonClicked(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 e->Cancel = true;
			 
			 
			 helpPanel->Visible = !helpPanel->Visible;
			 mainComponentPanel->Visible = !helpPanel->Visible;

}
};