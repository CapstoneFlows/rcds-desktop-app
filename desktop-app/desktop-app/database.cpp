#include "database.h"


void database::initialize() {
	sensor_size = 0;
}
database::database()
{
	initialize();

}

void database::add_sensor(sensor s) {
	sensor_size++;
	los[sensor_size] = s;
}

void database::import_data() {
	//file open

	record record1 = record(1, "NEU", 7.0, 10);
	record record2 = record(2, "NEU", 7.0, 20);
	record record3 = record(3, "NEU", 7.0, 30);
	record record4 = record(4, "NEU", 7.0, 15);
	record records[] = { record1, record2, record3, record4 };
	
	sensor sensor1 = sensor(1, "NEU", records, 4);
	this->los[0] = sensor1;
}