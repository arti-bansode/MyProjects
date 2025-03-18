#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcat(char[], char[]);

	//variable declarations
	char chArray_One_aab[MAX_STRING_LENGTH], ChArray_Two_aab[MAX_STRING_LENGTH]; //A Character Array Is String

	//code

	// *** STRING INPUT ****
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One_aab, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(ChArray_Two_aab, MAX_STRING_LENGTH);

	// *** STRING CONCAT ***

	printf("\n\n");
	printf(" ****** BEFORE CONCATENATION ******");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'chArray_One_aab[]') Is :\n\n");
	printf("%s\n", chArray_One_aab);

	printf("\n\n");
	printf("The Original Second String Entered By You(i.e : 'chArray_Two_aab[]') Is : \n\n");
	printf("%s\n", ChArray_Two_aab);

	MyStrcat(chArray_One_aab, ChArray_Two_aab);

	printf("\n\n");
	printf(" ***** AFTER CONCATENATION  ***");
	printf("\n\n");
	printf("'chArray_One_aab[]' Is :\n\n");
	printf("%s\n", chArray_One_aab);

	printf("\n\n");
	printf("'chArray_Two_aab[]' Is :\n\n");
	printf("%s\n", ChArray_Two_aab);

	return(0);
}
void MyStrcat(char str_destination[], char str_source[])
{
	// function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_Source_aab = 0, iStringLength_Destination_aab = 0;
	int i_aab, j_aab;

	//code
	iStringLength_Source_aab = MyStrlen(str_source);
	iStringLength_Destination_aab = MyStrlen(str_destination);

	//ARRAY INDICES BEGIN FROM 0 , HENCE, LAST VALID INDEX OF ARRAY WILL ALWAYS BE (LENGTH-1)
	//SO, CONCATINATION MUST BEGINE FROM INDEX NUMBER EQUAL TO LENGTH OF THE ARRAY 'str_destination'
	//WE NEED TO PUT THE CHARACTER WITCH IS AT FIRST INDDEX OF 'str_source' TO THE (LAST INDEX +1) OF 'str_destination

	for (i_aab = iStringLength_Destination_aab, j_aab = 0; j_aab < iStringLength_Source_aab; i_aab++, j_aab++)
	{
		str_destination[i_aab] = str_source[j_aab];
	}
	str_destination[i_aab] = '\0';
}

int MyStrlen(char str[])
{
	//variable declaration
	int j_aab;
	int string_length_aab = 0;

	//code
	//**** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL- TERMINATING CHARACTER (\0)*****

	for ( j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;

	}
	return(string_length_aab);
}

