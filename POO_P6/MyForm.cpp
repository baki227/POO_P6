
//Main.CPP*********************************************************************************************

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POOP6::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}


