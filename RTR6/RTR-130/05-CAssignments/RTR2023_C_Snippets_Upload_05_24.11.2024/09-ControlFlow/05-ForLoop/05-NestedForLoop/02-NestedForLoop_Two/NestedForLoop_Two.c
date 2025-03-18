#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab, k_aab;

	//code
	printf("\n\n");
	for (i_aab = 1; i_aab <= 10; i_aab++)
	{
		printf("i_aab = %d\n", i_aab);
		printf("--------\n\n");
		for (j_aab = 1; j_aab <= 5; j_aab++)
		{
			printf("\tj_aab = %d\n", j_aab);
			printf("\t ---------\n\n");
			for (k_aab = 1; k_aab <= 3; k_aab++)
			{
				printf("\t\tk_aab = %d\n", k_aab);
			}
			printf("\n\n");
		}
		printf("\n\n");
	}
	return(0);
}