#include<stdio.h>

int main(void)
{
	//function declaration
	void SwapNumbers(int, int);

	//variable declarations
	int a_aab;
	int b_aab;

	//code
	printf("\n\n");
	printf("Enter Value For 'A' :");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Value For 'B' :");
	scanf("%d", &b_aab);

	printf("\n\n");
	printf("****** BEFORE SWAPPING *******\n\n");
	printf("Value Of 'A' =%d\n\n", a_aab);
	printf("Value Of 'B' =%d\n\n", b_aab);

	SwapNumbers(a_aab, b_aab); //***** ARGUMENT PASSED 'BY VALUE' ...******

	printf("\n\n");
	printf("******* AFTER SWAPPING ********");
	printf("Value Of 'A' = %d\n\n", a_aab);
	printf("Value Of 'B' = %d\n\n", b_aab);

	return(0);

}

void SwapNumbers(int x, int y) //Value of 'a_aab' is copied into 'x' and value of 'b_aab' is copied into 'y' ...swapping takes place between 'x' and 'y', not between 'a_aab' and 'b_aab'...
{
	//variable declarations
	int temp_aab;

	//code
	printf("\n\n");
	printf("******BEFORE SWAPPING ******\n\n");
	printf("Value Of 'X' = %d\n\n", x);
	printf("Value Of 'y' = %d\n\n", y);

	temp_aab = x;
	x = y;
	y = temp_aab;

	printf("\n\n");
	printf("****** AFTER SWAPPING *******");
	printf("Value Of 'x' = %d\n\n", x);
	printf("Value Of 'y' = %d\n\n", y);

}