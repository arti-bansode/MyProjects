#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab;

	//code
	printf("\n\n");

	printf("Printing Digits 1 to 10 : \n\n");

	i_aab = 1;
	do
	{
		printf("\t%d\n", i_aab);
		i_aab++;
	} while (i_aab <= 10);
	printf("\n\n");
	return(0);
}