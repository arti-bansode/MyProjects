#include<stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '

#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	char MyToupper(char);

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
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = MyToupper(chArray_aab[i_aab]);
		else if (chArray_aab[i_aab] == SPACE) //FIRST LETTER OF EVERY WORD IN THE SENTENCE MUST BE A CAPITAL LETTER .WORDS ARE SEPRATED BY SPACES.
		{
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = chArray_aab[i_aab];
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = MyToupper(chArray_aab[i_aab + 1]);

			//SINCE, ALREADY TWO CHARACTERS(AT INDICES 'i' AND i + 1 HAVE BEEN CONSIDERED IN THIS else-if BLOCK....WE ARE EXTRA-INCREMENTING 'i' AND 'j' BY 1)
			j_aab++;
			i_aab++;
		}
		else if ((chArray_aab[i_aab] == FULLSTOP || chArray_aab[i_aab] == COMMA || chArray_aab[i_aab] == EXCLAMATION || chArray_aab[i_aab] == QUESTION_MARK) && (chArray_aab[i_aab] != SPACE)) //FIRST LETTER OF EVERY WORD AFTER PUNCTUATION MARK, IN THE SENTENCE MUST BE A CAPITAL LETTER. WORDS ARE SEPRATED BY PUNTUACTIONS.
		{
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = chArray_aab[i_aab];
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab + 1] = SPACE;
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab + 2] = MyToupper(chArray_aab[i_aab + 1]);

			//SINCE, ALREADY TWO CHARACTER (AT INDICES 'i' AND i + 1 HAVE BEEN CONSIDERED IN THIS else-if BLOCK.. WE ARE EXTRA-INCREMENTING 'i' BY 1
			// SINCE, ALREADY THREE CHARACTER (AT INDICES 'j' AND(j + 1) AND(j + 2) HAVE BEEN CONSODERED IN THIS else-if BLOCK... WE ARE EXTRA-INCREMENTING 'j' BY 2

			j_aab = j_aab + 2;
			i_aab++;
		}
		else
			chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = chArray_aab[i_aab];

		j_aab++;
    }

	chArray_CapitalizedFirstLetterOfEveryWord_aab[j_aab] = '\0';

	// *** STRING OUTPUT ***
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
	// *** DETERMINING EXACT LENGTH OF THE STRING BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER(\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
	}
	return(string_length_aab);
}
char MyToupper(char ch)
{
	//variable declaration
	int num_aab;
	int c_aab;

	 // ASCII VALUE OF 'a' (97) - ASCII VALUE OF 'A' (65) = 32
	//THIS SUBTRACTION WILL GIVE THE EXACT DIFFERANCE BETWEEN THE UPPER AND LOWER CASE COUNTERPARTS OF EACH LETTER OF THE ALPHABET
	//IF THE DIFFERANCE IS SUBTRACTION FROM THE ASCII VALUE OF A LOWER CASE LETTER, THE RESULTANT ASCII VALUE WILL BE THAT OF ITS UPPER CASE COUNTERPART, HENCE, HELPING US TO FIND ITS UPPER CASE LETTER !!!
	//ASCII VALUES OF 'a' to 'z' => 97 TO 122
	//ASCII VALUES OF 'A' TO 'Z' => 65 TO 90
	num_aab = 'a' - 'A';

	if ((int)ch >= 97 && (int)ch <= 122)
	{
		c_aab = (int)ch - num_aab;
		return((char)c_aab);
	}
	else
		return(ch);
}