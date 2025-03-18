#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab, c_aab;

	//code
	printf("\n\n");
	for (i_aab = 0; i_aab < 64; i_aab++)
	{
		for (j_aab = 0; j_aab < 64; j_aab++)
		{
			c_aab = ((i_aab & 0x8) == 0) ^ ((j_aab & 0x8) == 0);

			if (c_aab == 0)
				printf("  ");

			if (c_aab == 1)
				printf("* ");

		}
		printf("\n\n");
	}
	return(0);
}