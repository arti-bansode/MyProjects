#include<stdio.h>

int main(void)
{
	//variable declarations
	char chArray_01[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0'}; // Must Given \0 Explicitly For Proper Initialization.
	char chArray_02[] = { 'W', 'E', 'L', 'C', 'O', 'M', 'E', '\0'}; // Must Given \0 Explicitly For Proper Initialization.
	char chArray_03[] = { 'Y', 'O', 'U', '\0' }; // Must Given \0 Explicitly For Proper Initialization.
	char chArray_04[] = "TO"; // \0 is assumed, size is given as 3, although string has only 2 character
	char chArray_05[] = "REAL TIME RENDERING BATCH OF 2024-25"; // \0 is assumed, size is given as 40, although string has 39 characters

	char chArray_WithoutNullTerminator[] = { 'H', 'e', 'l', 'l', 'o' };

	//code
	printf("\n\n");

	printf("Size Of chArray_01 : %zu\n\n", sizeof(chArray_01));
	printf("Size Of chArray_02 : %zu\n\n", sizeof(chArray_02));
	printf("Size Of chArray_03 : %zu\n\n", sizeof(chArray_03));
	printf("Size Of chArray_04 : %zu\n\n", sizeof(chArray_04));
	printf("Size Of chArray_05 : %zu\n\n", sizeof(chArray_05));

	printf("\n\n");

	printf("The String Are : \n\n");
	printf("chArray_01 : %s\n\n", chArray_01);
	printf("chArray_02 : %s\n\n", chArray_02); 
	printf("chArray_03 : %s\n\n", chArray_03);
	printf("chArray_04 : %s\n\n", chArray_04);
	printf("chArray_05 : %s\n\n", chArray_05);

	printf("\n\n");
	printf("Size Of chArray_WithoutNullTerminator : %zu\n\n", sizeof(chArray_WithoutNullTerminator));
	printf("chArray_WithoutNullTerminator : %s\n\n", chArray_WithoutNullTerminator); //Will display garbage value at the end of string due to absence of \0.

	return(0);
}