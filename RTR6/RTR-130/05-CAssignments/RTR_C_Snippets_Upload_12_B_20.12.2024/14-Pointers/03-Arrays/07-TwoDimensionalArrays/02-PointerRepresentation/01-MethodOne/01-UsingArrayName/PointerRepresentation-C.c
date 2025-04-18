#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int iArray_aab[NUM_ROWS][NUM_COLUMNS];
	int i_aab, j_aab;

	//code
	// *** EVERY ROW  OF A 2D ARRAY IS AN INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLUMNS' INTEGER ELEMENTS ***
	// *** THERE ARE 5 ROWS AND 3 COLUMNS IN A 2D INTEGER ARRAY, EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	// *** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEING ARRAYS, WILL BE THE BASE ADDRESSES OF THEIR RESPECTIVE ROWS ***

	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
			*(iArray_aab[i_aab] + j_aab) = (i_aab + 1) * (j_aab + 1); //'iArray[i_aab]' Cab Be Treated As 1D Array Using Pointers.....
	}
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf("*(iArray_aab[%d] + %d) = %d \t\t At Address (iArray_aab[i_aab] + j_aab) : %p\n", i_aab, j_aab, *(iArray_aab[i_aab] + j_aab), (iArray_aab[i_aab] + j_aab));
		}
		printf("\n\n");
	}
	return(0);
}