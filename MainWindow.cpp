#include "MainWindow.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
	System::Windows::Forms::Application::Run(%MainWindow());
}

System::Void MainWindow::Meme_Load(System::Object^ obj, System::EventArgs^ args){
	currentMeme = gcnew Meme();
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
			
			currentMeme->sourceImagePath = openFileDialog->FileName;
			currentMeme->sourceImage =  Image::FromFile(currentMeme->sourceImagePath);
			displayMeme();
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Unknown Exception");
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

System::Void MainWindow::chooseFontButton_Click(System::Object^  sender, System::EventArgs^  e) {
	fontDialog1->ShowDialog();

}