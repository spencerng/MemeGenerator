#include<string>
using namespace std;

ref class Meme {
public:
	System::String^ topCaption = "";
	System::String^ bottomCaption = "";
	System::String^ sourceImagePath;
	System::String^ selectedFont = "Impact";
	System::Drawing::Color textColor = System::Drawing::Color::FromName("White");
	System::Drawing::Color strokeColor = System::Drawing::Color::FromName("Black");


	System::Drawing::Image^ sourceImage;
	System::Drawing::Image^ meme;

	System::Void generate();
	System::Void save(System::String^ path);
	System::String^ publishToImgur();
public:
	

};