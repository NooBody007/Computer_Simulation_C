#include "comp_sim.h"


int create_notepad(int id,char file_name[30])
{	
	FILE *fp = NULL;
	
	//Creates db if it doesn't exist. "a" append, "b" binary file (for speed).
	fp = fopen("notepads.dat","ab");
	
	if(fp == NULL)
	{
		printf("\nAn error occurred while opening the file.\n");
		return 1;
	}
	else
	{
		//Created pointer for new file
		notepad *new_np = NULL;
		
		//Allocated memory for new file
		new_np = (notepad *)malloc(sizeof(notepad));
		
		//id input will be the id of the new file
		new_np->np_id = id;
		
		//file_name input will be the name of the new file
		strcpy(new_np->np_file_name,file_name);
		
		//File creation time gathered
		time(&(new_np->np_now));
		local = localtime(&new_np->np_now);
		
		new_np->np_hours = local->tm_hour;
		new_np->np_minutes = local->tm_min;
		new_np->np_day = local->tm_mday;
		new_np->np_month = local->tm_mon+1;
		new_np->np_year = local->tm_year+1900;
		
		//Gathered infos will be written in notebook
		fwrite(new_np,sizeof(notepad),1,fp);
		
		//file closed
		fclose(fp);
		
		//Memory freed
		free(new_np);
		
		return 0;
	}
	
	
	
	
	
	
	
}
