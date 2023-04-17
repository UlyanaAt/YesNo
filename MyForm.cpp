#include "MyForm.h"
using namespace YesNo;
using namespace System::Windows::Forms;
#include <ctime>
#include <iostream>

// Application entry point
[STAThreadAttribute]
void main(array<String^>^ args) {
	srand(time(0));
	// Initial Application Parameters:
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	YesNo::MyForm form;
	Application::Run(% form);
}

System::Void YesNo::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int RandNumb = 0;
	RandNumb = 1 + rand() % 100;

	label1->Text = "";
	label2->Text = "";

	if (RandNumb < 50)
	{
		label1->Text = "NO!";
		label1->ForeColor = Color::Red;
		label2->Text = "NO!";
		label2->ForeColor = Color::Red;
	}
	else
	{
		label1->Text = "YES!";
		label1->ForeColor = Color::Green;
		label2->Text = "YES!";
		label2->ForeColor = Color::Green;
	}
}
