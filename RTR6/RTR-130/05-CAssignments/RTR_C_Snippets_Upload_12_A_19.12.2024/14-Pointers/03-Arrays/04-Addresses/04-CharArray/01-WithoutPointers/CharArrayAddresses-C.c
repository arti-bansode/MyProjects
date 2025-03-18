#include<stdio.h>

int main(void)
{
	// variable declarations
	char cArray_aab[10];
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		cArray_aab[i_aab] = (char)(i_aab + 65);

	printf("\n\n");
	printf("Elements Of The 'Character' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("cArray_aab[%d] =  %c\n", i_aab, cArray_aab[i_aab]);

	printf("\n\n");
	printf("Elements Of The 'Character' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("cArray_aab[%d] = %c \t\t Address = %p\n", i_aab, cArray_aab[i_aab], &cArray_aab[i_aab]);

	printf("\n\n");

	return(0);


}