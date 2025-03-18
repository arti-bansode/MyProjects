#include<stdio.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20

#define ALPHABET_BEGINING 65 // 'A'

struct MyDataOne
{
	int iArray_aab[INT_ARRAY_SIZE];
	float fArray_aab[FLOAT_ARRAY_SIZE];
};

struct MyDataTwo
{
	char cArray_aab[CHAR_ARRAY_SIZE];
	char strArray_aab[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];
};

int main(void)
{
	//variable declarations
	struct MyDataOne data_one;
	struct MyDataTwo data_two;
	int i_aab;

	//code
	// *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
	data_one.fArray_aab[0] = 0.1f;
	data_one.fArray_aab[2] = 1.2f;
	data_one.fArray_aab[3] = 2.3f;
	data_one.fArray_aab[4] = 3.4f;
	data_one.fArray_aab[5] = 4.5f;

	// *** LOOP ASSIGNMENT (USER INPUT) ***
	printf("\n\n");
	printf("Enter %d Integers : \n\n", INT_ARRAY_SIZE);
	for(i_aab = 0; i_aab < INT_ARRAY_SIZE; i_aab++)
		scanf("%d", &data_one.iArray_aab[i_aab]);

	// *** LOOP ASSIGNMENT (HARD-CODED) ***
	for (i_aab = 0; i_aab < CHAR_ARRAY_SIZE; i_aab++)
		data_two.cArray_aab[i_aab] = (char)(i_aab + ALPHABET_BEGINING);

	// *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
	strcpy(data_two.strArray_aab[0], "Welcome !!!");
	strcpy(data_two.strArray_aab[1], "This");
	strcpy(data_two.strArray_aab[2], "Is");
	strcpy(data_two.strArray_aab[3], "ASTROMEDICOMP");
	strcpy(data_two.strArray_aab[4], "Real");
	strcpy(data_two.strArray_aab[5], "Time");
	strcpy(data_two.strArray_aab[6], "Rendering");
	strcpy(data_two.strArray_aab[7], "Batch");
	strcpy(data_two.strArray_aab[8], "Of");
	strcpy(data_two.strArray_aab[9], "2024-2025 !!!!");

	// *** DISPLAYING DATA MEMBER OF 'struct DataOne' AND THEIR VALUES ***
	printf("\n\n");
	printf("Member Of 'struct DataOne' Along With Their Assigned Value Are : \n\n");

	printf("\n\n");
	printf("Integer Array (data_one.iArray[]) : \n\n");
	for (i_aab = 0; i_aab < INT_ARRAY_SIZE; i_aab++)
		printf("data_one.fArray[%d] = %d\n", i_aab, data_one.iArray_aab[i_aab]);

	printf("\n\n");
	printf("Floating-Point Array (data_one.fArray[]) : \n\n");
	for (i_aab = 0; i_aab < FLOAT_ARRAY_SIZE; i_aab++)
		printf("data_one.fArray[%d] = %f\n", i_aab, data_one.fArray_aab[i_aab]);

	// *** DISPLAYING DATA MEMBERS OF 'struct DataTwo' AND THEIR VALUES ****
	printf("\n\n");
	printf("Member Of 'struct DataTwo' Along With Their Assigned Values Are : \n\n");

	printf("\n\n");
	printf("Character Array (data_two.CArray[]) : \n\n");
	for (i_aab = 0; i_aab < CHAR_ARRAY_SIZE; i_aab++)
		printf("data_two.cArray[%d] = %c\n", i_aab, data_two.cArray_aab[i_aab]);

	printf("\n\n");
	printf("String Array (data_two.strArray[]) : \n\n");
	for (i_aab = 0; i_aab < NUM_STRINGS; i_aab++)
		printf("%s", data_two.strArray_aab[i_aab]);

	printf("\n\n");

	return(0);
}