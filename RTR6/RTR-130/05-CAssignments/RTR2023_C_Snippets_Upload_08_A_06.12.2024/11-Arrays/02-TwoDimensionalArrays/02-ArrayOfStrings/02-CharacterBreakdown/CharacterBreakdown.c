#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declaration

    // *** A 'STRING' IS ARRAY OF CHARACTERS .... so char[] IS A char ARRAY AND HENCE, char[] IS A 'STRING' ***
	// *** AN ARRAY OF char ARRAY IS AN ARRAY OF STRINGS !!! ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING ***
	//*** HENCE, char[][] IS AN ARRAY OF char ARRAY AND HENCE, IS AN ARRAY OF STRINGS ***

	//here, the string array can allow  a maximum number of 10 strings (10 rows) and each of these 10 string can have only upto 15 character maximum (15 columns)
	char strArray_aab[10][15] = { "Hello", "Welcome", "To","Real", "Time", "Rendering", "Batch", "(2020-21)", "Of", "ASTROMEDICOMP." }; //IN-LINE INITIALIZATION
	int iStrLength_aab[10]; //1D Integer Array -Stores lengths of those strings at corressponding indices in 'iStrLength[0] will be the length of string at strArray[0], iStringLength[1] will be the length of string at strArray[i]... 10 strings, 10 length...
	int strArray_size_aab;
	int strArray_num_rows_aab;
	int i_aab, j_aab;

	//code 
	strArray_size_aab = sizeof(strArray_aab);
	strArray_num_rows_aab = strArray_size_aab / sizeof(strArray_aab[0]);

	//Storing in length of all the strings....
	for (i_aab = 0; i_aab < strArray_num_rows_aab; i_aab++)
		iStrLength_aab[i_aab] = MyStrlen(strArray_aab[i_aab]);

	printf("\n\n");
	printf("The Entire String Array : \n\n");
	for (i_aab = 0; i_aab < strArray_num_rows_aab; i_aab++)
		printf("%s", strArray_aab[i_aab]);

	printf("\n\n");
	printf("String In The 2D Array : \n\n");

	//Since, char[][] is an array of string, referancing only by the row number (first []) will give the row or the string
	// The Column Number (second []) is the particular character in that string /row

	for (i_aab = 0; i_aab < strArray_num_rows_aab; i_aab++)
	{
		printf("String Number %d => %s\n\n", (i_aab + 1), strArray_aab[i_aab]);
		for (j_aab = 0; j_aab < iStrLength_aab[i_aab]; j_aab++)
		{
			printf("Character %d = %c\n", (j_aab + 1), strArray_aab[i_aab][j_aab]);
		}
		printf("\n\n");
	}
	return(0);
}
int MyStrlen(char str[])
{
	//variable declaration
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THR STRING, Y DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARATER (\0)***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}