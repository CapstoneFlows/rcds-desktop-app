#include "sensor.h"


sensor::sensor()
{
}

sensor::sensor(int id, string location, record data[], int size)
{
	this->id = id;
	this->location = location;
	this->size = size;

	for (int i = 0; i < size; i++) {
		this->data[i] = data[i];
	}
}

sensor::sensor(int id, string location, int size) {
	this->id = id;
	this->location = location;
	this->size = size;
}

void sensor::filter_height(double min, double max)
{
	record filtered[100];
	int j = 0;
	for (int i = 0; i < this->size; i++)
	{
		if ((this->data[i].height > min) && (this->data[i].height < max))
		{
			filtered[j] = this->data[i];
			j++;
		}
	}

	for (int i = 0; i < j; i++) {
		this->data[i] = filtered[j];
	}
	this->size = j;

	
}

int sensor::total_count()
{
	return size;
}

int sensor::average_speed() {
	int result = 0;

	for (int i = 0; i < this->size; i++) {
		result += this->data[i].speed;
	}
	result = result / this->size;
	return result;
}