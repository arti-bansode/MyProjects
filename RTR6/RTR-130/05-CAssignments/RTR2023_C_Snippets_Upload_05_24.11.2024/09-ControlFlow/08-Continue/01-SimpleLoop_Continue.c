#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab;

	//code
	printf("\n\n");

	printf("Printing Even Number From 0 to 100: \n\n");

	for (i_aab = 0; i_aab <= 100; i_aab++)
	{
		//condition for a number to be even number => division of leaves no remainder (remiander = 0)
		//if remainder is not 0, the number is odd number...
		if (i_aab % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("\t%d\n", i_aab);
		}
	}
	printf("\n\n");
	return(0);
}
