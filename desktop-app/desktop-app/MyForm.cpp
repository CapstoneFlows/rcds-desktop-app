#include "MyForm.h"
#include "sensor.h"
#include "record.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace desktopapp;



/*
System::Void initialize_sensor() {
	record record1 = record(1, "NEU", 7.0);
	record record2 = record(2, "NEU", 7.0);
	record record3 = record(3, "NEU", 7.0);
	record record4 = record(4, "NEU", 7.0);
	record *records = &record1;
	*(records + 1) = record2;
	*(records + 1) = record3;
	*(records + 1) = record4;
	s1 = sensor(1, "NEU", records, 4);
}
*/