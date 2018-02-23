#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

 class record
	{
	public:
		int id; // Unique record ID
		string location; //Inherit the location of sensor
		time_t start_time;
		time_t end_time;
		double height;
		string vehicle_type; // Determined by calculating the height and speed

		record(); // Initialize with Data from SQL database
		record(int id, string location, double height);
	};