#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_aab;
	int* ptr_aab = NULL;
	int ans_aab;

	//code
	num_aab = 5;
	ptr_aab = &num_aab;

	printf("\n\n");
	printf("num_aab     = %d\n", num_aab);
	printf("&num_aab    = %p\n", &num_aab);
	printf("*(&num_aab) =%d\n", *(&num_aab));
	printf("ptr_aab     =%p\n", ptr_aab);
	printf("*ptr_aab    =%d", *ptr_aab);

	printf("\n\n");

	//Add 10 to 'ptr_aab' which is the address of 'num_aab' ...
	// Hence, 10 will be added to the address of 'num_aab' and the resultant address will be displayed
	printf("Answer of (ptr_aab + 10) = %p\n", (ptr_aab + 10));

	//Add 10 to 'ptr_aab' which is the address of 'num' and give value at the new address...
	//Hence, 10 will be added to the address of 'num_aab' and the value at resultant address will be displayed ...
	printf("Answer Of *(ptr_aab + 10) =%d\n", *(ptr_aab + 10));

	//Add 10 to  '*ptr_aab' which is the value at address of 'num_aab' (i.e : 'num_aab i.e: 5) and give new value. without any change in any address ...
	// Hence, 10 will be added to the '*ptr_aab' (num_aab = 5) and the resultant value will be given (*ptr + 10) = (5 + 10) = 15...
	printf("Answer Of (*ptr_aab + 10) = %d\n\n", (*ptr_aab + 10));

	// *** ASSOCIATIVITY OF * (VALUE AT ADDRESS) AND ++ AND ...OPERATORS IS FROM RIGHT TO LEFT ***

	// (RIGHT TO LEFT) Consider value *ptr .. pre-increment *ptr_aab ... that is, value at address 'ptr_aab' i.e: *ptr_aab is pre_increment (++*ptr)
	++*ptr_aab; // *ptr_aab is pre-incremented ... *ptr_aab is 5 ... after execution of this statemeent ... *ptr = 6
	printf("Answer Of ++*ptr_aab : %d\n", *ptr_aab); //Brackets not necessary for preincrement / pre-decrement

	// (RIGHT TO LEFT) post increment address ptr_aab ... That is , address 'ptr_aab' i.e: ptr_aab is post-increment (ptr_aab++) and then the value at the new address is displayed (*ptr_aab++)...
	*ptr_aab++; //Incorrect method of post-increment a value using pointer...
	printf("Answer Of *ptr_aab++ : %d\n", *ptr_aab); //Brackets ARE necessary for post-increment / post-increment

	//(RIGHT TO LEFT) post-increment value *ptr_aab ...that is , value at address 'ptr_aab' i.e: *ptr is post-incremented(*ptr)++
	ptr_aab = &num_aab;
	(*ptr_aab)++; //Correct method of post-increment a value using pointer...*ptr_aab is 6 ... at this statements *ptr_aab remains 6 but at next statements *ptr_aab = 7(post-increment)
	printf("Answer Of (*ptr_aab)++ : %d\n\n", *ptr_aab); //Brackets are necessary for post-increment / post-increment

	return(0);
}