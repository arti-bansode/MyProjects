#include<stdio.h>

int main(void)
{
	//variable declarations
	int a;
	int b;
	int x;

	//code
	printf("\n\n");
	printf("Enter A Number :");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Another Number :");
	scanf("%d", &b);

	printf("\n\n");
	
	/*  *Since, in all the following 5 cases, the operand on the left 'a' is getting repeated
	immediately on the right (e.g : a = a + b or a = a - b), 
	*we are using compound assignment operators +=, -=, /= and %= /
	

     /*since, 'a' will be assigned the value of (a + b) at the expression (a += b),we must save
	 the original value of 'a' to another variable (x) */

	x = a;
	a += b; // a = a + b
	printf("Addition Of A = %d And B = %d Gives %d.\n", x, b, a);

	// value of 'a' altered in the above expression is used here....
	/* since, 'a' will be assigned the value of (a - b) at the expression (a -= b),we must save
	the original value of 'a' to another variable (x) */

	x = a;
	a -= b; // a = a - b
	printf("Substraction Of A = %d And B = %d Gives %d.\n", x, b, a);

	// value of 'a' altered in the above expression is used here....
	/* since, 'a' will be assigned the value of (a * b) at the expression (a *= b),we must save
	the original value of 'a' to another variable (x) */

	x = a;
	a *= b; // a = a * b
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", x, b, a);

	// value of 'a' altered in the above expression is used here....
	/* since, 'a' will be assigned the value of (a / b) at the expression (a /= b),we must save
	the original value of 'a' to another variable (x) */

	x = a;
	a /= b; // a = a / b
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", x, b, a);

	// value of 'a' altered in the above expression is used here....
	/* since, 'a' will be assigned the value of (a % b) at the expression (a %= b),we must save
	the original value of 'a' to another variable (x) */

	x = a;
	a %= b; // a = a % b
	printf("division Of A = %d And B = %d Gives Remainder %d.\n", x, b, a);

	printf("\n\n");
	return(0);
	
}