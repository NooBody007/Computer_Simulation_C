
#ifndef __COMP_SIM_H__
#define __COMP_SIM_H__



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>



struct textfile {
	int id, hours, minutes, day, month, year;
	char file_name[20];
	time_t now;
}notepad;

struct tm *local;








#endif
