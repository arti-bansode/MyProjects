#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	// variable declarations 
	int iArray_aab[NUM_ROWS][NUM_COLUMNS];
	int i_aab, j_aab;

	int* ptr_iArray_Row_aab = NULL;

	//code
	// *** EVERY ROW OF A 2D ARRAY INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLUMNS' INTEGER ELEMENTS ***
	// *** THERE ARE 5 ROWS AND 3 COLUMNS IN A 2D INTEGER ARRAY, EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	// *** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEING ARRAYS, WILL BE THE BASE ADDRESSES OF THEIR RESPECTIVE ROWS ***

	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		ptr_iArray_Row_aab = iArray_aab[i_aab]; // 'iArray[i_aab] IS THE BASE ADDRESS OF ith ROW...
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
			*(ptr_iArray_Row_aab + j_aab) = (i_aab + 1) * (j_aab + 1); //'ptr_iArray_row_aab' (That is, 'iArray_aab[i_Aab]' Can Be Treated As 1D Array Using Pointers)...
	}
	printf("\n\n");
	printf("2D Integer Array Element Along With Address : \n\n");
	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		ptr_iArray_Row_aab = iArray_aab[i_aab];
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf("*(ptr_iArray_Row_aab + %d) = %d \t \t At Address (ptr_irray_Row_aab + j_aab) : %p\n", j_aab, *(ptr_iArray_Row_aab + j_aab), (ptr_iArray_Row_aab + j_aab));
		}
		printf("\n\n");
	}
	return(0);
}