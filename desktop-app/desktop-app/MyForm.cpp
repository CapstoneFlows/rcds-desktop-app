#include "MyForm.h"
#include "database.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace desktopapp;


database db = database();

int main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	desktopapp::MyForm form;
	Application::Run(%form);
	return 0;

}

System::Void MyForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	id_label->Text = "ID:   " + db.los[0].id;
	total_count->Text = "Total Count:   " + db.los[0].size; //"" + sensor1->total_count();

	location_label->Text = "Location:   " + gcnew String(db.los[0].location.c_str());
	average_speed_label->Text = "Average Speed:  " + db.los[0].average_speed();
}

System::Void MyForm::sensor2_Click(System::Object^  sender, System::EventArgs^  e) {
	id_label->Text = "ID:   " + db.los[1].id;
	total_count->Text = "Total Count:   " + db.los[1].size; //"" + sensor1->total_count();
	location_label->Text = "Location:   " + gcnew String(db.los[1].location.c_str());
}

System::Void MyForm::import_button_Click(System::Object^  sender, System::EventArgs^  e) {
	db.import_data();
	sensor1->Visible = true;
	sensor2->Visible = true;
}



/*
System::Void initialize_sensor() {

}
*/