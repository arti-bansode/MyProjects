#include<stdio.h>
#include<conio.h>
int main(void)
{
	//variable declarations
	int i_aab;
	char ch_aab;

	//code
	printf("\n\n");
	
	printf("Printing Number From 1 to 100 For Every User Input. Existing The Loop When Enters Character 'Q' or 'q' : \n\n");
	printf("Enter Character 'Q' or 'q' To Exit Loop : \n\n");

	for ( int i_aab = 1; i_aab <= 100; i_aab++)
	{
		printf("\t%d\n", i_aab);
		ch_aab = getch();
	    if (ch_aab == 'Q' || ch_aab == 'q')
		{
			break;
		}
	}
	printf("\n\n");
	printf("EXISTING LOOP...");
	printf("\n\n");

	return(0);
}