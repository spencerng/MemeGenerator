#include "MainWindow.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
	System::Windows::Forms::Application::Run(%MainWindow());
}

System::Void MainWindow::Meme_Load(System::Object^ obj, System::EventArgs^ args){

}

MainWindow::MainWindow(void) {
	MainWindow::InitializeComponent();

}

MainWindow::~MainWindow(){
	if (components)
		delete components;
}

System::Void MainWindow::captionTextChanged(System::Object^  sender, System::EventArgs^  e) {

	Image^ bmp = Image::FromStream(openFileDialog->OpenFile());
	Graphics^ gr = Graphics::FromImage(bmp);

	System::Drawing::Font^ font = gcnew System::Drawing::Font("Impact", bmp->Height * 0.07); //font size

	StringFormat^ strFormat = gcnew StringFormat();
	strFormat->Alignment = StringAlignment::Center;
	float  in = 32;
	PointF point;
	point.X = bmp->Width / 2.0;
	point.Y = 4;
	Brush^ brush = Brushes::White;
	gr->DrawString(topCaptionTextBox->Text->ToString(), font, brush, point, strFormat);
	point.Y = 0.7 * bmp->Height + 20; //bottom starting position
	gr->DrawString(bottomCaptionTextBox->Text->ToString(), font, brush, point, strFormat);
	pictureDisplay->Image = bmp;
}

System::Void MainWindow::sourceFileChooseButton_Click(System::Object^  sender, System::EventArgs^  e) {

	try{

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK){
			sourceFileLabel->Text = openFileDialog->SafeFileName;
			pictureDisplay->ImageLocation = openFileDialog->FileName;
			topCaptionTextBox->Enabled = true;
			bottomCaptionTextBox->Enabled = true;
			pictureDisplay->BorderStyle = BorderStyle::None;
			saveImageButton->Enabled = true;
			captionTextChanged(sender, e);

		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Unknown Exception");
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

System::Void MainWindow::chooseFontButton_Click(System::Object^  sender, System::EventArgs^  e) {
	fontDialog1->ShowDialog();

}