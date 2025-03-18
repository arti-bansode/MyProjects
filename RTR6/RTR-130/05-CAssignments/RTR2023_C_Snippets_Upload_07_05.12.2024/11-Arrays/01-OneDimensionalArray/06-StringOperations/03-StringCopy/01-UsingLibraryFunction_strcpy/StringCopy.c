#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations
	char chArray_Original_aab[MAX_STRING_LENGTH], chArray_Copy_aab[MAX_STRING_LENGTH];//A Character Array Is A String

	//code

	//*** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_aab, MAX_STRING_LENGTH);

	// **** STRING COPY ****
	strcpy(chArray_Copy_aab, chArray_Original_aab);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'charray_Original_aab[]') Is \n\n");
	printf("%s\n", chArray_Original_aab);

	printf("\n\n");
	printf("The Copied String (i.e : 'chArray_Copy[]') Is : \n\n");
	printf("%s\n", chArray_Copy_aab);

	return(0);
}