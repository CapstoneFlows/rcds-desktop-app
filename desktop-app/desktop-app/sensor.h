#pragma once
// string constructor
#include <iostream>
#include <string>
#include <ctime>
#include "record.h"
#include <array>

using namespace std;

 class sensor
	{

	public:
		int id; //Unique sensor ID
		string location; //Address of where the sensor is placed
		record data[100];
		int size;
		sensor(); //Initialize with Data from SQL Database
		sensor(int id, string location, record data[], int size);
		sensor(int id, string location, int size);
		int get_id() { return this->id; }
		void filter_height(double low, double max); // Filter the Data with given low & max height; 
		int average_speed();
		int total_count();
	};
