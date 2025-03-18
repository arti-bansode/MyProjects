#include<stdio.h>

#define MAX_STRING_LENGTH 512
int main(void)
{
	//variable declarations
	char chArray_One_aab[MAX_STRING_LENGTH], chArray_Two_aab[MAX_STRING_LENGTH]; //A C haracter Array Is A String

	//code
	// *** STRING INPUT *****
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One_aab, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two_aab, MAX_STRING_LENGTH);

	// *** STRING CONCAT ***
	printf("\n\n");
	printf(" ***** BEFORE CONCATENATION *****");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'chArray_One[]') Is :\n\n");
	printf("%s\n", chArray_One_aab);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e : 'cfArray_Two[]') Is : \n\n");
	printf("%s\n", chArray_Two_aab);

	strcat(chArray_One_aab, chArray_Two_aab);

	printf("\n\n");
	printf(" ****** AFTER CONCATENATION *******");
	printf("\n\n");
	printf("'chArray_One_aab[]' Is : \n\n");
	printf("%s\n", chArray_One_aab);

	printf("\n\n");
	printf("'chArray_Two_aab[]'Is : \n\n");
	printf("%s\n", chArray_Two_aab);

	return(0);

}
