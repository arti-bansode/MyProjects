#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int iArray_2D_aab[NUM_ROWS][NUM_COLUMNS]; // TOTAL NUMBER OF ELEMENTS = NUM_ROWS * NUM_COLUMNS
	int iArray_1D_aab[NUM_ROWS * NUM_COLUMNS];

	int i_aab, j_aab;
	int num_aab;

	//code
	printf("Enter elements Of Your Cgoice To Fill Up The Interger 2D Array : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		printf("For ROW NUMBER %d : \n", (i_aab + 1));
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf("Enter Element Number %d :\n", (j_aab + 1));
			scanf("%d", &num_aab);
			iArray_2D_aab[i_aab][j_aab] = num_aab;
		}
		printf("\n\n");
	}

	// *** DISPLAY OF 2D ARRAY ***
	printf("\n\n");
	printf("Two-Diamwntional (2D) Array Of Integers : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		printf("***** row %d *****\n", (i_aab + 1));
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf("iArray_2d[%d][%d] = %d\n", i_aab, j_aab, iArray_2D_aab[i_aab][j_aab]);
		}
		printf("\n\n");
	}
	// ***** CONVERTING 2D INTIGER ARRAY TO 1D ARRAY *****
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			iArray_1D_aab[(i_aab * NUM_COLUMNS) + j_aab] = iArray_2D_aab[i_aab][j_aab];
		}
	}
	// *** PRINTING IN ARRAY ***
	printf("\n\n");
	printf("One-Diamentional (1D) Array Of Integer : \n\n");
	for (i_aab = 0; i_aab < (NUM_ROWS * NUM_COLUMNS); i_aab++)
	{
		printf("iArray_1d_aab[%d] = %d\n", i_aab, iArray_1D_aab[i_aab]);
	}
	printf("\n\n");


}