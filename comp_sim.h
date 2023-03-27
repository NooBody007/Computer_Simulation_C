
#ifndef __COMP_SIM_H__
#define __COMP_SIM_H__



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>



typedef struct textfile {
	int np_id, np_hours, np_minutes, np_day, np_month, np_year;
	char np_file_name[20];
	time_t np_now;
}notepad;

struct tm *local;

//creates a notepad file
int create_notepad(int id,char file_name[30]);

//writes to selected notepad file
int write_notepad(int id);

//reads the selected notepad file
int read_notepad(int id);

//deletes the selected notepad file
int delete_notepad(int id);

//shows all of the notepad files
int view_notepads(void);


#endif
