#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations

	//*** A 'STRING' IS AN ARRAY OF CHARACTERS .... SO char[] A char ARRAY AND HENCE, char[] IS A 'STRING' ***
	// *** AN ARRAY OF char ARRAYS IS AN ARRAY OF STIRNGS !!! ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING **
	// HENCE, char[][] IS AN ARRAY OF char ARRAYS AND HENCE, IS AN ARRAY OF STRING ***

	// here, the string array can allow a maximum number of 10 strings(10 rows) and each of these 10 strings can have only upto 15 character maximum (15 columns)

	char strArray[10][15] = { "Hello", "Welcome", "To","Real", "Time", "Rendering", "Batch", "(2020-21)", "Of", "ASTROMEDICOMP." }; //IN-LINE INITIALIZATION
	int char_size_aab;
	int strArray_size_aab;
	int strArray_num_elements_aab, strArray_num_rows_aab, strArray_num_columns_aab;
	int strActual_num_chars_aab = 0;
	int i_aab;

	//code
	printf("\n\n");

	char_size_aab = sizeof(char);

	strArray_size_aab = sizeof(strArray);
	printf("Size Of Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_size_aab);

	strArray_num_rows_aab = strArray_size_aab / sizeof(strArray[0]);
	printf("Number Of Rows (Strings) In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_rows_aab);

	strArray_num_columns_aab = sizeof(strArray[0]) / char_size_aab;
	printf("Number Of Columns In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_columns_aab);

	strArray_num_elements_aab = strArray_num_rows_aab * strArray_num_columns_aab;
	printf("Maximum Number Of Elements (Characters) In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_elements_aab);

	for (i_aab = 0; i_aab < strArray_num_rows_aab; i_aab++)
	{
		strActual_num_chars_aab = strActual_num_chars_aab + MyStrlen(strArray[i_aab]);
    }
	printf("Actual Number Of Elements (Characters) In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strActual_num_chars_aab);

	printf("\n\n");
	printf("String In The 2D Array : \n\n");

	//Since, char[][] is an array of stirng, referencing only by the row number (first[]) will give the row or the string
	// The column number (second []) is the particular character in that string / row
	printf("%s", strArray[0]);
	printf("%s", strArray[1]);
	printf("%s", strArray[2]);
	printf("%s", strArray[3]);
	printf("%s", strArray[4]);
	printf("%s", strArray[5]);
	printf("%s", strArray[6]);
	printf("%s", strArray[7]);
	printf("%s", strArray[8]);
	printf("%s\n\n", strArray[9]);

	return(0);
}

int MyStrlen(char str[])
{
	// variable declarations
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