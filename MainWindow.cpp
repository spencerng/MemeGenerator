#include "MainWindow.h"
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
			
			
			currentMeme->sourceImagePath = openFileDialog->FileName;
			currentMeme->sourceImage =  Image::FromFile(currentMeme->sourceImagePath);
			displayMeme();
		}
	}
	catch (Exception^ e) {
		//MessageBox::Show(e->ToString(), "Unknown Exception");
	}
}

System::Void MainWindow::displayMeme(){
	if (!currentMeme->sourceImagePath->Equals("")){
		currentMeme->generateMeme();
		pictureDisplay->Image = currentMeme->meme;
	}

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