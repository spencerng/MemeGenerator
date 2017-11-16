#include "Meme.h"
using namespace System::Drawing;

System::Void Meme::generateMeme(){
	
	meme = Image::FromFile(sourceImagePath);
	
	Graphics^ gr = Graphics::FromImage(meme);

	System::Drawing::Font^ font = gcnew System::Drawing::Font("Impact", 36); //font size

	StringFormat^ strFormat = gcnew StringFormat();
	strFormat->Alignment = StringAlignment::Center;
	PointF point;
	point.X = meme->Width / 2.0;
	point.Y = 0;
	Brush^ brush = Brushes::White;

	gr->DrawString(topCaption, font, brush, point, strFormat);
	point.Y = 0.85 * meme->Height; //bottom starting position
	gr->DrawString(bottomCaption, font, brush, point, strFormat);

	
	
}