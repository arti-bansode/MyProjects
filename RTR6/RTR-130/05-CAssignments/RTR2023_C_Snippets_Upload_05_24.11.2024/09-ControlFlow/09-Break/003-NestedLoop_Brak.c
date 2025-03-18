#include<stdio.h>
#include<conio.h>
int main(void)
{
	//variable declarations
	int i_aab, j_aab;

	//code
	printf("\n\n");

	for (i_aab = 1; i_aab <= 20; i_aab++)
	{
		for (j_aab = 1; j_aab <= 20; j_aab++)
		{
			if (j_aab > i_aab)
			{
				break;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	return(0);
}