#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray_One_aab[5];
	int iArray_Two_aab[5][3];
	int iArray_Three_aab[100][100][5];

	int num_rows_2D_aab;
	int num_columns_2D_aab;

	int num_rows_3D_aab;
	int num_columns_3D_aab;
	int depth_3D_aab;

	//code
	printf("Size of 1D integer array in iArray_One = %zu\n", sizeof(iArray_One_aab));
	printf("Number of elements in 1D integer array iArray_One_aab = %zu\n", (sizeof(iArray_One_aab) / sizeof(int)));

	printf("\n\n");
	printf("Size of 2D integer array iArray_Two = %zu\n", sizeof(iArray_Two_aab));

	printf("Number rows in 2D integer array iArray_Two = %zu\n", (sizeof(iArray_Two_aab) / sizeof(iArray_Two_aab[0])));
	num_rows_2D_aab = (sizeof(iArray_Two_aab) / sizeof(iArray_Two_aab[0]));

	printf("Number of elements (columns) in ech row in 2D integer array iArray_Two = %zu\n", (sizeof(iArray_Two_aab[0]) / sizeof(iArray_Two_aab[0][0])));
	num_columns_2D_aab = (sizeof(iArray_Two_aab[0]) / sizeof(iArray_Two_aab[0][0]));

	printf("Number of elements in total in 2D Array iArray_Two_aab = %d\n", (num_rows_2D_aab * num_columns_2D_aab));

	printf("\n\n");

	printf("\n\n");
	printf("Size of 3D integer array iArray_Three_aab = %zu\n", sizeof(iArray_Three_aab));

	printf("Number rows in 3D integer array iArray_Three_aab = %zu\n", (sizeof(iArray_Three_aab) / sizeof(iArray_Three_aab[0])));
	num_rows_3D_aab = (sizeof(iArray_Three_aab) / sizeof(iArray_Three_aab[0]));

	printf("number of elements(columns) in one row in 3D integer array iArray_Three_aab = %llu\n", (sizeof(iArray_Three_aab[0]) / sizeof(iArray_Three_aab[0][0])));
	num_columns_3D_aab = (sizeof(iArray_Three_aab[0]) / sizeof(iArray_Three_aab[0][0]));

	printf("Number of elements (depth) in one column in one row in 3D integer array iArray_Three_aab = %zu\n", (sizeof(iArray_Three_aab[0][0]) / sizeof(iArray_Three_aab[0][0][0])));
	depth_3D_aab = (sizeof(iArray_Three_aab[0][0]) / sizeof(iArray_Three_aab[0][0][0]));

	printf("Number of elements in total in 3D Array iArray_Three_aab = %d\n", (num_rows_3D_aab * num_columns_3D_aab * depth_3D_aab));

	printf("\n\n");
	
	return(0);
}