#include<string>
using namespace std;

ref class Meme {
public:
	System::String^ topCaption;
	System::String^ bottomCaption;
	System::String^ sourceImagePath;
	System::String^ selectedFont = "Impact";


	System::Drawing::Image^ sourceImage;
	System::Drawing::Image^ meme;

	System::Void generateMeme();
public:
	

};