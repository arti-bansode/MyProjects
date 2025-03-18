#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab, k_aab;

	//code
	printf("\n\n");

	i_aab = 1;
	while (i_aab <= 10)
	{
		printf("i_aab = %d\n", i_aab);
		printf("-------\n\n");

		j_aab = 1;
		while (j_aab <= 5)
		{
			printf("\tj_aab = %d\n", j_aab);
			printf("\t------\n\n");

			k_aab = 1;
			while (k_aab <= 3)
			{
				printf("\t\tk_aab = %d\n", k_aab);
				k_aab++;
			}
			printf("\n\n");
			j_aab++;
		}
		printf("\n\n");
		i_aab++;
	}
	return(0);
}