#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	// function declarations
	void MathematicalOperations(int, int, int *, int *, int *, int *, int *);

	//variable declarations
	int a_aab;
	int b_aab;
	int *answer_sum_aab = NULL;
	int *answer_difference_aab = NULL;
	int *answer_product_aab = NULL;
	int *answer_quotient_aab = NULL;
	int *answer_remainder_aab = NULL;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &b_aab);

	//PASSNG ADDRESS TO FUNCTION ... FUNCTION WILL FILL THEM UP WITH VALUES ... HENCE, THEY GO INTO THE FUNCTION AS ADDRESS PARAMETER AND COME OUT THE FUNCTION FILLED WITH VALID VALUES
	// THUS, ( answer_sum_aab, answer_differance_aab, answer_product_aab, answer_quotient_aab,answer_remainder_aab) ARE CALLED "OUT PARAMETERS" OR "PARAMETERIZED RETURN VALUE" ...RETURN VALUE OF FUNCTION COMING VIA PARAMETER
	// HENCE, ALTHOUGH EACH  FUNCTION HAS ONLY ONE RETURN VALUE, USING THE CONCEPT OF "PARAMETERIZED RETURN VALUES", OUR FUNCTION "MathematialOperation()" HAS GIVEN US 5 RETURN VALUES !!!

	answer_sum_aab = (int *)malloc(1 * sizeof(int));
	if (answer_sum_aab == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_sum' . Existing Now ...\n\n");
		exit(0);
	}

	answer_difference_aab = (int *)malloc(1 * sizeof(int));
	if (answer_sum_aab == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_differance'.Existing Now....\n\n");
		exit(0);
	}

	answer_product_aab = (int *)malloc(1 * sizeof(int));
	if (answer_product_aab == NULL)
	{
		printf("Could Not Allocate Memory Fot 'answer_product_aab' . Existing Now ...\n\n");
		exit(0);
	}

	answer_quotient_aab = (int *)malloc(1 * sizeof(int));
	if (answer_quotient_aab == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_quotient_aab'. Existing Now...\n\n");
		exit(0);
	}

	answer_remainder_aab = (int*)malloc(1 * sizeof(int));
	if (answer_remainder_aab == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_remainder_aab'. Existing Now...\n\n");
		exit(0);
	}
	MathematicalOperations(a_aab, b_aab, answer_sum_aab, answer_difference_aab, answer_product_aab, answer_quotient_aab, answer_remainder_aab);

	printf("\n\n");
	printf(" ****** RESULTS******");
	printf("Sum = %d\n\n", *answer_sum_aab);
	printf("Difference = %d\n\n", *answer_difference_aab);
	printf("Product = %d\n\n", *answer_product_aab);
	printf("Quotient = %d\n\n", *answer_quotient_aab);
	printf("Remainder = %d\n\n", *answer_remainder_aab);

	if (answer_remainder_aab)
	{
		free(answer_remainder_aab);
		answer_remainder_aab = NULL;
		printf("Memory Allocated For 'answer_remainder_aab' Successfully Freed !!!\n\n");
	}
	if (answer_quotient_aab)
	{
		free(answer_quotient_aab);
		answer_quotient_aab = NULL;
		printf("Memory Allocated For 'answer_quotient_aab' Successfully Freed !!!\n\n");
	}
	if (answer_product_aab)
	{
		free(answer_product_aab);
		answer_product_aab = NULL;
		printf("Memory Allocated For 'answer_product_aab' Successfully Freed !!!\n\n");
	}
	if (answer_difference_aab)
	{
		free(answer_difference_aab);
		answer_difference_aab = NULL;
		printf("Memory Allocated For 'answer_difference_aab' Successfully Freed !!!\n\n");
	}
	if (answer_sum_aab)
	{
		free(answer_sum_aab);
		answer_sum_aab = NULL;
		printf("Memory Allocated For 'answer_sum_aab' Successfully Freed !!!\n\n");
	}
	return(0);
}
void MathematicalOperations(int x, int y, int *sum, int *difference, int *product, int *quotient, int *remainder)
{
	//code
	*sum = x + y;   //value at address 'sum' = (x + y)
	*difference = x - y; // value at address 'difference' = (x - y)
	*product = x * y; //value at address 'product' = (x * y)
	*quotient = x / y; //value at address 'quotient' = (x / y)
	*remainder = x % y; //value at address 'remainder' = (x % y)
}

