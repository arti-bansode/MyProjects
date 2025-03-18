#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_aab = 5;
	int* const ptr_aab = &num_aab; // Read this line from right to left => "ptr_aab is a pointer (*) to integer (int) constant (const)."

	//code
	printf("\n");
	printf("Current Value Of 'num' = %d\n", num_aab);
	printf("Current 'ptr_aab' (Address of 'num_aab') = %p\n", ptr_aab);

	//The following line does NOT give error ... as we are modifying the value of the variable individually 
	num_aab++;
	printf("\n\n");
	printf("After num_aab++, value of 'num_aab' = %d\n", num_aab);

	//The following line gives error and hence commented out.
	// We cannot alter the value stored in "A pointer to constant integer"
	//With respect to the pinter , the value it points to should be constant.

	//(*ptr_aab)++;

	//The following line does NOT give error
	//we cannot alter the 'ptr_aab' value as 'ptr_aab' is "a constant pointer to integer"
	//with respect to the pointer, the value it points to is not constant but the pointer itself is constant.
	//Uncomment it and see the error.

	// ptr_aab++;

	//The following line does NOT give error
	// We do not grt error because we are changing the value at a constant pinter (address)
	// The pointer is constant . the value to which the pointer points is NOT constant.
	(*ptr_aab)++;

	printf("\n\n");
	printf("After ptr_aab++, value of 'ptr' = %p\n", ptr_aab);
	printf("Value at this new 'ptr_aab' = %d\n", *ptr_aab);
	printf("\n");
	return(0);

}

//CONCLUSION : 
//As "ptr_aab" is a "constant pointer to variable integer" - we can change the value store at address "ptr_aab". but we cannot vchange the 'ptr_aab' (Address) itself.
//we can change the value of the variable (num) individually - whose address is contained in "ptr_aab"
// we cannot change "the value at address of ptr_aab" - we cannot change the value of "num_aab" with respect to "ptr_aab" => (*ptr_aab)++ is allowed.
// we cannot change the value of 'ptr' => that is we cannot store a new address inside 'ptr_aab' => so, ptr_aab++ is NOT ALLOWED allowed.