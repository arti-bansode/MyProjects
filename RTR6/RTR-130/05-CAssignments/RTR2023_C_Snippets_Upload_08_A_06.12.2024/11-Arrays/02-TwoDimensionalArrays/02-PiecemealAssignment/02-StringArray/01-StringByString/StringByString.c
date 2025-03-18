#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcpy(char[], char[]);

	//variable declarations

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS...so char[] is a char ARRAY AND HENCE, IS ONE 'STRING' ***
	// *** AN ARRAY OF char ARRAYS IS AN ARRAY OF STRINGS !!! ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING ***
	// *** HENCE, char[][] IS AN ARRAY OF char ARRAYS AND HENCE, IS AN ARRAY OF STRINGS ***

	// HENCE, the string array can allow a maximum number of 5 strings (5 rows) and each of these 5 strings can have only upto 10 characters maximum (10 columns)

	char strArray_aab[5][10]; // 5 rows (0, 1, 2, 3, 4) -> 5 STIRNG (EACH STRING CAN HAVE A MAXIMUM OF 10 CHARACTER)

	int char_size_aab;
	int strArray_size_aab;
	int strArray_num_elements_aab, strArray_num_rows_aab, strArray_num_columns_aab;
	int i_aab;

	//code
	printf("\n\n");

	char_size_aab = sizeof(char);

	strArray_size_aab = sizeof(strArray_aab);
	printf("Size Of Two Diamensional (2D) Character Array (String Array) Is = %d\n\n", strArray_size_aab);

	strArray_num_rows_aab = strArray_size_aab / sizeof(strArray_aab[0]);
	printf("Number Of Rows (Strings) In Two Diamensional (2D) Charcter Array (String Array) Is = %d\n\n", strArray_num_rows_aab);

	strArray_num_columns_aab = sizeof(strArray_aab[0]) / char_size_aab;
	printf("Number Of Column In Two Diamensional (2D) Character Array (String Array) Is = %d\n\n ", strArray_num_columns_aab);

	strArray_num_elements_aab = strArray_num_rows_aab * strArray_num_columns_aab;
	printf("Maximum Number Of Elements (Character) In Two Diamensional (2D) Character Array (String Array ) Is = %d\n\n", strArray_num_elements_aab);

	// *** PIECE-MEAL ASSIGNMENTS ***
	MyStrcpy(strArray_aab[0], "My");
	MyStrcpy(strArray_aab[1], "Name");
	MyStrcpy(strArray_aab[2], "Is");
	MyStrcpy(strArray_aab[3], "Arti");
	MyStrcpy(strArray_aab[4], "Bansode");

	printf("\n\n");
	printf("The String In the 2D Character Array Are : \n\n");

	for (i_aab = 0; i_aab < strArray_num_rows_aab; i_aab++)
		printf("%s", strArray_aab[i_aab]);

	printf("\n\n");

	return(0);
}

void MyStrcpy(char str_destination[], char str_source[])
{
	// function prototype
	int MyStrlen(char[]);

	//variable declaration
	int iStringLength_aab = 0;
	int j_aab;

	//code
	iStringLength_aab = MyStrlen(str_source);
	for (j_aab = 0; j_aab < iStringLength_aab; j_aab++)
		str_destination[j_aab] = str_source[j_aab];

	str_destination[j_aab] = '\0';
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER (\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
    }
	return(string_length_aab);
}