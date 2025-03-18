#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab, c_aab;

	//code
	printf("\n\n");

	i_aab = 0;
	while (i_aab < 64)
	{
		j_aab = 0;
		while(j_aab < 64)
		{
		   c_aab = ((i_aab & 0x8) == 0) ^ ((j_aab & 0x8) == 0);

		   if (c_aab == 0)
			printf("  ");

		   if (c_aab == 1)
			printf("* ");

		   j_aab++;

	    }
	    printf("\n\n");
	    i_aab++;
     }
     return(0);
}