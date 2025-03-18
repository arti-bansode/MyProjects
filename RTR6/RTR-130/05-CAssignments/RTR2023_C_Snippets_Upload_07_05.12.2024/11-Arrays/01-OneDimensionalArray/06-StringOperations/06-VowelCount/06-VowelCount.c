#include<stdio.h>

#define MAX_STRING_LENGTH 512
int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char chArray_aab[MAX_STRING_LENGTH]; //A Character Array Is A String
	int iStringLength_aab;
	int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0; //initial counts = 0
	int i_aab;

	//code
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_aab, MAX_STRING_LENGTH);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_aab);

	iStringLength_aab = MyStrlen(chArray_aab);

	for (i_aab = 0; i_aab < iStringLength_aab; i_aab++)
	{
		switch (chArray_aab[i_aab])
		{
		case 'A':
		case 'a':
			count_A++;
			break;
		case 'E':
		case 'e':
			count_E++;
			break;
		case 'I':
		case 'i':
			count_I++;
			break;
		case 'O':
		case 'o':
			count_O++;
			break;
		case 'U':
		case 'u':
			count_U++;
			break;
		default:
			break;
		}
	}

	printf("\n\n");
	printf("In The String Entered By You, The Vowel And The Number Of Thrie Occurance Are Follows : \n\n");
	printf("'A' Has Occured = %d Times !!!\n\n", count_A);
	printf("'E' Has Occured = %d Times !!!\n\n", count_E);
	printf("'I' Has Occured = %d Times !!!\n\n", count_I);
	printf("'O' Has Occured = %d Times !!!\n\n", count_O);
	printf("'U' Has Occured = %d Times !!!\n\n", count_U);

	return(0);
	
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINIG EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER (\0)***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}