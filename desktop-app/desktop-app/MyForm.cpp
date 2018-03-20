#include "MyForm.h"
#include "database.h"
#include <msclr/marshal_cppstd.h>
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




// Filter Button
System::Void MyForm::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ min = min_height->Text;
	String ^ max = max_height->Text;


	//db.los[index].filter_height(atof(min.c_str()), atof(max.c_str()));
	load_sensor();
}

System::Void MyForm::import_button_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ input_file = this->input_file->Text;
	std::string input_file_converted = msclr::interop::marshal_as< std::string >(input_file);
	db.import_data(input_file_converted);
	MessageBox::Show("Import Successful");
	
}


System::Void MyForm::load_sensor() {
	//this->speed_chart->Series[0]->Points->Clear();
	id_label->Text = "ID:   " + db.los[index].id;
	total_count->Text = "Total Count:   " + db.los[index].size; //"" + sensor1->total_count();

	location_label->Text = "Location:   " + gcnew String(db.los[index].location.c_str());
	average_speed_label->Text = "Average Speed:  " + db.los[index].average_speed();

	for (int i = 0; i < db.los[index].size; i++) {
		//this->speed_chart->Series[0]->Points->AddXY(db.los[index].data[i].id, db.los[index].data[i].speed);
	}

}

System::Void MyForm::sensorButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 0;
	load_sensor();
}

System::Void MyForm::sensorButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 1;
	load_sensor();
}

System::Void MyForm::sensorButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 2;
	load_sensor();
}

System::Void MyForm::sensorButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 3;
	load_sensor();
}

System::Void MyForm::sensorButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 4;
	load_sensor();
}

System::Void MyForm::sensorButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 5;
	load_sensor();
}

System::Void MyForm::sensorButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 6;
	load_sensor();
}

System::Void MyForm::sensorButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	index = 7;
	load_sensor();
}

/*
System::Void initialize_sensor() {

}
*/