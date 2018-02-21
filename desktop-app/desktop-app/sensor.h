#pragma once
// string constructor
#include <iostream>
#include <string>
#include <ctime>
#include "record.h"
#include <array>

using namespace std;

public class sensor
{

public:
	int id; //Unique sensor ID
	string location; //Address of where the sensor is placed
	record *data;
	int size;
	sensor(); //Initialize with Data from SQL Database
	sensor(int id, string location, record *data, int size);

	void filter_height(double low, double max); // Filter the Data with given low & max height; 
	int total_count();
};

