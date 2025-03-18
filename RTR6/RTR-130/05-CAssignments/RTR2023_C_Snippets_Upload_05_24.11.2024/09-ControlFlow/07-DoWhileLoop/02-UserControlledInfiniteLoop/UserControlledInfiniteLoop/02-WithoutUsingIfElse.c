#include<stdio.h>
int main(void)
	{
		//variable declarations
		char option_aab, ch_aab = '/0';

		//code
		printf("\n\n");
		printf("Ones Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
		do
		{
			do
			{
				printf("\n");
				printf("In Loop ...\n");
				ch_aab = getch(); //controll flow waits for character input...
			} while (ch_aab != 'Q' && ch_aab != 'q');
				printf("\n\n");
			printf("EXISTING USER CONTROLLED INFINITE LOOP...");
			printf("\n\n");
			printf("DO YOU WANT TO BEGINE USER CONTROLLED INFINITE LOOP AGAIN?.....(Y/y-Yes, Any Other Key - No) : ");
			option_aab = getch();
		} while (option_aab == 'Y' && option_aab == 'y');

		return(0);
}