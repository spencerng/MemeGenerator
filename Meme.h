#include<string>
using namespace std;

ref class Meme {
public:
	System::String^ topCaption;
	System::String^ bottomCaption;
	System::String^ sourceImagePath;


	System::Drawing::Image^ sourceImage;
	System::Drawing::Image^ meme;

	System::Void generateMeme();
public:
	

};