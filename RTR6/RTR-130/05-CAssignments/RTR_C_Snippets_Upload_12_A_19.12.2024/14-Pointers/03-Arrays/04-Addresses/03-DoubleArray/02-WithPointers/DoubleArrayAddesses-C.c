#include<stdio.h>

int main(void)
{
	//variable declarations
	double dArray_aab[10];
	double *ptr_dArray_aab = NULL;
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		dArray_aab[i_aab] = (float)(i_aab + 1) * 1.333333f;

	//*** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, dArray_aab' IS THE BASE ADDRESS OF ARRAY dArray_aab[] OR 'dArray_aab' IS THE ADDRESS OF ELEMENTS iArray[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'dArray_aab[]' TO INTEGER POINTER 'ptr_dArray'

	ptr_dArray_aab = dArray_aab; //ptr_dArray_aab = &dArray_aab[0];

	printf("\n\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("dArray_aab[%d] = %lf\n", i_aab, *(ptr_dArray_aab + 1));

	printf("\n\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("dArray_aab[%d] = %lf \t\t Address = %p\n", i_aab, *(ptr_dArray_aab + i_aab), (ptr_dArray_aab + i_aab));

	printf("\n\n");

	return(0);
}