#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_aab = 5;
	const int* ptr_aab = &num_aab; // Read this line from right to left => "ptr_aab is a constant (const)pointer (*) to integer (int) constant (const)."

	//code
	printf("\n");
	printf("Current Value Of 'num' = %d\n", num_aab);
	printf("Current 'ptr_aab' (Address of 'num_aab') = %p\n", ptr_aab);

	//The following line does NOT give error ... as we are modifying the value of the variable individually 
	num_aab++;
	printf("\n\n");
	printf("After num_aab++, value of 'num_aab' = %d\n", num_aab);

	//The following line gives error and hence commented out.
	// We cannot alter the 'ptr_aab' value 'ptr_aab' is "A pointer to constant integer"
	//With respect to the pointer , the value it points to  is constant AND the pointer itself is also constant.
	//Uncomment it and see the error.

	//ptr_aab++;

	//The following line gives error and is hence commented out.
	//we cannot alter the 'ptr_aab' value as 'ptr_aab' is "a constant pointer to constant integer"
	//with respect to the pointer, the value it points to is  constant AND the pointer itself is also constant.
	//Uncomment it and see the error.

	// ptr_aab++;

	//The following line gives error and is hence commented out.
	//we cannot alter the value stored in 'ptr_aab' as 'ptr_aab' is "Aconstant pointer to constant integer"
	// with respect to the pointer, the value it points to is constant AND the pointer itself is also constant. 
	//Uncommented it and see the error.
	//(*ptr_aab)++;
	return(0);

}

//CONCLUSION : 
//As "ptr_aab" is a "constant pointer to variable integer" - we can change the value store at address "ptr_aab". but we cannot vchange the 'ptr_aab' (Address) itself.
//we can change the value of the variable (num) individually - whose address is contained in "ptr_aab"
// we cannot change "the value at address of ptr_aab" - we cannot change the value of "num_aab" with respect to "ptr_aab" => (*ptr_aab)++ is allowed.
// we cannot change the value of 'ptr' => that is we cannot store a new address inside 'ptr_aab' => so, ptr_aab++ is NOT ALLOWED allowed.