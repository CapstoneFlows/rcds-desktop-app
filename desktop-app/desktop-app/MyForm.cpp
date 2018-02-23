#include "MyForm.h"
#include "sensor.h"
#include "record.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace desktopapp;


sensor s1;
sensor s2;
int main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	desktopapp::MyForm form;
	Application::Run(%form);
	return 0;

}

System::Void MyForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	id_label->Text = "ID:   " + s1.id;
	total_count->Text = "Total Count:   " + s1.size; //"" + sensor1->total_count();

	location_label->Text = "Location:   " + gcnew String(s1.location.c_str());
}

System::Void MyForm::sensor2_Click(System::Object^  sender, System::EventArgs^  e) {
	id_label->Text = "ID:   " + s2.id;
	total_count->Text = "Total Count:   " + s2.size; //"" + sensor1->total_count();
	location_label->Text = "Location:   " + gcnew String(s2.location.c_str());
}

System::Void MyForm::import_button_Click(System::Object^  sender, System::EventArgs^  e) {
	s1 = sensor(1, "Ruggles Station", 100);
	s2 = sensor(2, "Huntington Ave.", 200);
	sensor1->Visible = true;
	sensor2->Visible = true;
}



/*
System::Void initialize_sensor() {

}
*/