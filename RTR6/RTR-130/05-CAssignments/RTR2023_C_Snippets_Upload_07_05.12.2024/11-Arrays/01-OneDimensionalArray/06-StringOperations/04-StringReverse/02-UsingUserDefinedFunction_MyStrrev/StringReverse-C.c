#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrrev(char[], char[]);

	//variable declarations
	char chArray_original_aab[MAX_STRING_LENGTH], chArray_Reversed_aab[MAX_STRING_LENGTH]; //A Character Array Is A String

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_original_aab, MAX_STRING_LENGTH);

	// *** STRING REVERSE ***
	MyStrrev(chArray_Reversed_aab, chArray_original_aab);

	// ***STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original_aab[]') Is : \n\n");
	printf("%s\n", chArray_original_aab);

	printf("\n\n");
	printf("The Reversed String Entered  (i.  : 'chArray_reversed_aab[]') Is : \n\n");
	printf("%s\n", chArray_Reversed_aab);

	return(0);
}

void MyStrrev(char str_destination[], char str_source[])
{
	//function prototype
	int MyStrlen_aab(char[]);

	//variable declaration
	int iStringLength_aab = 0;
	int i_aab, j_aab, len_aab;

	//code
	iStringLength_aab = MyStrlen(str_source);

	//ARRAY INDICES BEGIN FROM 0, HENCE, LAST INDEX WILL ALWAYS BE (LENGTH - 1)
	len_aab = iStringLength_aab - 1;

	//WE NEED TO PUT THE CHARACTER WITCH IS AT LAST INDEX OF 'str_source'  TO THE FIRST IDEX OF 'str_destination'
	//AND SECOND -LAST CHARACTER OF 'str_source' TO THE SECOND CHARACTER OF 'str_destination' and so on....

	for (i_aab = 0, j_aab = len_aab; i_aab < iStringLength_aab, j_aab >= 0; i_aab++, j_aab--)
	{
		str_destination[i_aab] = str_source[j_aab];
    }
	str_destination[i_aab] = '\0';
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER(\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	 return(string_length_aab);
}