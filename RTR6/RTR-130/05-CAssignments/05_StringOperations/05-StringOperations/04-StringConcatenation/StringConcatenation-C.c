#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// function prototype
	void MyStrcat(char*, char*);
	int MyStrlen(char*);

	//variable declarations
	char* chArray_One_aab = NULL, * chArray_Two_aab = NULL; // A Character Array Is A String

	//code

	//**** STRING INPUT ****
	printf("\n\n");
	chArray_One_aab = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_One_aab == NULL)
	{
		printf("MEMORY ALLOCATION TO FIRST STRING FAILED !!! EXISTING NOW ...\n\n");
		exit(0);
	}
	printf("Enter First String : \n\n");
	gets_s(chArray_One_aab, MAX_STRING_LENGTH);

	printf("\n\n");
	chArray_Two_aab = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_Two_aab == NULL)
	{
		printf("MEMORY ALLOCATION TO SECOND STRING FAILED !!! EXISTING NOW...\n\n");
		exit(0);
	}
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two_aab, MAX_STRING_LENGTH);

	// *** STRING CONCAT ***
	printf("\n\n");
	printf(" ****** BEFORE CONCATENATINATION********");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'chArray_One_aab[]') Is : \n\n");
	printf("%s\n", chArray_One_aab);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e : 'chArray_Two_aab[]) Is : \n\n");
	printf("%s\n", chArray_Two_aab);

	MyStrcat(chArray_One_aab, chArray_Two_aab);
	printf("\n\n");
	printf("******* AFTER CONCATENATION*******");
	printf("\n\n");
	printf("'chArray_One_aab[]' Is : \n\n");
	printf("%s\n", chArray_One_aab);

	printf("\n\n");
	printf("'chArray_Two_aab[]' Is : \n\n");
	printf("%s\n", chArray_Two_aab);

	if (chArray_Two_aab)
	{
		free(chArray_Two_aab);
		chArray_Two_aab = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO SECOND STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (chArray_One_aab)
	{
		free(chArray_One_aab);
		chArray_One_aab = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATION TO FIRST STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");

	}
	return(0);
}
void MyStrcat(char* str_destination, char* str_source)
{
	// function prototype
	int MyStrlen(char*);

	//variable declarations
	int iStringLength_Source_aab = 0, iStringLength_Destination_aab = 0;
	int i_aab, j_aab;

	//code
	iStringLength_Source_aab = MyStrlen(str_source);
	iStringLength_Destination_aab = MyStrlen(str_destination);

	//ARRAY INDICES BEGIN FROM 0, HENCE, LAST VALID INDEX OF ARRAY WILL ALWAYS BE (LENGTH - 1)
	//SO, CONCATENATION MUST BEGIN FROM INDEX NUMBER EQUAL TO LENGTH OF THE ARRAY 'str_destination'
	//WE NEED TO PUT THE CHARACTER WHICH IS AT FIRST INDEX OF 'str_source' TO THE (LAST INDEX + 1) OF 'str_destination'

	for (i_aab = iStringLength_Destination_aab, j_aab = 0; j_aab < iStringLength_Source_aab; i_aab++, j_aab++)
	{
		*(str_destination + i_aab) = *(str_source + j_aab);
	}
	*(str_destination + i_aab) = '\0';
}
int MyStrlen(char* str)
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL- TERMINATING CHARACTER (\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;

	}
	return(string_length_aab);
}

