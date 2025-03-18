#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int iArray[NUM_ELEMENTS];
	int i_aab, num_aab, sum_aab = 0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements For Array : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
	{
		scanf("%d", &num_aab);
		iArray[i_aab] = num_aab;

	}
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
	{
		sum_aab = sum_aab + iArray[i_aab];
	}

	printf("\n\n");
	printf("Sum Of All Elements Of Array = %d\n\n", sum_aab);

	return(0);
}