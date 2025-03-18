#include <stdio.h>
#include <stdlib.h>

#define	MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char*);

	//variable declrations
	char* chArray_aab = NULL; // Character Array Can Be Represented By A char pointer to Mark The base Address (char *)
	int iStringLength_aab = 0;

	//code
	printf("\n\n");
	chArray_aab = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_aab == NULL)
	{
		printf("MEMORY ALLOCATION TO CHARACTER ARRAY FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	// *** STRING INPUT ***
	printf("Enter A String : \n\n");
	gets_s(chArray_aab, MAX_STRING_LENGTH);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_aab);

	// *** STRING LENGTH ***
	printf("\n\n");
	iStringLength_aab = MyStrlen(chArray_aab);
	printf("Length Of String Is = %d Characters !!!\n\n", iStringLength_aab);

	if (chArray_aab)
	{
		free(chArray_aab);
		chArray_aab = NULL;
	}

	return (0);
}

int MyStrlen(char* str)
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER ( \0 ) ***
	for ( j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (*(str + j_aab) == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}