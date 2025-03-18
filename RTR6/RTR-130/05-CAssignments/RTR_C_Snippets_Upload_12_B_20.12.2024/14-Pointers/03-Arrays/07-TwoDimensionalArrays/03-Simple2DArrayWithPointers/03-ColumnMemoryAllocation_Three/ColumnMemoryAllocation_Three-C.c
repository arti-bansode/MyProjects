#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 5

int main(void)
{
	//variable declarations
	int* iArray_aab[NUM_ROWS]; // A 2D Array which will have 5 rows and number of columns can be decided later on ...
	int i_aab, j_aab;

	//code
	printf("\n\n");
	printf(" ******** MEMORY ALLOCATIN TO 2D INTEGER ARRAY *********\n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		//ROW 0 WILL HAVE (NUM_COLUMNS - 0) = (5 - 0) = 5 COLUMNS ...
		//ROW 1 WILL HAVE (NUM_COLUMNS - 1) = (5 - 1) = 4 COLUMNS ...
		//ROW 2 WILL HAVE (NUM_COLUMNS - 2) = (5 - 2) = 3 COLUMNS ...
		//ROW 3 WILL HAVE (NUM_COLUMNS - 3) = (5 - 3) = 2 COLUMNS ...
		//ROW 4 WILL HAVE (NUM_COLUMNS - 4) = (5 - 4) = 1 COLUMNS ...
        
		//BECAUSE OF THIS, THERE IS NO CONTIGUOUS MEMORY ALLOCATIN .... HENCE, ALTHOUGH WE MAY USE THE DATA AS A 2D ARRAY, IT IS NOT REALLY A 2D ARRAY IN MEMORY.....

		iArray_aab[i_aab] = (int*)malloc((NUM_COLUMNS - i_aab) * sizeof(int));
		if (iArray_aab[i_aab] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!! EXISTING NOW ...\n\n", i_aab);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDE !!!\n\n", i_aab);
	}
	for (i_aab = 0; i_aab < 5; i_aab++)
	{
		for (j_aab = 0; j_aab < (NUM_COLUMNS - 1); j_aab++)
		{
			iArray_aab[i_aab][j_aab] = (i_aab * 1) + (j_aab * 1);
		}
	}
	for (i_aab = 0; i_aab < 5; i_aab++)
	{
		for (j_aab = 0; j_aab < (NUM_COLUMNS - i_aab); j_aab++)
		{
			printf("iArray_aab[%d][%d] %d \t At Address : %p\n", i_aab, j_aab, iArray_aab[i_aab][j_aab], &iArray_aab[i_aab][j_aab]);
		}
		printf("\n");
	}
	for (i_aab = (NUM_ROWS - 1); i_aab >= 0; i_aab--)
	{
		if (iArray_aab[i_aab])
		{
			free(iArray_aab[i_aab]);
			iArray_aab[i_aab] = NULL; 
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_aab);
		}
	}
	return(0);
}