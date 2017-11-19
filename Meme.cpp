#include "Meme.h"
//using namespace System::Drawing;

using namespace System::Drawing;

System::Void Meme::generate(){

	meme = (Image^)sourceImage->Clone();

	Graphics^ gr = Graphics::FromImage(meme);

	int fontSize1, fontSize2;

	fontSize1 = meme->Height*0.15; 	
	fontSize2 = meme->Height*0.15;

	StringFormat^ strFormat = gcnew StringFormat();
	strFormat->Alignment = StringAlignment::Center;
	PointF point;
	SizeF capSize;
	SolidBrush^ textBrush = gcnew SolidBrush(textColor)	;

	point.X = meme->Width / 2.0;
	point.Y = 0;

	System::Drawing::Font^ font = gcnew System::Drawing::Font(selectedFont, fontSize1, FontStyle::Bold); //font size
	gr->TextRenderingHint = Text::TextRenderingHint::AntiAlias;

	if (!topCaption->Equals("")){
		capSize = gr->MeasureString(topCaption, font); //size in pixels

		while (meme->Width*0.95 < capSize.Width || meme->Height*0.3 < capSize.Height){
			fontSize1--;
			font = gcnew System::Drawing::Font(selectedFont, fontSize1);
			capSize = gr->MeasureString(topCaption, font);
		}

		
		Drawing2D::GraphicsPath^ p = gcnew Drawing2D::GraphicsPath();

		Pen^ pen = gcnew Pen(strokeColor, 0.06*gr->DpiY*fontSize1 / 72);
		
		//gr->DrawString(topCaption, font, brush, point, strFormat);

		p->AddString(
			topCaption,
			gcnew FontFamily(selectedFont),
			(int)FontStyle::Regular,
			(float)(gr->DpiY*fontSize1 / 72),
			point,
			strFormat);

		gr->DrawPath(pen, p);
		gr->FillPath(textBrush, p);
	}

	if (!bottomCaption->Equals("")){
		font = gcnew System::Drawing::Font(selectedFont, fontSize2);

		capSize = gr->MeasureString(bottomCaption, font);

		while (meme->Width - 5 < capSize.Width || meme->Height*0.3 < capSize.Height){
			fontSize2--;
			font = gcnew System::Drawing::Font(selectedFont, fontSize2);
			capSize = gr->MeasureString(bottomCaption, font);
		}

		point.Y = meme->Height - capSize.Height; //bottom starting position

		Drawing2D::GraphicsPath^ p = gcnew Drawing2D::GraphicsPath();

		Pen^ pen = gcnew Pen(strokeColor, 0.06*gr->DpiY*fontSize2 / 72);
		gr->TextRenderingHint = Text::TextRenderingHint::AntiAlias;
		//gr->DrawString(topCaption, font, brush, point, strFormat);

		p->AddString(
			bottomCaption,
			gcnew FontFamily(selectedFont),
			(int)FontStyle::Regular,
			(float)(gr->DpiY*fontSize2 / 72),
			point,
			strFormat);

		gr->DrawPath(pen, p);
		gr->FillPath(textBrush, p);
	}

	
}

System::Void Meme::save(System::String^ path){
	meme->Save(path, Imaging::ImageFormat::Jpeg);
}

System::String^ Meme::publishToImgur(){
	System::Net::Http::HttpRequestMessage^ hrm = gcnew System::Net::Http::HttpRequestMessage();
	hrm->Method = System::Net::Http::HttpMethod::Post;
	hrm->RequestUri = gcnew System::Uri("https://api.imgur.com/3/image");
	hrm->Headers->Add("authorization", "Client-ID cc076a16fed6cd3");
	System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream();
	meme->Save(stream, System::Drawing::Imaging::ImageFormat::Jpeg);
	stream->Position = 0;
	System::Net::Http::HttpContent^ httpContent = gcnew System::Net::Http::StreamContent(stream);
	hrm->Content = httpContent;
	System::Net::Http::HttpClient^ httpClient = gcnew System::Net::Http::HttpClient();
	
	return httpClient->SendAsync(hrm)->Result->Content->ReadAsStringAsync()->Result;
}