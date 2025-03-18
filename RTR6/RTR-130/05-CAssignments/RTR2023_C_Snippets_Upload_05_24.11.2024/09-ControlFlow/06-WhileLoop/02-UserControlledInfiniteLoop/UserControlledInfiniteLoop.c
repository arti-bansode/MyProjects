#include<stdio.h>
int main(void)
{
	//variable declarations
	char option_aab, ch_aab = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite Loop : \n\n");
	printf("Enter 'Y' oy 'y' To Infinite User Controlled Infinite Loop :");
	printf("\n\n");
	option_aab = getch();
	if (option_aab == 'Y' || option_aab == 'y')
	{
		while (1) //Infinite Loop
		{
			printf("In Loopp.....\n");
			ch_aab = getch();
			if(ch_aab == 'Q' || ch_aab == 'q')
				break; //User Controlled Existing From Infinite Loop

		}
		printf("\n\n");
		printf("EXISTING USER CONTROLLED INFINITE LOOP....");
		printf("\n\n");
	}
	else
		printf("You Must Press 'Y' or 'y' To Initiate The User Controlled Infinite Loop...Please Try Again...\n\n");
	return(0);
}