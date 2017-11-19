#include "MainWindow.h"
#include "UrlPrompt.h"
#include<array>

[STAThread]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
	
	System::Windows::Forms::Application::Run(%MainWindow());
}

System::Void MainWindow::Meme_Load(System::Object^ obj, System::EventArgs^ args){
	currentMeme = gcnew Meme();
	
	cli::array<FontFamily^, 1>^ fontFamilies;

	System::Drawing::Text::InstalledFontCollection^ installedFontCollection = gcnew System::Drawing::Text::InstalledFontCollection();

	// Get the array of FontFamily objects.
	fontFamilies = installedFontCollection->Families;

	// The loop below creates a large string that is a comma-separated
	// list of all font family names.

	int count = fontFamilies->Length;
	for (int j = 0; j < count; ++j)
	{
		chooseFontBox->Items->Add(fontFamilies[j]->Name);
		
	}

	
	try{
		chooseFontBox->Text = gcnew String("Impact");
	}
	catch (Exception^ e) {
	//	MessageBox::Show(e->ToString(), "Unknown Exception");
	}

	//sourceFileChooseButton_Click(obj, args);

}

MainWindow::MainWindow(void) {
	MainWindow::InitializeComponent();
	
}

MainWindow::~MainWindow(){
	if (components)
		delete components;
}

System::Void MainWindow::captionTextChanged(System::Object^  sender, System::EventArgs^  e) {
	currentMeme->topCaption = topCaptionTextBox->Text->ToString();
	currentMeme->bottomCaption = bottomCaptionTextBox->Text->ToString();
	displayMeme();

}

System::Void MainWindow::sourceFileChooseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	try{

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK){
			sourceFileLabel->Text = openFileDialog->SafeFileName;
			
			topCaptionTextBox->Enabled = true;
			bottomCaptionTextBox->Enabled = true;
			pictureDisplay->BorderStyle = BorderStyle::None;
			saveImageButton->Enabled = true;
			chooseFontBox->Enabled = true;
			forceUppercase->Enabled = true;
			
			
			currentMeme->sourceImagePath = openFileDialog->FileName;
			currentMeme->sourceImage =  Image::FromFile(currentMeme->sourceImagePath);
			pictureDisplay->Image = currentMeme->sourceImage;
			displayMeme();
		}
	}
	catch (Exception^ e) {
		//MessageBox::Show(e->ToString(), "Unknown Exception");
	}
}

System::Void MainWindow::displayMeme(){
	currentMeme->generateMeme();
	pictureDisplay->Image = currentMeme->meme;
	

}

System::Void MainWindow::saveImageButton_Click(System::Object^  sender, System::EventArgs^  e) {
	try{

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK){
			sourceFileLabel->Text = openFileDialog->SafeFileName;
			pictureDisplay->Image->Save(saveFileDialog->FileName, Imaging::ImageFormat::Jpeg);

		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Unknown Exception");
	}

}


System::Void MainWindow::chooseFontBoxChange(System::Object^ o, System::EventArgs^ e){
	currentMeme->selectedFont = (String^)chooseFontBox->Text;
	displayMeme();
}	

System::Void MainWindow::forceUppercase_CheckedChanged(System::Object^  sender, System::EventArgs^  e){
	if (forceUppercase->Checked){
		topCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		bottomCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
		captionTextChanged( sender, e);
	}
	else{
		topCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Normal;
		bottomCaptionTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Normal;
	}
}

System::Void MainWindow::selectUrlButton_Click(System::Object^  sender, System::EventArgs^  e){
	try{
		UrlPrompt^ urlPrompt = gcnew UrlPrompt();
		urlPrompt->ShowDialog();
		pictureDisplay->Load(urlPrompt->urlTextBox->Text->ToString());


		sourceFileLabel->Text = urlPrompt->urlTextBox->Text->ToString();

		topCaptionTextBox->Enabled = true;
		bottomCaptionTextBox->Enabled = true;
		pictureDisplay->BorderStyle = BorderStyle::None;
		saveImageButton->Enabled = true;
		chooseFontBox->Enabled = true;
		forceUppercase->Enabled = true;


		currentMeme->sourceImagePath = urlPrompt->urlTextBox->Text->ToString();
		currentMeme->sourceImage = pictureDisplay->Image;
		
		displayMeme();
	}
	catch (Exception^ e){
		MessageBox::Show("Invalid image URL", "Error");
		MessageBox::Show(e->ToString());
	}
	
}

System::Void MainWindow::textColorBox_Click(System::Object^  sender, System::EventArgs^  e){
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		currentMeme->textColor = colorDialog1->Color;
		textColorBox->BackColor = colorDialog1->Color;
		displayMeme();
	}
}

System::Void MainWindow::strokeColorBox_Click(System::Object^  sender, System::EventArgs^  e){
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		currentMeme->strokeColor = colorDialog1->Color;
		strokeColorBox->BackColor = colorDialog1->Color;
		displayMeme();
	}
}