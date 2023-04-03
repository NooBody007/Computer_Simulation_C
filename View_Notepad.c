#include "comp_sim.h"


int view_notepad()
{
	FILE *fp = NULL;
	
	fp = fopen("notepads.dat","r");
	
	if(fp == NULL){
		printf("An error occured while opening the file.\n");
		return 1;
	}
	
	else{
		notepad *w_notepad = (notepad*)malloc(sizeof(notepad));
		
		while(fread(w_notepad,sizeof(notepad),1,fp)){
			printf("\n%d\t\t\t%s\t\t\t",w_notepad->np_id,w_notepad->np_file_name);
		}
		close(fp);
		free(w_notepad);
		return 0;
	}
	
}
