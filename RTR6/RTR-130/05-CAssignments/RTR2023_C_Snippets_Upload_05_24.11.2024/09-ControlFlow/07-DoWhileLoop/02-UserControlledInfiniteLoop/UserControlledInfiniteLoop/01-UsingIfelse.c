#include<stdio.h>
int main(void)
{
	//variable declarations
	char option, ch_aab = '/0';

	//code
	printf("\n\n");
	printf("Ones Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' oy 'y' To Infinite User Controlled Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		do
		{
			printf("In Loop ...\n");
			ch_aab = getch(); //controll flow waits for character input...
			if (ch_aab == 'Q' || ch_aab == 'q')
				break; //User Controlled Existing From Infinite
		} while (1); //Infinite Loop

		printf("\n\n");
		printf("EXISTING USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
	}
	else
		printf("You Must Press 'Y' or 'y' To Infinite The User Controlled Loop....Please Try Again...\n\n");

	return(0);
}