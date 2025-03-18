#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab;

	//code
	printf("\n\n");
	printf("Outer Loop Prints Odd Numbers Between 1 and 10. \n\n");
	printf("Inner Loop Prints Even Number Beween 1 and 10 For Every Printed By Outer Loop. \n\n");

	// condition for a number to be even number => division of number by 2 leaves no remainder (remainder = 0)
	// condition for a number to be odd number => division of number by 2 leaves remainder (remainder = 1(usually))

	for (i_aab = 1; i_aab <= 10; i_aab++)
	{
		if (i_aab % 2 != 0) //If Nmber (i_aab) Is Odd....
		{
			printf("i_aab = %d\n", i_aab);
			printf("---------\n");
			for (j_aab = 1; j_aab <= 10; j_aab++)
			{
				if (j_aab % 2 == 0) //If Number (j_aab) Is Even.....
				{
					printf("\tj_aab = %d\n", j_aab);
				}
				else //If Number (j_aab) Is Odd...
				{
					continue;
				}
			}
			printf("\n\n");
		}
		else //If Number (i_aab) Is Even....
		{
			continue;
		}
	}
	printf("\n\n");
	return(0);
}