#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrrev(char*, char*);
	int MyStrlen(char*);

	//variable declarations
	char *chArray_Original_aab = NULL, *chArray_Reversed_aab = NULL; //A Character Array Is A String
	int original_string_length_aab;

	//code
	// **** STRING INPUT ****
	printf("\n\n");
	chArray_Original_aab = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_Original_aab == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXISTING NOW ...\n\n");
		exit(0);
	}
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_aab, MAX_STRING_LENGTH);

	//** STRING REVERSE *****
	original_string_length_aab = MyStrlen(chArray_Original_aab);
	chArray_Reversed_aab = (char *)malloc(original_string_length_aab * sizeof(char));
	if (chArray_Reversed_aab == NULL)
	{
		printf("MEMORY ALLOCATION FOR REVERSED STRING FAILED !!! EXISTING NOW ...\n\n");
		exit(0);
	}
	MyStrrev(chArray_Reversed_aab, chArray_Original_aab);

	// **** STRING OUTPUT ****
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original_aab[]') Is : \n\n");
	printf("%s\n", chArray_Original_aab);

	printf("\n\n");
	printf("The Reversed String (i.e : 'chArray_Reversed_aab[]') Is : \n\n");
	printf("%s\n", chArray_Reversed_aab);

	if (chArray_Reversed_aab)
	{
		free(chArray_Reversed_aab);
		chArray_Reversed_aab = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO REVERSE STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}

void MyStrrev(char* str_destination, char* str_source)
{
	//function prototype
	int MyStrlen(char *);

	//variable declarations
	int iStringLength_aab = 0;
	int i_aab, j_aab, len_aab;

	//code
	iStringLength_aab = MyStrlen(str_source);

	//ARRAR INDICES BEGIN FROM 0, HENCE, LAST INDEX WILL ALWAYS BE (LENGTH - 1)
	len_aab = iStringLength_aab - 1;

	// WE NEED TO PUT THE CHARACTER WHICH IS AT LAST INDEX OF 'str_source' TO THE FIRST INDEX OF 'str_destination' 
	//AND SECOND-LAST CHARACTER OF 'str_source' TO THE SECOND CHARACTER OF 'str_destination' and so on....
	for (i_aab = 0, j_aab = len_aab; i_aab < iStringLength_aab, j_aab >= 0; i_aab++, j_aab--)
	{
		*(str_destination + i_aab) = *(str_source + j_aab);
	}
	*(str_destination + i_aab) = '\0';
}
int MyStrlen(char *str)
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING , BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER (\0)***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		string_length_aab++;

	}
	return(string_length_aab);

}