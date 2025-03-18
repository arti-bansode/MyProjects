#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);

	//variable declarations
	char* chArray_Original_aab = NULL, * chArray_Copy_aab = NULL; // A Character Array Is A String
	int original_string_length_aab;

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	chArray_Original_aab = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_Original_aab == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	printf("Enter A String : \n\n");
	gets_s(chArray_Original_aab, MAX_STRING_LENGTH);

	original_string_length_aab = MyStrlen(chArray_Original_aab);
	chArray_Copy_aab = (char*)malloc(original_string_length_aab * sizeof(char));
	if (chArray_Copy_aab == NULL)
	{
		printf("MEMORY ALLOCATION FOR CPIED STRING FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	// *** STRING COPY ***
	MyStrcpy(chArray_Copy_aab, chArray_Original_aab);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original') Is : \n\n");
	printf("%s\n", chArray_Original_aab);

	printf("\n\n");
	printf("The Copied String(i.e : 'chArray_Copy') Is : \n\n");
	printf("%s\n", chArray_Copy_aab);

	if (chArray_Copy_aab)
	{
		free(chArray_Copy_aab);
		chArray_Copy_aab = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR COPIED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");

	}

	if (chArray_Original_aab)
	{
		free(chArray_Original_aab);
		chArray_Original_aab = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");

	}
	return(0);
}

void MyStrcpy(char *str_destination, char *str_source)
{
	//function prototype
	int MyStrlen(char *);

	//variable declarations
	int iStringLength_aab = 0;
	int j_aab;

	//code
	iStringLength_aab = MyStrlen(str_source);
	for (j_aab = 0; j_aab < iStringLength_aab; j_aab++)
		*(str_destination + j_aab) = *(str_source + j_aab);

	*(str_destination + j_aab) = '\0';
}
int MyStrlen(char *str)
{

	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER (\0)****
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}