#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int iArray[NUM_ELEMENTS];
	int i_aab, num_aab, j_aab, count_aab = 0;

	//code
	printf("\n\n");

	// *** ARRAY ELEMENTS INPUT ***
	printf("Enter Integer Elements For Array : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
	{
		scanf("%d", &num_aab);

		//If 'num' is negative ( < 0), then convert it to positive(multiply by -1)
		if (num_aab < 0)
			num_aab = -1 * num_aab;

		iArray[i_aab] = num_aab;
	}

	//*** PRINTING ENTIRE ARRAY ****
	printf("\n\n");
	printf("Array Elements Are : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS; i_aab++)
		printf("%d\n", iArray[i_aab]);

	// *** SEPRATING OUT EVEN NUMBERS FROM ARAY ELEMENTS ***
	printf("\n\n");
	printf("Prime Numbers Amongst The Array Elements Are : \n\n");
	for (i_aab = 1; i_aab < NUM_ELEMENTS; i_aab++)
	{
		for (j_aab = 1; j_aab <= iArray[i_aab]; j_aab++)
		{
			if ((iArray[i_aab] % j_aab) == 0)
				count_aab++;
		}

		//NUMBER 1 IS NEITHER A PRIME NOR A CONSTANT
		//IF A NUMBER IS PRIME, IT IS ONLY DIVISIBLE BY 1 AND ITSELF.
		//HENCE.IF A NUMBER IS PRIME, THE VALUE OF 'COUNT'WILL BE EXACTLY 2 NUMBERS OTHER THAN 1 AND ITSELF AND HENCE, IT IS NOT PRIME
		// THE VALUE OF 'COUNT' WILL BE 1 ONLY IF iArray[i_aab] is 1.

		if (count_aab == 2)
			printf("%d\n", iArray[i_aab]);
		count_aab = 0; //RESET 'count' TO 0 FOR CHECKING THE NEXT NUMBER....



	}

}
