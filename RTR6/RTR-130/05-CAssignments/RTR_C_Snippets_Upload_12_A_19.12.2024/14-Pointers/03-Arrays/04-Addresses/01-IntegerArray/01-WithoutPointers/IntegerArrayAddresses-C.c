#include<stdio.h>

int main(void)
{
	// variable declarations
	int iArray_aab[10];
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		iArray_aab[i_aab] = (i_aab + 1) * 3;

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("iArray_aab[%d] =  %d\n", i_aab, iArray_aab[i_aab]);

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("iArray_aab[%d] = %d \t\t Address = %p\n", i_aab, iArray_aab[i_aab], &iArray_aab[i_aab]);

	printf("\n\n");

	return(0);


}