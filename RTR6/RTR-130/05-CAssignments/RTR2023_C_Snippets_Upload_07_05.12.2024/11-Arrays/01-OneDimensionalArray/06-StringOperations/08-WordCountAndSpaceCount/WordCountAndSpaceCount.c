#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_aab[MAX_STRING_LENGTH]; //A Character Array Is A String
	int iStringLength_aab;
	int i_aab;
	int word_count_aab = 0, space_count_aab = 0;

	//code
	// ** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_aab, MAX_STRING_LENGTH);

	iStringLength_aab = MyStrlen(chArray_aab);

	for (i_aab = 0; i_aab < iStringLength_aab; i_aab++)
	{
		switch (chArray_aab[i_aab])
		{
		case 32 : //32 IS THE ASCII VALUE FOR SPACE (' ') CHARACTER
			space_count_aab++;
			break;
		default:
			break;

		}
	}
	word_count_aab = space_count_aab + 1;

	// *** STRING OUTPUTS ****
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_aab);

	printf("\n\n");
	printf("Number Of Spaces In The String = %d\n\n", space_count_aab);
	printf("Number Of Words In The Input String = %d\n\n", word_count_aab);

	return(0);
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINIG EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-DETERMINATING CHARACTER ( \0 ) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}
