#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab;

	//code
	printf("\n\n");

	printf("Printing Digits 10 to 1 and 100 to 10: \n\n");

	i_aab = 10;
	j_aab = 100;
	do
	{
		printf("\t%d\t%d\n", i_aab, j_aab);
		i_aab--;
		j_aab = j_aab - 10;
	} while (i_aab >= 1, j_aab >= 10);

	printf("\n\n");

	return(0);

	
}