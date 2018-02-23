#include "record.h"
using namespace desktopapp;

record::record()
{
}

record::record(int id, string location, double height)
{
	this->id = id;
	this->location = location;
	this->height = height;

}
