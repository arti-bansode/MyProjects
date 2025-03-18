#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_aab[MAX_STRING_LENGTH], chArray_SpacesRemoved_aab[MAX_STRING_LENGTH]; //A Character Array Is A String
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
		if (chArray_aab[i_aab] == ' ')
		    continue;
		else
		{
			chArray_SpacesRemoved_aab[j_aab] = chArray_aab[i_aab];
			j_aab++;
		}
    }
	chArray_SpacesRemoved_aab[j_aab] = '\0';

	// *** STRING OUTPUT ****
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_aab);

	printf("\n\n");
	printf("String After Removal Of Spaces Is : \n\n");
	printf("%s\n", chArray_SpacesRemoved_aab);

	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations
	int j_aab;
	int stringlength_aab = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURANCE OF NULL-TERMINATING CHARACTER (\0)  ***
	for (j_aab = 0; j_aab < MAX_STRING_LENGTH; j_aab++)
	{
		if (str[j_aab] == '\0')
			break;
		else
			stringlength_aab++;
	}
	return(stringlength_aab);
}