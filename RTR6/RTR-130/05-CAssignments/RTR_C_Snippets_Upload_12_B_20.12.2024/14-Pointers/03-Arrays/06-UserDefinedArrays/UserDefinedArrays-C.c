#include<stdio.h>
#include<stdlib.h>

#define INT_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)

int main(void)
{
	//variable declarations
	int *ptr_iArray_aab = NULL;
	unsigned int intArrayLength_aab = 0;

	float *ptr_fArray_aab = NULL;
	unsigned int floatArrayLength_aab = 0;

	double *ptr_dArray_aab = NULL; 
	unsigned int doubleArrayLength_aab = 0;

	char* ptr_cArray_aab = NULL;
	unsigned int charArrayLength_aab = 0;

	int i_aab;

	//code

	// ***** INTEGER ARRAY ******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The Integer Array : ");
	scanf("%u", &intArrayLength_aab);

	ptr_iArray_aab = (int *)malloc(INT_SIZE * intArrayLength_aab);
	if (ptr_iArray_aab == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY FAILED !!! EXISTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY SUCCEEDED !!!\n\n");
	}
	printf("\n\n");
	printf("Enter The %d Integer Elements To Fill Up The Integer Array : \n\n", intArrayLength_aab);
	for (i_aab = 0; i_aab < intArrayLength_aab; i_aab++)
		scanf("%d", (ptr_iArray_aab + i_aab));

	// ***** FLOAT ARRAY *****
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'float' Array : ");
	scanf("%u", &floatArrayLength_aab);
	ptr_fArray_aab = (float *)malloc(FLOAT_SIZE * floatArrayLength_aab);
	if (ptr_fArray_aab == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY FAILED !!! EXISTING NOE ....\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter The %d Floating-point Elements To Fill Up The 'float' Array : \n\n", floatArrayLength_aab);
	for (i_aab = 0; i_aab < floatArrayLength_aab; i_aab++)
		scanf("%f", (ptr_fArray_aab + i_aab));

	// ***** DOUBLE ARRAY *****
	printf("\n\n");
	printf("Enter The Number Of Elements You Wants In The 'double' Array :");
	scanf("%u", &doubleArrayLength_aab);

	ptr_dArray_aab = (double *)malloc(DOUBLE_SIZE * doubleArrayLength_aab);
	if (ptr_dArray_aab == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY FAILED !!! EXISTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY SUCCEEDED !!!\n\n");
	}
	printf("\n\n");
	printf("Enter The %d Double Elements To Fill Up The 'double'  Array : \n\n", doubleArrayLength_aab);
	for(i_aab = 0; i_aab < doubleArrayLength_aab; i_aab++)
	scanf("%lf", (ptr_dArray_aab + i_aab));

	//***** CHAR ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The Character Array : ");
	scanf("%u", &charArrayLength_aab);

	ptr_cArray_aab = (char *)malloc(CHAR_SIZE * charArrayLength_aab);
	if (ptr_cArray_aab == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY FAILED !!! EXISTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY SUCCEEDED !!!\n\n");

	}
	printf("\n\n");
	printf("Enter The %d Character Elements To Fill Up The Character Array : \n\n", charArrayLength_aab);
	for (i_aab = 0; i_aab < charArrayLength_aab; i_aab++)
	{
		*(ptr_cArray_aab + i_aab) = getch();
		printf("%c\n", *(ptr_cArray_aab + i_aab));
	}

	//********* DISPLAY OF ARRAY *******
	// ****** INTEGER ARRAY ******
	printf("\n\n");
	printf("The Integer Entered By You And Consisting Of %d Elements Is As Follows \n\n", intArrayLength_aab);
	for (i_aab = 0; i_aab < intArrayLength_aab; i_aab++)
		printf("%d \t\t At Address : %p\n", *(ptr_iArray_aab + i_aab), (ptr_iArray_aab + i_aab));

	// ****** FLOAT ARRAY ********
	printf("\n\n");
	printf("The Float Entered By You And Consisting Of %d Elements Is As Follows :\n\n", floatArrayLength_aab);
	for (i_aab = 0; i_aab < floatArrayLength_aab; i_aab++)
		printf("%f \t \t At Address : %p\n", *(ptr_fArray_aab + i_aab), (ptr_fArray_aab + i_aab));

	// ****** DOUBLE ARRAY ******
	printf("\n\n");
	printf("The Double Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", doubleArrayLength_aab);
	for (i_aab = 0; i_aab < doubleArrayLength_aab; i_aab++)
		printf("%lf \t\t At Address : %p\n", *(ptr_dArray_aab + i_aab), (ptr_dArray_aab + i_aab));

	// ****** CHARACTER ARRAY *****
	printf("\n\n");
	printf("The Character Array Entered By You Consisting Of %d Elements Is As Follows : \n\n", charArrayLength_aab);
	for (i_aab = 0; i_aab < charArrayLength_aab; i_aab++)
		printf("%c \t\t At Address : %p\n", *(ptr_cArray_aab + i_aab), (ptr_cArray_aab + i_aab));

		// ****** FREEING MEMORY OCCUPIED BY ARRAYS (IN REVERSE ORDER OF ALLOCATION ).....
	if (ptr_cArray_aab)
	{
		free(ptr_cArray_aab);
		 ptr_cArray_aab = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY CHARACTER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (ptr_dArray_aab)
	{
		(ptr_dArray_aab);
		ptr_dArray_aab = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY 'DOUBLE' ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (ptr_fArray_aab)
	{
		free(ptr_fArray_aab);
		ptr_fArray_aab = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY FLOATING POINT ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");

	}
	if (ptr_iArray_aab)
	{
		free(ptr_iArray_aab);
		ptr_iArray_aab = NULL;

		printf("\n\n");
		("MEMORY OCCUPIED BY INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	
	return(0);
}

