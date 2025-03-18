#include<stdio.h>
int main(void)
{
	//variable declaration
	int iArray_aab[5][3] = { {1, 2, 3}, {2, 4, 6,}, {3, 6, 9},{4, 8, 12}, {5, 10, 15} }; //IN-LINE INITIALIZATION
	int int_size_aab;
	int iArray_size_aab;
	int iArray_num_elements_aab, iArray_num_rows_aab, iArray_num_columns_aab;

	//code
	printf("\n\n");

	int_size_aab = sizeof(int);

	iArray_size_aab = sizeof(iArray_aab);
	printf("Size Of Two Diamentional (2D) Integer Array Is = %d\n\n", iArray_size_aab);

	iArray_num_rows_aab = iArray_size_aab / sizeof(iArray_aab[0]);
	printf("Number Of Rows In Two Diamentional (2D) Integer Array Is =%d\n\n", iArray_num_rows_aab);

	iArray_num_columns_aab = sizeof(iArray_aab[0]) / int_size_aab;
	printf("Number Of Rows In Two Diamentional (2D) Integer Array Is =%d\n\n", iArray_num_columns_aab);

	iArray_num_elements_aab = iArray_num_rows_aab * iArray_num_columns_aab;
	printf("Number Of Elements In Two Diamensional (2D) Integer Array Is = %d\n\n", iArray_num_elements_aab);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	//*** ARRAY INDICES BEGINS FROM 0, HENCE, 1ST ROW IS ACTUALLY 0TH ROW AND 1ST COLUMN IS ACTUALLY OTH COLUMN ***

	// *** ROW 1 ***

	printf("***** ROW 1 *****\n");
	printf("iArray[0][0] = %d\n", iArray_aab[0][0]); // *** COLUMN 1 *** (0 th Element) => 1
	printf("iArray[0][1] = %d\n", iArray_aab[0][1]); // *** COLUMN 2 *** (1 st Element) => 2
	printf("iArray[0][2] = %d\n", iArray_aab[0][2]); // *** COLUMN 3 *** (2 th Element) => 3

	printf("\n\n");

	// *** ROW 2 ***
	
	printf("***** ROW 2 *****\n");
	printf("iArray[1][0] = %d\n", iArray_aab[1][0]); // *** COLUMN 1 *** (0 th Element) => 2
	printf("iArray[1][1] = %d\n", iArray_aab[1][1]); // *** COLUMN 2 *** (1 st Element) => 4
	printf("iArray[1][2] = %d\n", iArray_aab[1][2]); // *** COLUMN 3 *** (2 th Element) => 6

	printf("\n\n");

	// *** ROW 3 ***
	printf("***** ROW 3 *****\n");
	printf("iArray[2][0] = %d\n", iArray_aab[2][0]); // *** COLUMN 1 *** (0 th Element) => 3
	printf("iArray[2][1] = %d\n", iArray_aab[2][1]); // *** COLUMN 2 *** (1 st Element) => 6
	printf("iArray[2][2] = %d\n", iArray_aab[2][2]); // *** COLUMN 3 *** (2 th Element) => 9

	printf("\n\n");

	// *** ROW 4 ***
	printf("***** ROW 4 *****\n");
	printf("iArray[3][0] = %d\n", iArray_aab[3][0]); // *** COLUMN 1 *** (0 th Element) => 4
	printf("iArray[3][1] = %d\n", iArray_aab[3][1]); // *** COLUMN 2 *** (1 st Element) => 8
	printf("iArray[3][2] = %d\n", iArray_aab[3][2]); // *** COLUMN 3 *** (2 th Element) => 12

	printf("\n\n");

	// *** ROW 5 ****
	printf("***** ROW 5 *****\n");
	printf("iArray[4][0] = %d\n", iArray_aab[4][0]); // *** COLUMN 1 *** (0 th Element) => 5
	printf("iArray[4][1] = %d\n", iArray_aab[4][1]); // *** COLUMN 2 *** (1 st Element) => 10
	printf("iArray[4][2] = %d\n", iArray_aab[4][2]); // *** COLUMN 3 *** (2 th Element) => 15

	printf("\n\n");

	return(0);
}