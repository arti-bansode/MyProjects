//*** THIS PROGRAM REPLACE ALL VOWEL IN THE INPUT STRING WITH THE  * (asterisk) SYMBOL ***
// *** FOR EXAMPLE, ORIGINAL STRING 'Arti Amol Bansode' ASTROMEDICOMP' WILL BECOME '*rt* *m*l b*ns*d* *STR*M*D*C*MP'

#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_Original_aab[MAX_STRING_LENGTH], chArray_VowelsReplaced_aab[MAX_STRING_LENGTH]; //A Character Array Is A String
	int iStringLength_aab;
	int i_aab;

	//code

	// *** STRING INPUT ****
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_aab, MAX_STRING_LENGTH);

	//***STRING OUTPUT ***
	MyStrcpy(chArray_VowelsReplaced_aab, chArray_Original_aab);

	iStringLength_aab = MyStrlen(chArray_VowelsReplaced_aab);

	for (i_aab = 0; i_aab < iStringLength_aab; i_aab++)
	{
		switch (chArray_VowelsReplaced_aab[i_aab])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				chArray_VowelsReplaced_aab[i_aab] = '*';
				break;
			default:
				break;
		}
	}
		// *** STRIG OUTPUT ***
		printf("\n\n");
		printf("String Entered By You Is :\n\n");
		printf("%s\n", chArray_Original_aab);

		printf("\n\n");
		printf("String After Replacement Of By * Is : \n\n");
		printf("%s\n", chArray_VowelsReplaced_aab);

		return(0);
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINIG EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER (\0) ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if(str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
    }
	return(string_length_aab);
}
void MyStrcpy(char str_destination[], char str_source[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_aab = 0;
	int j_aab;

	//code
	iStringLength_aab = MyStrlen(str_source);
	for (j_aab = 0; j_aab < iStringLength_aab; j_aab++)
		str_destination[j_aab] = str_source[j_aab];

	str_destination[j_aab] = '\0';
}