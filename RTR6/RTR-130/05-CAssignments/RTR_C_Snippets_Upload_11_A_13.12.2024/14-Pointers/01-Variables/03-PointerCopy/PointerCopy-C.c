#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_aab;
	int* ptr_aab = NULL;
	int* copy_ptr_aab = NULL;

	//code
	num_aab = 5;
	ptr_aab = &num_aab;

	printf("\n\n");
	printf(" ****** BEFORE copy_ptr_aab = ptr_aab ******\n\n");
	printf("  num_aab    =%d\n", num_aab);
	printf("  &num_aab   =%p\n", &num_aab);
	printf("  *(&num_aab) = %d\n", *(&num_aab));
	printf("  ptr_aab     =%p\n", ptr_aab);
	printf(" *ptr_aab     =%d\n", *ptr_aab);

		//'ptr_aab' is an integer pointer variable ... that it can hold the address any integer variable only.
		// 'copy_ptr_aab is another integer pointer variables
		// If ptr_aab &num_aab ... 'ptr_aab' will contains address of integer variable 'num_aab'
		// If 'ptr_aab' is assigned to 'copy_ptr_aab' , 'copy_ptr_aab' will also contain address of integer variable 'num_aab'
		// Hence, now, both 'ptr_aab' and 'copy_ptr_aab' will point to 'num_aab'

		copy_ptr_aab = ptr_aab; //copy_ptr_aab = ptr_aab = &num_aab

	printf("\n\n");
	printf("***** AFTER copy_ptr_aab = ptr_aab ***** \n\n");
	printf(" num_aab         = %d\n", num_aab);
	printf("&num_aab         = %p\n", &num_aab);
	printf("*(&num_aab)      = %d\n", *(&num_aab));
	printf("ptr_aab          = %p\n", ptr_aab);
	printf("*ptr_aab         = %d\n", *ptr_aab);
	printf("copy_ptr_aab     = %p\n", copy_ptr_aab);
	printf("*copy_ptr_aab    = %d\n", *copy_ptr_aab);

	return(0);
}