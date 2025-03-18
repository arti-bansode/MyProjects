#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int iArray[NUM_ELEMENTS];
	int i_aab, num_aab, sum_aab = 0;

	//code
	printf("\n\n");

	//*** ARRAY ELEMENTS INPUT ***
	printf(" Enter Integer Elements For Array : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
	{
		scanf("%d", &num_aab);
		iArray[i_aab] = num_aab;
	}

	// *** SEPRATING OUT EVEN NUMBER FROM ARRAY ELEMENTS ***
	printf("\n\n");
	printf("Even Number Amongst The Array Elements Are : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
	{
		if ((iArray[i_aab] % 2) == 0)
			printf("%d\n", iArray[i_aab]);
	}

	// SEPRATING OUT ODD NUMBERS FROM ARRAY  ELEMENTS  ***
	printf("\n\n");
	printf("Odd Numbers Amongst The Array Elements Are : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
	{
		if ((iArray[i_aab] % 2) != 0)
			printf("%d\n", iArray[i_aab]);

	}
	return(0);
}