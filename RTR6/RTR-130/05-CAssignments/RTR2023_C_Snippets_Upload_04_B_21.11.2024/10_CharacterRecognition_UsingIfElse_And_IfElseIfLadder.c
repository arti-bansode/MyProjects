#include<stdio.h> //for printf()
#include<conio.h> //for getch()

//ASCII Value For 'A' tp 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII Values For 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Values For '0' to '9' => 48 to 57
#define CHAR_DIGIT_BEGINING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declarations
	char ch_aab;
	int ch_aab_value;

	//code
	printf("\n\n");

	printf("Enter Character : ");
	ch_aab = getch();

	printf("\n\n");

	if ((ch_aab == 'A' || ch_aab == 'a') || (ch_aab == 'E' || ch_aab == 'e') || (ch_aab == 'I' || ch_aab == 'i') || (ch_aab == 'O' || ch_aab == 'o') || (ch_aab == 'U' || ch_aab == 'u'))
	{
		printf("Character \'%c\' Entered By You ,Is A VOWEL CHARACTER From The English Alphabet !!!\n\n", ch_aab);
	}
	else
	{
		ch_aab_value = (int)ch_aab;

		//If The Character Has ASCII Value Between 65 AND 90 Between 97 AND 122,It Is Still A Letter Of The Alphabet, But It Is A 'CONSONANT', And NOT a 'vowel'...

		if ((ch_aab_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_aab_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) ||
			(ch_aab_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_aab_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Enered By You, Is A CONSONANT CHARACTER From the English Alphabet !!!\n\n", ch_aab);
		}
		else if (ch_aab_value >= CHAR_DIGIT_BEGINING && ch_aab_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER \n\n", ch_aab);
		}
		else
		{
			printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER \n\n", ch_aab);
		}
	}

	return(0);
}

