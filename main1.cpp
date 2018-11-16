#include <stdio.h>
#include "task1.h"

int main(void)
{
	unsigned int minutes = 0;
	printf("Enter minutes: ");
	scanf("%u", &minutes);
	printf("Time %u:%u \n", get_hours(minutes), get_min(minutes));
	
	return 0;
}
