#include "record.h"

record::record()
{
}

record::record(int id, string location, double height, int speed)
{
	this->id = id;
	this->location = location;
	this->height = height;
	this->speed = speed;

}
