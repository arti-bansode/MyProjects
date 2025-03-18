#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3
 
int main(void)
{
	//variable declarations
	int iArray_aab[NUM_ROWS][NUM_COLUMNS];
	int i_aab, j_aab;

	//code
	// *** NAME OF AN ARRAY ITSELF IS ITS BASE ADDRESS ***
	// *** HENCE, 'iArray_aab' IS BASE ADDRESS OF 2D INTEGER ARRAY iArray_aab[][]

	//iArray_aab[5][3] => iArray_aab IS A 2D ARRAY HAVING 5 ROWS AND 3 COLUMNS. EACH OF THESE 5 ROWS IS A 1D INTEGER ARRAY OF 3 INTEGER ***
	//iArray_aab[0] => IS THE 0TH ROW... HENSE, IS THE BASE ADDRESS OF ROW 0
	//iArray_aab[1] => IS THE 1TH ROW... HENSE, IS THE BASE ADDRESS OF ROW 1
	//iArray_aab[4] => IS THE 4TH ROW... HENSE, IS THE BASE ADDRESS OF ROW 4

	//(iArray_aab[0] + 0) => ADDRESS OF 0th INTEGER FROM BASE ADDRESS OF Oth ROW (iArray_aab[0][0])
	//(iArray_aab[0] + 1) => ADDRESS OF 1st INTEGER FROM BASE ADDRESS OF Oth ROW (iArray_aab[0][1])
	//(iArray_aab[0] + 2) => ADDRESS OF 2nd INTEGER FROM BASE ADDRESS OF Oth ROW (iArray_aab[0][2])


	//(iArray_aab[1] + 0) => ADDRESS OF 0th INTEGER FROM BASE ADDRESS OF 1st ROW (iArray_aab[1][0])
	//(iArray_aab[1] + 1) => ADDRESS OF 1st INTEGER FROM BASE ADDRESS OF 1th ROW (iArray_aab[1][1])
	//(iArray_aab[1] + 2) => ADDRESS OF 2nd INTEGER FROM BASE ADDRESS OF 1th ROW (iArray_aab[1][2])

	//iArray_aab[0], iArray_aab[1] ... ARE 1D INTEGER ARRAYS AND HENCE CAN BE TREATED AS 1D INTEGER ARRAYS USING POINTERS...
	// 'iArray_aab' IS THE NAME AND BASE ADDRESS OF 2D INTEGER ARRAY ***
	// (*(iArray_aab + 0) + 0) = (iArray_aab[0] + 0) = ADDRESS OF OTH ELEMENTS FROM BASE ADDRESS OF 0TH ROW = (iArray_aab[0] + 0) = (iArray_aab[0][0])
	// (*(iArray_aab + 0) + 1) = (iArray_aab[0] + 1) = ADDRESS OF 1ST  ELEMENTS FROM BASE ADDRESS OF 0TH ROW = (iArray_aab[0] + 1) = (iArray_aab[0][1])
	// (*(iArray_aab + 0) + 2) = (iArray_aab[0] + 2) = ADDRESS OF 2ND ELEMENTS FROM BASE ADDRESS OF 0TH ROW = (iArray_aab[0] + 2) = (iArray_aab[0][2])

	//(*(iArray_aab + 1) + 0) = (iArray_aab[1] + 0) = ADDRESS OF 0TH ELEMENT FRO BANSE ADDRESS OF 0TH ROW = (iArray[1] + 0) = (iArray[1][0])
	//(*(iArray_aab + 1) + 1) = (iArray_aab[1] + 1) = ADDRESS OF 1ST ELEMENT FRO BANSE ADDRESS OF 0TH ROW = (iArray[1] + 1) = (iArray[1][1])
	//(*(iArray_aab + 1) + 2) = (iArray_aab[1] + 2) = ADDRESS OF 2ND ELEMENT FRO BANSE ADDRESS OF 0TH ROW = (iArray[1] + 2) = (iArray[1][2])

	for (i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
			*(*(iArray_aab + i_aab) + j_aab) = (i_aab + 1) * (j_aab + 1); // 'iArray_aab[i_aab]' Can Be Treated As 1D Array Using Pointers...
	}printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for(i_aab = 0; i_aab < NUM_ROWS; i_aab++)
	{
		for(j_aab = 0; j_aab < NUM_COLUMNS; j_aab++)
		{
			printf("*(*(iArray_aab + %d) + %d) = %d \t\t At Address (*(iArray_aab + %d) + %d) : %p\n", i_aab, j_aab, *(*(iArray_aab + i_aab) + j_aab), i_aab, j_aab, (*(iArray_aab + i_aab) + j_aab));
		}
		printf("\n\n");
	}

	return(0);
}