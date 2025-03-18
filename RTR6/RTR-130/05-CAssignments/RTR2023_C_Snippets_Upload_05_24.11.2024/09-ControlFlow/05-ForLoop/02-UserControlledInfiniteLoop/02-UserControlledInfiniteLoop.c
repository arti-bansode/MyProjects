#include<stdio.h>
int main(void)
{
	//variable declaration
	char option_aab, ch_aab = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' oy 'y' To Initiate User Controlled Infinite Loop :");
	printf("\n\n");
	option_aab = getch();
	if (option_aab == 'Y' || option_aab == 'y')
	{
		for (;;) //Infinite Loop
		{
			printf("In Loop...\n");
			ch_aab = getch();
			if (ch_aab == 'Q' || ch_aab == 'q')
				break; //User Controlled Exitting From Infinite Loop
		}
	}
	printf("\n\n");
	printf("EXITTING USER CONTROLLED INFINITE LOOP...");
	printf("\n\n");

	return(0);


}