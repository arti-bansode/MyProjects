#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray_aab[3][5]; //3 ROWS (0, 1, 2) AND 5 COLUMNS (0, 1, 2, 3, 4 )
	int int_size_aab;
	int iArray_size_aab;
	int iArray_num_elements_aab, iArray_num_rows_aab, iArray_num_columns_aab;
	int i_aab, j_aab;

	//code
	printf("\n\n");

	int_size_aab = sizeof(int);

	iArray_size_aab = sizeof(iArray_aab);
	printf("Size Of Two Diamentional (2D) Integer Array Is = %d\n\n", iArray_size_aab);

	iArray_num_rows_aab = iArray_size_aab / sizeof(iArray_aab[0]);
	printf("Number Of Rows In The Diamentional (2D) Integer Array Is = %d\n\n", iArray_num_rows_aab);

	iArray_num_columns_aab = sizeof(iArray_aab[0]) / int_size_aab;
	printf("Number Of Columns In Two Diamentional (2D) Integer Array Is = %d\n\n", iArray_num_columns_aab);

	iArray_num_elements_aab = iArray_num_rows_aab * iArray_num_columns_aab;
	printf("Number Of Columns In Two Diamentional (2D) Integer Array Is = %d\n\n", iArray_num_elements_aab);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	// ***** PIECE-MEAL ASSIGNMENT ******
	// ***** ROW 1 *******
	iArray_aab[0][0] = 21;
	iArray_aab[0][1] = 42;
	iArray_aab[0][2] = 63;
	iArray_aab[0][3] = 84;
	iArray_aab[0][4] = 105;

	// ***** ROW 2 *****
	iArray_aab[1][0] = 22; 
	iArray_aab[1][1] = 44;
	iArray_aab[1][2] = 66;
	iArray_aab[1][3] = 88;
	iArray_aab[1][4] = 110;

	// ***** ROW 3 *****
	iArray_aab[2][0] = 23;
	iArray_aab[2][1] = 46;
	iArray_aab[2][2] = 69;
	iArray_aab[2][3] = 92;
	iArray_aab[2][4] = 115;

	// ***** DISPLAY ******
	for (i_aab = 0; i_aab < iArray_num_rows_aab; i_aab++)
	{
		printf("***** ROW  %d *******", (i_aab +1));
		for (j_aab = 0; j_aab < iArray_num_columns_aab; j_aab++)
		{
			printf("iArray[%d][%d] = %d\n", i_aab, j_aab, iArray_aab[i_aab][j_aab]);
		}
	}printf("\n\n");
    
	return(0);
}