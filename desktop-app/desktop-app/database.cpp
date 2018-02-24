#include "database.h"


void database::initialize() {
}
database::database()
{
	initialize();

}

void database::add_sensor(sensor s) {
	//los[sensor_size] = s;
}

void database::import_data() {
	//file open

	record record1 = record(1, "Ruggles Station", 4.0, 10);
	record record2 = record(2, "Ruggles Station", 5.0, 20);
	record record3 = record(3, "Ruggles Station", 6.0, 30);
	record record4 = record(4, "Ruggles Station", 7.0, 15);
	record records[] = { record1, record2, record3, record4 };
	
	sensor sensor1 = sensor(1, "Ruggles Station", records, 4);
	this->los[0] = sensor1;
	
	record record5 = record(5, "Marino Center", 7.0, 30);
	record record6 = record(6, "Marino Center", 6.0, 20);
	record record7 = record(7, "Marino Center", 5.0, 2);
	record record8 = record(8, "Marino Center", 5.0, 3);
	record records2[] = { record5, record6, record7, record8 };

	sensor sensor2 = sensor(2, "Marino Center", records2, 4);
	this->los[1] = sensor2;
}