
#include <iostream>
#include <windows.h>  
#include <tchar.h> 
#include "MyForm.h"

using namespace System::Windows::Forms;


int main(array<System::String ^> ^args)
		{
			// Starts the application.
			Application::EnableVisualStyles();
			Application::SetCompatibleTextRenderingDefault(0);
			Application::Run(gcnew MyForm());
			return 0;
		}