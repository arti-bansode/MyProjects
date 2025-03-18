#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function declarations
	char* ReplaceVowelsWithHashSymbol(char*);

	//variable declaration
	char string_aab[MAX_STRING_LENGTH];
	char* replaced_string_aab = NULL;

	//code
	printf("\n\n");
	printf("Enter String : ");
	gets_s(string_aab, MAX_STRING_LENGTH);

	replaced_string_aab = ReplaceVowelsWithHashSymbol(string_aab);
	if (replaced_string_aab == NULL)
	{
		printf("ReplaceVowelsWithHashSymbol() Function Has Failed !!! Exiting Now...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Replaced String Is : \n\n");
	printf("%s\n\n", replaced_string_aab);

	if (replaced_string_aab)
	{
		free(replaced_string_aab);
		replaced_string_aab = NULL;
	}

	return(0);
}

char* ReplaceVowelsWithHashSymbol(char* s)
{
	//function prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);

	//variable declarations
	char *new_string_aab = NULL;
	int i_aab;

	//code
	new_string_aab = (char*)malloc(MyStrlen(s) * sizeof(char));
	if (new_string_aab == NULL)
	{
		printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!!\n\n");
		return(NULL);
	}

	MyStrcpy(new_string_aab, s);
	for (i_aab = 0; i_aab < MyStrlen(new_string_aab); i_aab++)
	{
		switch (new_string_aab[i_aab])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			new_string_aab[i_aab] = '#';
			break;
		default:
			break;

		}
	}

	return (new_string_aab);
}

void MyStrcpy(char* str_destination, char* str_source)
{
	//function prototype
	int MyStrlen(char*);

	//variable declarations
	int iStringLength_aab = 0;
	int j_aab;

	//code
	iStringLength_aab = MyStrlen(str_source);
	for (j_aab = 0; j_aab < iStringLength_aab; j_aab++)
		*(str_destination + j_aab) = *(str_source + j_aab);

	*(str_destination + j_aab) = '\0';
}

int MyStrlen(char* str)
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// ***	DETERMINING EXACT LENGTH OF THE STRING BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER ( \0 ) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}