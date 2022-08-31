#include "MyForm.h"
//#include<iostream>
#include<fstream>
//#include<string>
#include<ctime>
#include <cstdio>
//#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
//#include<Windows.h>
//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

//#pragma warning (disable : 4996 )
//#define _CRT_SECURE_NO_WARNINGS

std::string exec(const char* cmd) {
	std::array<char, 128> buffer;
	std::string result;
	std::shared_ptr<FILE> pipe(_popen(cmd, "r"), _pclose);
	if (!pipe) throw std::runtime_error("_popen() failed!");
	while (!feof(pipe.get())) {
		if (fgets(buffer.data(), 128, pipe.get()) != NULL)
			result += buffer.data();
	}
	return result;
}
void main()
{
/*	HWND WINDOW;
	AllocConsole();
	WINDOW = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(WINDOW, 0);
	*/
	string s3;
	string s=exec("wmic path win32_physicalmedia get SerialNumber");
	for (int i = 0;i < s.length();i++)
	{
		if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\r'))
		{
			s3 += s[i];
			
		}

	}
	//if (s3 == "SerialNumberY2K2S37US")
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew playstation::MyForm);
	}
	//else
	//MessageBox::Show("Eror can not work on this computer wrong in serial number","Wrong serial number");

}
