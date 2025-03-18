#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab;

	//code
	printf("\n\n");
	for (i_aab = 1; i_aab <= 10; i_aab++)
	{
		printf("i_aab = %d\n", i_aab);
		printf("--------\n\n");
		for (j_aab = 1; j_aab <= 5; j_aab++)
		{
			printf("\tj_aab = %d\n", j_aab);
		}
		printf("\n\n");
	}
	return(0);
}