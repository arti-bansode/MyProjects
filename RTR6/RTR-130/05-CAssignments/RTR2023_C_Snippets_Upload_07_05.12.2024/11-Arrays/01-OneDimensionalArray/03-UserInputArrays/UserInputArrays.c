#include<stdio.h>

//MACRO CONSTANT USED AS ARRAY SIZE IN SUBSCRIBE AND AS ARRAY LENGHT
// HENCE, THIS PROGRAM'S SIZES CAN BE SIMPLY CHANGED BY CHANGING THIS FOLLOWING 3 GLOBAL MACRO CONSTANT VALUE, BEFORE COPILING, LINKING AND EXCUTING THE PROGRAM !!!


#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15

int main(void)
{
	//variable declarations
	int iArray[INT_ARRAY_NUM_ELEMENTS];
	float fArray[FLOAT_ARRAY_NUM_ELEMENTS];
	char cArray[CHAR_ARRAY_NUM_ELEMENTS];
	int i_aab, num_aab;

	//code

	// ******* ARRAY ELEMENT INPUT ********
	printf("\n\n");
	printf("Enter Elements For 'Integer' Array : \n");
	for (i_aab = 0; i_aab < INT_ARRAY_NUM_ELEMENTS; i_aab++)
	scanf("%d", &iArray[i_aab]);

	printf("\n\n");
	printf("Enter Elements For 'Floating-Point' Array : \n");
	for (i_aab = 0; i_aab < FLOAT_ARRAY_NUM_ELEMENTS; i_aab++)
	scanf("%f", &fArray[i_aab]);

	printf("\n\n");
	printf("Enter Elements For 'Character' Array : \n");
	for (i_aab = 0; i_aab < CHAR_ARRAY_NUM_ELEMENTS; i_aab++)
	{
		cArray[i_aab] = getch();
		printf("%c\n", cArray[i_aab]);
	}

	// ************* ARRAY ELEMENTS OUTPUTS ***************

	printf("\n\n");
	printf("Integer Array Entered By You : \n\n");
	for (i_aab = 0; i_aab < INT_ARRAY_NUM_ELEMENTS; i_aab++)
	printf("%d\n", iArray[i_aab]);

	printf("\n\n");
	printf("Floating-Point Array Entered By You : \n\n");
	for (i_aab = 0; i_aab < FLOAT_ARRAY_NUM_ELEMENTS; i_aab++)
	printf("%f\n", fArray[i_aab]);

	printf("\n\n");
	printf("Character Array Entered By You : \n\n");
	for (i_aab = 0; i_aab < CHAR_ARRAY_NUM_ELEMENTS; i_aab++)
	printf("%c\n", cArray[i_aab]);

	return(0);
}