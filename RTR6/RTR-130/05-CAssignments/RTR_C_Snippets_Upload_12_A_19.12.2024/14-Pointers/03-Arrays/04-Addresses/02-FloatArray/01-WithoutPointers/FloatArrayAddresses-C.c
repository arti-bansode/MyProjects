#include<stdio.h>

int main(void)
{
	// variable declarations
	float fArray_aab[10];
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		fArray_aab[i_aab] = (float)(i_aab + 1) * 1.5f;

	printf("\n\n");
	printf("Elements Of The 'float' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("fArray_aab[%d] =  %f\n", i_aab, fArray_aab[i_aab]);

	printf("\n\n");
	printf("Elements Of The 'float' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("fArray_aab[%d] = %f\t\t Address = %p\n", i_aab, fArray_aab[i_aab], &fArray_aab[i_aab]);

	printf("\n\n");

	return(0);


}