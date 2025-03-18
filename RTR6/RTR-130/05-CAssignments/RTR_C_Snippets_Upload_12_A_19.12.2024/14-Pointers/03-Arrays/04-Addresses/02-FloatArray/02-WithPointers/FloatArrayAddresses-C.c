#include<stdio.h>

int main(void)
{
	//variable declarations
	float fArray_aab[10];
	float *ptr_fArray_aab = NULL;
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		fArray_aab[i_aab] = (float)(i_aab + 1) * 1.5f;

	//*** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, fArray_aab' IS THE BASE ADDRESS OF ARRAY fArray_aab[] OR 'fArray_aab' IS THE ADDRESS OF ELEMENTS iArray[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'fArray_aab[]' TO INTEGER POINTER 'ptr_fArray'

	ptr_fArray_aab = fArray_aab; //ptr_fArray_aab = &fArray_aab[0];

	printf("\n\n");
	printf("Elements Of The 'float Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("fArray_aab[%d] = %f\n", i_aab, *(ptr_fArray_aab + 1));

	printf("\n\n");
	printf("Elements Of The 'float' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("fArray_aab[%d] = %f \t\t Address = %p\n", i_aab, *(ptr_fArray_aab + i_aab), (ptr_fArray_aab + i_aab));

	printf("\n\n");

	return(0);
}