#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_aab;
	int* ptr_aab = NULL;
	int** pptr_aab = NULL; //Declaration Method 1 !- **pptr Is A Variable Of Type 'int'

	// code
	num_aab = 10;

	printf("\n\n");

	printf(" **** BEFORE ptr_aab = &num_aab ****\n\n");
	printf("Value Of 'num_aab'   =%d\n\n", num_aab);
	printf("Address Of 'num_aab' =%p\n\n", &num_aab);
	printf("Value At Address Of 'num' = %d\n\n", *(&num_aab));

	//Assigning address of variable 'num_aab' to pointer variable 'ptr_aab'
	//'ptr_aab' now contains address of 'num_aab' ... hence, 'ptr_aab' is SAME as '&num_aab'
	ptr_aab = &num_aab;

	printf("\n\n");

	printf(" ****** AFTER ptr = &num_aab *****\n\n");
	printf("Value Of 'num_aab' = %d\n\n", num_aab);
	printf("Address Of 'num_aab' = %p\n\n", ptr_aab);
	printf("Value At Address Of 'num_aab' = %d\n\n", *ptr_aab);

	//Assigning address of variable 'ptr_aab' to pointer-to-pointer variable 'pptr_aab'
	// 'pptr_aab' now contains the address of 'ptr_aab' which in turn contains the address of 'num_aab'
	// Hence, 'pptr_aab' is SAME as '&ptr_aab'
	// 'ptr_aab' is SAME as '&num'
	//Hence, pptr_aab = &ptr_aab = &(&num_aab)
	// If ptr_aab = &num_aab and *ptr_aab = *(&num_aab) = value at address of 'num_aab'
	//Then, pptr_aab = &ptr_aab and *pptr_aab = *(&ptr_aab) = ptr_aab = Value at address of 'ptr_aab' i.e: 'ptr_aab' i.e : address of 'num_aab'
	//Then, **ptr_aab = **(&ptr_aab) = *(*(&ptr)) = *(&num_aab) = num_aab = 10
	// Hence, num_aab = *(&num_aab) = *ptr_aab = *(*pptr_aab) = **pptr_aab

	pptr_aab = &ptr_aab;

	printf("\n\n");

	printf(" ***** AFTER pptr_aab = &ptr_aab ******\n\n");
	printf("Value Of 'num_aab'             = %d\n\n", num_aab);
	printf("Address Of 'num_aab' (ptr_aab) = %p\n\n", ptr_aab);
	printf("Address Of 'ptr_aab' (pptr_aab) = %p\n\n", pptr_aab);
	printf("Value At Address Of 'ptr_aab' (*pptr_aab) = %p\n\n", *pptr_aab);
	printf("Value At Address Of 'num_aab' (*ptr_aab) (*pptr_aab) = %d\n\n", **pptr_aab);

	return(0);
}