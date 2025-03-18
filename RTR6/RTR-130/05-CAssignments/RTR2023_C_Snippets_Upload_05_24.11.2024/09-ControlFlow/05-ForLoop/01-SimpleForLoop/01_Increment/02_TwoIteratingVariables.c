#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab;

	//code
	printf("\n\n");

	printf("Printing Digits 1 to 10 and 10 to 100 : \n\n");

	for (i_aab = 1, j_aab = 10; i_aab <= 100; i_aab++, j_aab = j_aab + 10)
	{
		printf("\t%d\t%d\n", i_aab, j_aab);
	}
	printf("\n\n");
	return(0);
}