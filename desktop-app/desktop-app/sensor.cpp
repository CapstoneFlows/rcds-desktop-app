#include "sensor.h"
using namespace desktopapp;


sensor::sensor()
{
}

sensor::sensor(int id, string location, record * data, int size)
{
	this->id = id;
	this->location = location;
	this->data = data;
	this->size = size;
}



void sensor::filter_height(double min, double max)
{
	/*
	for (int i = 0; i < this->data.size();i++)
	{
		record filtered[this->data.size()];
		int j = 0;
		if ((this->data[i].height > min) && (this->data[i].height < max))
		{
			filtered[j] = this->data[i];
			j++;
		}
	}
	this->data = filtered;
	*/
}

int sensor::total_count()
{
	return size;
}
