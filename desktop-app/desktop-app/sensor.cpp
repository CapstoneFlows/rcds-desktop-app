#include "sensor.h"



sensor::sensor()
{
}

sensor::filter_height(double min, double max)
{
	for (int i = 0; i < this.data.length();i++)
	{
		record filtered[this.data.length()];
		int j = 0;
		if (this.data[i].height > min) & (this.data[i].height < max)
		{
			filtered[j] = this.data[i];
			j++;
		}
	}
	this.data = filtered;
}