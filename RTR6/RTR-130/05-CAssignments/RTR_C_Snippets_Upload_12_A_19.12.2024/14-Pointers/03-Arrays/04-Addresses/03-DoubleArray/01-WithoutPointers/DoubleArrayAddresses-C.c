#include<stdio.h>

int main(void)
{
	// variable declarations
	double dArray_aab[10];
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		dArray_aab[i_aab] = (float)(i_aab + 1) * 1.333333f;

	printf("\n\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("dArray_aab[%d] =  %lf\n", i_aab, dArray_aab[i_aab]);

	printf("\n\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("dArray_aab[%d] = %lf \t\t Address = %p\n", i_aab, dArray_aab[i_aab], &dArray_aab[i_aab]);

	printf("\n\n");

	return(0);


}