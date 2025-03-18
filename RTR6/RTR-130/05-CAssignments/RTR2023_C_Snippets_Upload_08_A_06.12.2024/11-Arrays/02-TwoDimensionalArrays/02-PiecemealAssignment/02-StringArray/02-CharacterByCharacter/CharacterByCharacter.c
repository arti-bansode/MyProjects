#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// variable declarations

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS .... so char[] Is A char Array AND HENCE, char[] IS A 'STRING' ***
	// *** AN ARRAY OF CHAR ARRAYS IS AN ARRAY AND HENCE, IS ONE STRING ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING ***
	// *** HENCE, char[][] IS AN ARRAY OF char ARRAY AND HENCE, IS AN ARRAY OF STRING ***

	//Here, the string array can allow a maximum number of 5 string (5 rows) and each of these 5 strings can have only upto 10 character maximum(10 column)
	char strArray_aab[5][10]; // 5 Rows (0, 1, 2, 3, 4) -> strings(each string can have a maximum of 10 characters)
	int char_size_aab;
	int strArray_size_aab;
	int strArray_num_elements_aab, strArray_num_rows_aab, strArray_num_columns_aab;
	int i_aab;

	// code
	printf("\n\n");

	char_size_aab = sizeof(char);

	strArray_size_aab = sizeof(strArray_aab);
	printf("Size Of Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_size_aab);

	strArray_num_rows_aab = strArray_size_aab / sizeof(strArray_aab[0]);
	printf("Number Of Rows (Strings) In Two Daimentional (2D) Character Array (String Araay) Is = %\n\n", strArray_num_rows_aab);

	strArray_num_columns_aab = sizeof(strArray_aab[0]) / char_size_aab;
	printf("Number Of Columns In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_columns_aab);

	strArray_num_elements_aab = strArray_num_rows_aab * strArray_num_columns_aab;
	printf("Maximum Number Of Elements (Character) In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_elements_aab);

	// *** PIECE-MEAL ASSIGNMENTS ***
	// *** ROW 1 / STRING 1 ***
	strArray_aab[0][0] = 'M';
	strArray_aab[0][1] = 'Y';
	strArray_aab[0][2] = '\0'; // NULL-TERMINATING CHARACTER

	// ******* ROW 2 / STRING 2 ******
	strArray_aab[1][0] = 'N';
	strArray_aab[1][1] = 'A';
	strArray_aab[1][2] = 'M';
	strArray_aab[1][3] = 'E';
	strArray_aab[1][4] = '\0'; // NULL-TERMINATING CHARACTER

	strArray_aab[2][0] = 'I'; 
	strArray_aab[2][1] = 'S';
	strArray_aab[2][2] = '\0'; // NULL-TERMINATING CHARACTERS

	strArray_aab[3][0] = 'A';
	strArray_aab[3][1] = 'R';
	strArray_aab[3][2] = 'T';
	strArray_aab[3][3] = 'I';
	strArray_aab[3][4] = '\0'; //NULL-TERMINATING CHARACTERS

	strArray_aab[4][0] = 'B';
	strArray_aab[4][1] = 'A';
	strArray_aab[4][2] = 'N';
	strArray_aab[4][3] = 'S';
	strArray_aab[4][4] = 'O';
	strArray_aab[4][5] = 'D';
	strArray_aab[4][6] = 'E';
	strArray_aab[4][7] = '\0'; //NULL- TERMINATING CHARACTER

	printf("\n\n");
	printf("The String In The 2D Character Array Are : \n\n");

	for (i_aab = 0; i_aab < strArray_num_rows_aab; i_aab++)
		printf("%s", strArray_aab[i_aab]);

	printf("\n\n");

	return(0);
}
int MyStrlen(char str[])
{
	// variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-DETERMINATING CHARACTER(\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;

	}
	return(string_length_aab);

}
