#include "MainWindow.h"
#include<iostream>
#include<Windows.h>
#include<stdlib.h>
using namespace Project1;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
	System::Windows::Forms::Application::Run(%Project1::Meme());
}