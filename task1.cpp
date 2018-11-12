#include "task1.h"

static const unsigned int min_per_hour = 60;

unsigned int get_hours(unsigned int minutes)
{
	return minutes / min_per_hour;
}


unsigned int get_min(unsigned int minutes)
{
	return minutes % min_per_hour;
}
