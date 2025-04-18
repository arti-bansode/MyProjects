#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3
#define DEPTH 2

int main(void)
{
	// variable declartions

	//IN-LINE INITIALIZATION
	int iArray[NUM_ROWS][NUM_COLUMNS][DEPTH] = {{ {9,18},{27,36},{45,54} },
											{ {8,16},{24,32},{40,48} },
											{ {7,14},{21,28},{35,42} },
											{ {6,12},{18,24},{30,36} },
									{ {5,10},{15,20},{25,30} }};

    int i_aab, j_aab, k_aab;

	int iArray_1D_aab[NUM_ROWS * NUM_COLUMNS * DEPTH]; //5*3*2 ELEMENTS => 30 ELEMENTS IN 1D ARRAY

	//CODE
	// ******* DISPLAY 3D ARRAY *******
	printf("\n\n");
	printf("Elements In The 3D Array : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab)
	{
		printf("****** ROW %d ******\n", (i_aab + 1));
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf(" ****** COLUMNS %d ******\n", (j_aab + 1));
			for (k_aab = 0; k_aab < DEPTH; k_aab++)
			{
				printf("iArray[%d][%d][%d] = %d\n", i_aab, j_aab, k_aab, iArray[i_aab][j_aab][k_aab]);
			}
			printf("\n");
		}
		printf("\n\n");

		// ******* CONVERTING 3D TO 1D ******
		for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
		{
			for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
			{
				for (k_aab = 0; k_aab < DEPTH; k_aab++)
				{
					iArray_1D_aab[(i_aab * NUM_COLUMNS * DEPTH) + (j_aab * DEPTH) + k_aab] = iArray[i_aab][j_aab][k_aab];
				}
			}
		}
	}
		// ******* DISPLAY 1D ARRAY *******
		printf("\n\n\n");
		printf("Elements In The 1D Array : \n\n");
		for (i_aab = 0; i_aab < (NUM_ROWS * NUM_COLUMNS * DEPTH); i_aab++)
		{
			printf("iArray_1D_aab[%d] = %d\n", i_aab, iArray_1D_aab[i_aab]);
		}
		return(0);
}