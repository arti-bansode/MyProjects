#include<stdio.h>
#include<ctype.h> //for touper()

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char chArray_aab[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEveryWord_aab[MAX_STRING_LENGTH]; //A Character Array Is A String
	int iStringLength_aab;
	int i_aab, j_aab;

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_aab, MAX_STRING_LENGTH);

	iStringLength_aab = MyStrlen(chArray_aab);
	j_aab = 0;
	for (i_aab = 0; i_aab < iStringLength_aab; i_aab++)
	{
		if (i_aab == 0)
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = toupper(chArray_aab[i_aab]);

		else if (chArray_aab[i_aab] == ' ')
		{
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = chArray_aab[i_aab];
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab + 1] = toupper(chArray_aab[i_aab + 1]);

			//SINCE, ALREADY TWO CHARACTER (AT INDICES 'i' AND i + 1 HAVE BEEN CONSIDERED IN THIS else-if BLOCK...WE ARE EXTRA-INCREMENTING 'i_aab' AND 'j_aab' By 1)

			j_aab++;
			i_aab++;

		}
		else
			chArray_CapitalizedFirstLetterOfEveryWord_aab[i_aab] = chArray_aab[i_aab];

		j_aab++;
	}
	chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = '\0';

	// **** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_aab);

	printf("\n\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", chArray_CapitalizedFirstLetterOfEveryWord_aab);

	return(0);
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING , BY DETECTING THR FIRST OCCURENCE OF NULL-TERMINATING CHARACTER(\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);

}
