#include<stdio.h>

int main(void)
{
	//variable declarations
	double num_aab;
	double* ptr_aab = NULL; //Declaration Method 1 :- '*ptr_aab' is a variable of type 'double'

	//code
	num_aab = 2.34343434f;

	printf("\n\n"); 

	printf(" ****** BEFORE ptr_aab = &num_aab *****\n\n");
	printf("Value of 'num_aab'     = %lf\n\n", num_aab);
	printf("Address pf 'num_aab'   = %p\n\n", &num_aab);
	printf("Value At Address Of 'num_aab' = %lf\n\n", *(&num_aab));

	//Assigning address of variable 'num_aab' to pointer variable 'ptr_aab' 
	//'ptr_aab' now contains address of 'num_aab' .... hence, 'ptr_aab' is SAME as '&num_aab'
	ptr_aab = &num_aab;

	printf("\n\n");

	printf(" **** AFTER ptr_aab = &num_aab ****\n\n");
	printf("Value Of 'num_aab'         = %lf\n\n", num_aab);
	printf("Address Of 'num_aab'       = %p\n\n", ptr_aab);
	printf("Value At Address Of 'num_aab' = %lf\n\n", *ptr_aab);

	return(0);
}