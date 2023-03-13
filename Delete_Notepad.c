#include "comp_sim.h"

int delete_notepad(int id)
{
	//NULL pointer declared for original file
	FILE *fp = NULL;
	//NULL pointer declared for new file
	FILE *ft = NULL;
	
	//Original file opened to read
	fp = fopen("notepads.dat","rb");
	//New file opened to write
	ft = fopen("tempf.dat","wb+");
	
	
	if(fp==NULL || ft ==NULL)
	{
		printf("\nError occured when opening file.\n");
		return 1;
	}
	else
	{
		//Rewinds the cursor(pointer) to the beginning of the file
		rewind(fp);
		
		//Memory allocated for the info that will be gathered from original file
		notepad *deleted_notepad = (notepad *)malloc(sizeof(notepad));
		
		//As long as there is something to read this loop will work
		while(fread(deleted_notepad,sizeof(notepad),1,fp) == 1)
		{
			if(id == deleted_notepad->np_id)
			{
				//Will write the info that is taken from the notepad withe the given id
				fwrite(deleted_notepad,sizeof(notepad),1,ft);
				
			}
		}
		//Files are closed
		fclose(fp);
		fclose(ft);
		//Memory created for the new pointer is freed
		free(deleted_notepad);
		
		//Old file removed and new one was renamed as the original file.
		remove("notepads.dat");
		rename("tempf.dat","notepads.dat");
		
		return 0;
	}
	
}
