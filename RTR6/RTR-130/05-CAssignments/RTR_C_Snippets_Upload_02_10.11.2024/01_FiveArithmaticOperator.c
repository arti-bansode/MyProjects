#include<stdio.h>

int main(void)
{
	//variable declaration
	int a;
	int b;
	int result;

	//code
	printf("\n\n");
	printf("enter A Number:");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Another Number:");
	scanf("%d", &b);

	printf("\n\n");

	//*** The following are the 5 arithmatic operator +,-,*,/,and % ***
	/* also, the resultants of the arithmatic operations in all  the below
	five cases have been assigned to the variable 'result' using the assignment operator (=) */

	result = a + b;
	printf("Addition Of A = %d And B = %d Gives %d.\n", a, b, result);

	result = a - b;
	printf("Substaction Of A = %d And B = %d Gives %d.\n", a, b, result);

	result = a * b;
	printf("Multiplication Of A = %d And B = %d Gives % d.\n", a, b, result);

	result = a / b;
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", a, b, result);

	result = a % b;
	printf("Divsion Of A = %d And B = %d Gives Remainder %d.\n", a, b, result);

	printf("\n\n");

	return(0);

}