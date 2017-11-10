#include "Meme.h"
#include<iostream>
#include<Windows.h>
#include<stdlib.h>
//#include<Magick++.h>
using namespace MemeGenerator;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
	System::Windows::Forms::Application::Run(%MemeGenerator::MainWindow());
}

