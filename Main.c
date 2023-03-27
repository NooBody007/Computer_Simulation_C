#include "comp_sim.h"


//int id,char file_name[30],int hours, int minutes, int day, int month, int year


int main()
{
	int selection,id,hours,minutes,day,month,year;
	char file_name[30];
	
	printf("\n\n\t\t\tACTIONS\t\t\t\n");
	printf("\t\t\t________________________\t\t\t\n");
	printf("\t\t\t1-Create Notepad\t\t\t\n");
	printf("\t\t\t2-Delete Notepad\t\t\t\n");
	printf("\t\t\t3-Read Notepad\t\t\t\n");
	printf("\t\t\tPLEASE ENTER THE NUMBER OF SELECTION\t\t\t\n\t\t\t");
	scanf("%d",&selection);
	
	switch(selection)
	{
		case 1:
			printf("you selected first case %d\n",selection);
			printf("Enter ID: ");
			scanf("%d",&id);
			fflush(stdin);
			
			printf("\nEnter file name: ");
			scanf("%29s",file_name);
			fflush(stdin);
			
			create_notepad(id,file_name);
			break;
			
		case 2:
			printf("you selected second case %d\n",selection);
			break;
		
		case 3:
			printf("Select ID: ");
			scanf("%d",&id);
			fflush(stdin);
			read_notepad(id);
			break;
			
		default:
			printf("you didn't select something from the list\n");
			break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
