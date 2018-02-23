#pragma once
#include "sensor.h"
#include <iostream> 
#include <array>

class database
{
	
public:
	int sensor_size = 0;
	sensor los[10];
	database();
	void initialize();
	void add_sensor(sensor s);
	void import_data();
};

