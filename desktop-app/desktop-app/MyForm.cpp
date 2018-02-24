#include "MyForm.h"
#include "database.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace desktopapp;


database db = database();
int index;

int main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	desktopapp::MyForm form;
	Application::Run(%form);
	return 0;

}

System::Void MyForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	index = 0;
	load_sensor();
}

System::Void MyForm::sensor2_Click(System::Object^  sender, System::EventArgs^  e) {
	index = 1;
	load_sensor();
}

// Filter Button
System::Void MyForm::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ min = min_height->Text;
	String ^ max = max_height->Text;


	db.los[index].filter_height(atof(min.c_str()), atof(max.c_str()));
	load_sensor();
}

System::Void MyForm::import_button_Click(System::Object^  sender, System::EventArgs^  e) {
	db.import_data();
	sensor1->Visible = true;
	sensor2->Visible = true;
}


System::Void MyForm::load_sensor() {
	this->speed_chart->Series[0]->Points->Clear();
	id_label->Text = "ID:   " + db.los[index].id;
	total_count->Text = "Total Count:   " + db.los[index].size; //"" + sensor1->total_count();

	location_label->Text = "Location:   " + gcnew String(db.los[index].location.c_str());
	average_speed_label->Text = "Average Speed:  " + db.los[index].average_speed();

	for (int i = 0; i < db.los[index].size; i++) {
		this->speed_chart->Series[0]->Points->AddXY(db.los[index].data[i].id, db.los[index].data[i].speed);
	}

}

/*
System::Void initialize_sensor() {

}
*/