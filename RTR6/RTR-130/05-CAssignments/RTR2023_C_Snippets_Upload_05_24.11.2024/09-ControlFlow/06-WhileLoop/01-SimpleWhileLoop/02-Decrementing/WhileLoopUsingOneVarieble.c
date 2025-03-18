#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab;

	//code
	printf("\n\n");

	printf("Printing Digits 10 to 1 : \n\n");

	i_aab = 10;
	while (i_aab >= 1)
	{
		printf("\t%d\n", i_aab);
		i_aab--;
	}
	printf("\n\n");
	return(0);
}