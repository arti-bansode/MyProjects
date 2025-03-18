#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab;

	//code
	printf("\n\n");

	i_aab = 1;
	do
	{
		printf("i_aab = %d\n", i_aab);
		printf("--------\n\n");

		j_aab = 1;
		do
		{
			printf("\tj_aab = %d\n", j_aab);
			j_aab++;
		} while (j_aab <= 5);
		i_aab++;
		printf("\n\n");
	} while (i_aab <= 10);
	return(0);
}
