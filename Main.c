#include "comp_sim.h"


int main()
{
	int selection;
	
	printf("\n\n\t\t\tACTIONS\t\t\t\n");
	printf("\t\t\t________________________\t\t\t\n");
	printf("\t\t\t1-Create Notepad\t\t\t\n");
	printf("\t\t\t2-Delete Notepad\t\t\t\n");
	printf("\t\t\tPLEASE ENTER THE NUMBER OF SELECTION\t\t\t\n\t\t\t");
	scanf("%d",&selection);
	
	switch(selection)
	{
		case 1:
			printf("you selected first case %d\n",selection);
			break;
			
		case 2:
			printf("you selected second case %d\n",selection);
			break;
			
		default:
			printf("you didn't select something from the list\n");
			break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
