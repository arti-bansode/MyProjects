#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int iArray_aab[NUM_ROWS][NUM_COLUMNS];
	int i_aab, j_aab;

	//code
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
			iArray_aab[i_aab][j_aab] = (i_aab + 1) * (j_aab + 1);
	}
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf("iArray_aab[%d][%d] = %d \t\t At Address : %p\n", i_aab, j_aab, iArray_aab[i_aab][j_aab], &iArray_aab[i_aab][j_aab]);
		}
		printf("\n\n");
	}
	return(0);
}

