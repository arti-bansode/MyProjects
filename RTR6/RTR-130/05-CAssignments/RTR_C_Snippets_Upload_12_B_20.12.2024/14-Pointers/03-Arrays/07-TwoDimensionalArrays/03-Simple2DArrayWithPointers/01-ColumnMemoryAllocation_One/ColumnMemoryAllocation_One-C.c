#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define	NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int* iArray_aab[NUM_ROWS]; //A 2D Arrya Which will have 5 rows and number of columns can be decided later on....
	int i_aab, j_aab;

	//code
	printf("\n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		iArray_aab[i_aab] = (int*)malloc(NUM_COLUMNS * sizeof(int));
		if (iArray_aab[i_aab] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %D OF 2D INTEGER ARRAY EXISTING NOW...\n\n", i_aab);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!!\n\n",i_aab);
    }

	//ASSIGNING VALUE TO 2D ARRAY.... 
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			iArray_aab[i_aab][j_aab] = (i_aab + 1) * (j_aab + 1);
		}
	}

	//DISPLAYING 2D ARRAY....
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab; NUM_COLUMNS; j_aab++)
		{
			printf("iArray_aab[%d][%d] = %d\n", i_aab, j_aab, iArray_aab[i_aab][j_aab]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//FREEING MEMORY ASSIGNED TO 2D ARRAY (MUST BE DONE IN REVERSE ORDER)
	for (i_aab = (NUM_ROWS - 1); i_aab >= 0; i_aab--)
	{
		free(iArray_aab[i_aab]);
		iArray_aab[i_aab] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_aab);
	}
	return(0);
}

