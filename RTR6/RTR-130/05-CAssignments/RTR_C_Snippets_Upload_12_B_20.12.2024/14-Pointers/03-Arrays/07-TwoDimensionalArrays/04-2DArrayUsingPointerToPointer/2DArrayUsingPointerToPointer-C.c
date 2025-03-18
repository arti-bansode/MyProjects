#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int** ptr_iArray_aab = NULL; //a pointer_topointer to integer ... but can also hold base address of a 2D Array which will can have any number of rows and any number of columns...
	int i_aab, j_aab;
	int num_rows_aab, num_columns_aab;

	//code

	// *** ACCEPT NUMBER OF ROWS 'num_rows_aab' FROM USER ***
	printf("\n\n");
	printf("Enter Number Of Rows :");
	scanf("%d", &num_rows_aab);

	//*** ACCEPT NUMBER OF COLUMNS 'num_columns' FROM USER ***
	printf("\n\n");
	printf("Enter Number Of Columns :");
	scanf("%d", &num_columns_aab);

	// *** ALLOCATING MEMORY TO 1D ARRAY CONSISTING OF BASE ADDRESS OF ROWS ***
	printf("\n\n");
	printf("*********** MEMORY ALLOCATING TO 2D INTEGER ARRAY ***********\n\n");
	ptr_iArray_aab = (int**)malloc(num_rows_aab * sizeof(int*));
	if (ptr_iArray_aab == NULL)
	{
		printf("FAILED TO ALLOCATE M+EMORY TO %d ROWS OF INTEGER ARRAY !!! EXISTING NOW ...\n\n", num_rows_aab);
		exit(0);
	}
	else
		printf("MEMORY ALLOCATION TO %d ROWS OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", num_rows_aab);
	//*** ALLOCATING MEMORY TO EACH ROW WHICH IS A 1D ARRAY CONTAINING CONSISTING OF COLUMNS WHICH CONTAIN THE ACTUAL INTEGERS ***
	for (i_aab = 0; i_aab < num_rows_aab; i_aab++)
	{

		ptr_iArray_aab[i_aab] = (int*)malloc(num_columns_aab * sizeof(int)); //ALLOCATING MEMORY (Number of columns * sizeof 'int') TO ROE 'i_aab' 

		// printf("memory allocation: %d and num= %d", i_aab, num_rows_aab);
		if (ptr_iArray_aab[i_aab] == NULL) //ROW 'i_aab' MEMORY ALLOCATED
		{
			printf("FAILED TO ALOCATE MEMORY TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY !!! EXISTING NOW ....\n\n", i_aab);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO COLUMNS OF ROWS %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_aab);
	}
	// ***FILLING UP VALUES ****
	for (i_aab = 0; i_aab < num_rows_aab; i_aab++)
	{
		for (j_aab = 0; j_aab < num_columns_aab; j_aab++)
		{
			// printf("i=%d, j=%d", i_aab, j_aab);
			ptr_iArray_aab[i_aab][j_aab] = (i_aab * 1) + (j_aab * 1); // can also use : *(*(ptr_iArray_aab + i_aab) + j_aab) = (i_aab * 1) + (j_aab + 1)
		}
	}
	// ***DISPLAYING VALUES ***
	for (i_aab = 0; i_aab < num_rows_aab; i_aab++)
	{
		printf("Base Address Of Rows %d : ptr_iArray_aab[%d] = %p \t At Address : %p\n", i_aab, i_aab, ptr_iArray_aab[i_aab], &ptr_iArray_aab[i_aab]);
	}
	printf("\n\n");
	for (i_aab = 0; i_aab < num_rows_aab; i_aab++)
	{
		for (j_aab = 0; j_aab < num_columns_aab; j_aab++)
		{
			printf("ptr_iArray_aab[%d][%d] = %d \t At Address : %p\n", i_aab, j_aab, ptr_iArray_aab[i_aab][j_aab], &ptr_iArray_aab[i_aab][j_aab]); //can also use *(*(ptr_iArray_Aab + i_aab) + j_aab) for value and *(ptr_iArray + i_aab) + j_aab for address....

		}
		printf("\n");
	}
	//*** FREEING MEMORY ALLOCATED TO EACH ROW ***
	for (i_aab = (num_rows_aab - 1); i_aab >= 0; i_aab--)
	{
		if (ptr_iArray_aab[i_aab])
		{
			free(ptr_iArray_aab[i_aab]);
			ptr_iArray_aab[i_aab] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_aab);
		}
	}
	// *** FREEING MEMORY ALLOCATED TO 1D ARRAY CONSISTING OF BASE ADDRESSES OF ROWS ***
	if (ptr_iArray_aab)
	{
		free(ptr_iArray_aab);
		ptr_iArray_aab = NULL;
		printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}

