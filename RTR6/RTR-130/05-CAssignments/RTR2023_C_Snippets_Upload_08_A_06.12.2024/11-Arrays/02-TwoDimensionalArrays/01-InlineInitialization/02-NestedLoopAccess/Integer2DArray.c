#include<stdio.h>
int main(void)
{
	//variable declaration
	int iArray_aab[5][3] = { {1,2,3}, {2,4,6}, {3,6,9}, {4,8,12}, {5,10,15} }; //IN-LINE INITIALIZZATION
	int int_size_aab;
	int iArray_size_aab;
	int iArray_num_elements_aab, iArray_num_rows_aab, iArray_num_columns_aab;
	int i_aab, j_aab;

	//code
	printf("\n\n");

	int_size_aab = sizeof(int);

	iArray_size_aab = sizeof(iArray_aab);
	printf("Size Of Two Diamensional (2D) Integer Array Is = %d\n\n", iArray_size_aab);

	iArray_num_rows_aab = iArray_size_aab / sizeof(iArray_aab[0]);
	printf("Number Of Rows In Two Diamentional (2D) Integer Array Is =%d\n\n", iArray_num_rows_aab);

	iArray_num_columns_aab = sizeof(iArray_aab[0]) / int_size_aab;
	printf("Number Of Rows In Two Diamentional (2D) Integer Array Is =%d\n\n", iArray_num_columns_aab);

	iArray_num_elements_aab = iArray_num_rows_aab * iArray_num_columns_aab;
	printf("Number Of Elements In Two Diamensional (2D) Integer Array Is = %d\n\n", iArray_num_elements_aab);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	//*** ARRAY INDICES BEGINS FROM 0, HENCE, 1ST ROW IS ACTUALLY 0TH ROW AND 1ST COLUMN IS ACTUALLY 0TH COLUMN ***
	for (i_aab = 0; i_aab < iArray_num_rows_aab; i_aab++)
	{
		printf(" ****** ROW %d ******", (i_aab + 1));
		for (j_aab = 0; j_aab < iArray_num_columns_aab; j_aab++)
		{
			printf("iArray[%d][%d] = %d\n", i_aab, j_aab, iArray_aab[i_aab][j_aab]);
		}
		printf("\n\n");
	}
	return(0);
}