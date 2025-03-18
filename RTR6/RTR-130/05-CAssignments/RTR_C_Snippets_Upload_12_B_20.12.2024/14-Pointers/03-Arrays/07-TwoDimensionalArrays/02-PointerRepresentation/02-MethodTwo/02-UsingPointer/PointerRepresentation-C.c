#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int i_aab, j_aab;
	int **ptr_iArray_aab = NULL;

	//code
	//*** EVERY ROW OF A 2D ARRAY IS AN INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLUMNS' INTEGER ELEMENTS ***
	// *** THERE ARE 5 ROW AND 3 COLUMNS IN A 2D ARRAY .EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	// *** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEING ARRAYS, WILL BE THE BASE ADDRESSES OF THEIR RESPECTIVE ROWS ***

	printf("\n\n");

	// *** MEMORY ALLOCATION ***
	ptr_iArray_aab = (int**)malloc(NUM_ROWS * sizeof(int *)); // ptr_iArray_aab is the name ang base address of 1d array containig 5 integer pointer to 5 integer array ... so it is an array containing elemens of data type (int *)
	if (ptr_iArray_aab == NULL)
	{
		printf("MEMORY ALLOCATION TO THE 3D ARRAY OF BASE ADDRESSES OF %d ROMS FAILED !!! EXISTING NOW ....\n\n", NUM_ROWS);
		exit(0);
	}
	else
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDESSES OF %d ROWS HAS SUCCEEDED !!!\n\n", NUM_ROWS);

	//**** ALLOCATING MEMORY TO EACH ROW ***
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		ptr_iArray_aab[i_aab] = (int *)malloc(NUM_COLUMNS * sizeof(int)); // ptr_iArray_Aab[i_aab] is the base address of ith row..
		if (ptr_iArray_aab == NULL)
		{
			printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d FAILED !!! EXISTING NOW... \n\n", i_aab);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATON TO THE COLUMNS OF ROW %d HAS SUCCEEDED !!!\n\n", i_aab);
	}
	// *** ASSIGNING VALUES ***
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			*(*(ptr_iArray_aab + i_aab) + j_aab) = (i_aab + 1) * (j_aab + 1); // ptr_iArray_aab[i_aab][j_aab] = (i_aab + 1) * (j_aab + 1);
		}
	}
	// *** DISPLAYING VALUES ***
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; i_aab++)
		{
			printf("ptr_iArray_Row_aab[%d][%d] = %d\t\t At Address &ptr_iArray_Rows_aab[%d][%d] : %p\n", i_aab, j_aab, ptr_iArray_aab[i_aab][j_aab], i_aab, j_aab, &ptr_iArray_aab[i_aab][j_aab]);
		}
		printf("\n\n");
	}
	
	// *** FREEING ALLOCATED MEMORY  ***
	// *** FREEING MEMORY OF EACH ROW ***
	for (i_aab = (NUM_ROWS - 1); i_aab >= 0; i_aab--)
	{
		if (*(ptr_iArray_aab + i_aab)); //free(ptr_iArray_aab[i_aab])
		{
			free(*(ptr_iArray_aab + 1)); //free(ptr_iArray_aab[i_aab])
			*(ptr_iArray_aab + 1) = NULL; //ptr_iArray_aab[i_aab] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_aab);
		}
	}
	// ***FREEING MEMORY OF ptr_iArray WHICH IS THE ARRAY OF 5 INTEGER POINTERS... THAT IT, IT IS AN ARRAY HAVING 5 INTEGER ADDRESSES (TYPE int *)***
	if (ptr_iArray_aab)
	{
		free(ptr_iArray_aab);
		ptr_iArray_aab = NULL;
		printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESSFULLY FREED !!! \n\n");

	}
	return(0);

}