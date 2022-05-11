#include "MyForm.h"
//All you need to do is copy this into your own MyForm.cpp  and rename the line containing the project name to your own project's accordingly 

using namespace System;
using namespace System::Windows::Forms;
[STAThread]



void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIBasics::MyForm form;                               //MyProject::MyForm form; is the default form, change MyProject to the name of your project.
	Application::Run(% form);

}
