#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray_aab[10];
	int* ptr_iArray_aab = NULL;
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		iArray_aab[i_aab] = (i_aab + 1) * 3;

	//*** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, iArray_aab' IS THE BASE ADDRESS OF ARRAY iArray_aab[] OR 'iArray_aab' IS THE ADDRESS OF ELEMENTS iArray[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'iArray_aab[]' TO INTEGER POINTER 'ptr_iArray'

	ptr_iArray_aab = iArray_aab; //ptr_iArray_aab = &iArray_aab[0];

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("iArray_aab[%d] = %d\n", i_aab, *(ptr_iArray_aab + 1));

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("iArray_aab[%d] = %d \t\t Address = %p\n", i_aab, *(ptr_iArray_aab + i_aab), (ptr_iArray_aab + i_aab));

	printf("\n\n");

	return(0);
}