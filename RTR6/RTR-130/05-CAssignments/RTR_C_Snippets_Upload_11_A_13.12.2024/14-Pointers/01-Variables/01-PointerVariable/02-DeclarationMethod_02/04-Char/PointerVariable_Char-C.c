#include<stdio.h>

int main(void)
{
	//variable declarations
	char ch_aab;
	char* ptr_aab = NULL; //Declaration Method 1 :- '*ptr_aab' is a variable of type 'char'

	//code
	ch_aab = 'A';

	printf(" ****** BEFORE ptr_aab = &num_aab *****\n\n");
	printf("Value of 'ch-aab'     = %c\n\n", ch_aab);
	printf("Address pf 'ch-aab'   = %p\n\n", &ch_aab);
	printf("Value At Address Of 'ch_aab' = %c\n\n", *(&ch_aab));

	//Assigning address of variable 'num_aab' to pointer variable 'ptr_aab' 
	//'ptr_aab' now contains address of 'num_aab' .... hence, 'ptr_aab' is SAME as '&num_aab'
	ptr_aab = &ch_aab;

	printf("\n\n");

	printf(" **** AFTER ptr_aab = &ch_aab ****\n\n");
	printf("Value Of 'ch_aab'         = %c\n\n", ch_aab);
	printf("Address Of 'ch_aab'       = %p\n\n", ptr_aab);
	printf("Value At Address Of 'ch_aab' = %c\n\n", *ptr_aab);

	return(0);
}