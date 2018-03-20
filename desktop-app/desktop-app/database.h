#pragma once
#include "sensor.h"
#include <iostream> 
#include <array>

class database
{
	
public:
	sensor los[10];
	int count;
	database();
	void initialize();
	void add_sensor(sensor s);
	void import_data(string file_name);
};

