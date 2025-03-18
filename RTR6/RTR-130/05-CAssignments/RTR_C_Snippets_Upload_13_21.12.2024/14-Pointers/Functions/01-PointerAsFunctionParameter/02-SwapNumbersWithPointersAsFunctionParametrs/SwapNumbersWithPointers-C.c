#include<stdio.h>

int main(void)
{
	//function declarations
	void SwapNumbers(int*, int*);

	//variable declarations
	int a_aab;
	int b_aab;

	//code
	printf("\n\n");
	printf("Enter Value For 'A' :");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Value For 'B' : ");
	scanf("%d", &b_aab);

	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'A' =%d\n\n", a_aab);
	printf("Value Of 'B' =%d\n\n", b_aab);

	SwapNumbers(&a_aab, &b_aab); // *****ARGUMENT PASSED 'BY REFERANCE / ADDRESS' ....******

	printf("\n\n");
	printf("****** AFTER SWAPPING *******\n\n");
	printf("Value Of 'A' =%d\n\n", a_aab);
	printf("Value Of 'B' =%d\n\n", b_aab);

	return(0);
}

//Address Of 'a_aab' is copied into 'x' and Address of 'b' is copied into 'y' ...So, '&a_Aab' and 'x' are pointing to ONE and the SAME address and '&b_aab' and 'y' are pointing to ONE and the SAME address...
// Swapping takes place between 'value at address of x' (value at &a_aab i.e:'a_aab') and 'value at address of y' (value at &b i.e: 'b_aab')...
//Hence, Swapping in this case takes place between '*x' abd '*y' AS WELL AS BETWEEN 'a_aab' and 'b_aab' ...

void SwapNumbers(int *x, int *y)
{
	//variable declarations 
	int temp_aab;

	//code
	printf("\n\n");
	printf("****** BEFORE SWAPPING *****\n\n");
	printf("Value Of 'x' =%d\n\n", *x);
	printf("Value Of 'y' =%d\n\n", *y);

	temp_aab = *x;
	*x = *y;
	*y = temp_aab;

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'x' = %d\n\n", *x);
	printf("Value Of 'y' = %d\n\n", *y);
}
