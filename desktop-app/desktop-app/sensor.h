#pragma once
// string constructor
#include <iostream>
#include <string>
#include <ctime>
#include "record.h"
using namespace std;

public class sensor
{

public:
	int id; //Unique sensor ID
	string location; //Address of where the sensor is placed
	record data[];
	sensor(); //Initialize with Data from SQL Database
};

