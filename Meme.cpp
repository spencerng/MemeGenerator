#include "Meme.h"
//using namespace System::Drawing;

using namespace System::Drawing;

System::Void Meme::generateMeme(){

	meme = Image::FromFile(sourceImagePath);

	Graphics^ gr = Graphics::FromImage(meme);

	int fontSize1, fontSize2;

	fontSize1 = meme->Height*0.15; 	fontSize2 = meme->Height*0.15;

	System::Drawing::Font^ font = gcnew System::Drawing::Font(selectedFont, fontSize1); //font size

	SizeF capSize = gr->MeasureString(topCaption, font); //size in pixels

	while (meme->Width < capSize.Width || meme->Height*0.3 < capSize.Height){
		fontSize1--;
		font = gcnew System::Drawing::Font(selectedFont, fontSize1);
		capSize = gr->MeasureString(topCaption, font);
	}

	StringFormat^ strFormat = gcnew StringFormat();
	strFormat->Alignment = StringAlignment::Center;
	PointF point;
	point.X = meme->Width / 2.0;
	point.Y = 0;
	Brush^ brush = Brushes::White;

	gr->DrawString(topCaption, font, brush, point, strFormat);

	font = gcnew System::Drawing::Font("Impact", fontSize2);

	capSize = gr->MeasureString(bottomCaption, font);

	while (meme->Width < capSize.Width || meme->Height*0.3 < capSize.Height){
		fontSize2--;
		font = gcnew System::Drawing::Font(selectedFont, fontSize2);
		capSize = gr->MeasureString(bottomCaption, font);
	}

	point.Y = meme->Height - capSize.Height; //bottom starting position

	gr->DrawString(bottomCaption, font, brush, point, strFormat);
}