#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab, c_aab;

	//code
	printf("\n\n");

	i_aab = 0;
	do
	{
		j_aab = 0;
		do
		{
			c_aab = ((i_aab & 0x8) == 0) ^ ((j_aab & 0x8) == 0);

			if (c_aab == 0)
				printf("  ");

			if (c_aab == 1)
				printf("* ");

			j_aab++;

		} while (j_aab < 64);
		printf("\n\n");
		i_aab++;
	} while (i_aab < 64);
	return(0);
}