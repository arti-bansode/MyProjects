#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char chArray[MAX_STRING_LENGTH]; //A Character Array Is A String
	int iStringLength_aab = 0;

	//code 

	//*** STRING INPUT ****
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	//*** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	// **** STRING LENGTH ***
	printf("\n\n");
	iStringLength_aab = MyStrlen(chArray);
	printf("Lenght Of String Is = %d Character !!!\n\n", iStringLength_aab);
	
	return(0);
}
int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int string_length_aab = 0;

	//code
	// *** DETERMINIG EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER(\0) ****
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			string_length_aab++;
    }
	return(string_length_aab);
}
