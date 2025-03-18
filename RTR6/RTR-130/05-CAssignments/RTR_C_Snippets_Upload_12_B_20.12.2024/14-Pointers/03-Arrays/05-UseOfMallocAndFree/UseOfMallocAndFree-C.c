#include<stdio.h>
#include<stdlib.h> //contains prototypes of malloc() and free()

int main(void)
{
	//variable declarations
	int *ptr_iArray_aab = NULL; // IT IS GOOD DISCIPLINE TO INITIALIZE ANY POINTER WITH NULL ADDRESS TO PREVENT ANY GARBAGE VALUE GETTING INTO IT, THAT WAY, IT MAKES IT EASY TO CHECK FOR SUCCESS OR FAILURE OF MEMORY ALLOCATION LATER ON AFTER malloc()...
	unsigned int intArrayLength_aab = 0;
	int i_aab;

	//code
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In Your Integer Array : ");
	scanf("%d", &intArrayLength_aab);

	// ******* ALLOCATING AS MUCH MEMORY REQUIRED TO THE INTEGER AARRAY *****
	// ******* MEMORY REQUIRED FOR INTEGER ARRAY = SIZE IN BYTES OF ONE INTEGER * NUMBER OF INTEGERS TO BE STORED IN ARRAY *****
	// ****** TO ALLOCATE SAID AMOUNT OF MEMORY, FUNCTION malloc() WILL BE USED ******
	// ****** malloc() WILL ALLOCATE SAID AMOUNT OF MEMORY OF MEMORY AND WILL RETURN THE INITIAL / STARTING / BASE ADDRESS OF THE ALLOCATED MEMORY, WHICH MUST BE CAPTURED IN A POINTER VARIABLE ******
	// ****** USING THIS BASE ADDRESS, THE INTEGER ARRAY CAN BE ACCED AND USED *****

	ptr_iArray_aab = (int *)malloc(sizeof(int) * intArrayLength_aab);
	if (ptr_iArray_aab == NULL) // IF ptr_iArray_aab IS STILL NULL, EVEN AFTER CALL TO malloc(), IT malloc() HAS FAILED TO ALLOCATE MEMORY AND NO ADDRESS HAS BEEN RETURNED BY malloc() IN ptr_iArray_aab....
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS FAILED !!! EXITING NOW....\n\n");
		exit(0);
	}
	else //IF ptr_iArray_aab IS NOT NULL, IT MEANS IT MUST CONTAIN A VALID ADDRESS WHICH IS RETURNED BY malloc(), HENCE, malloc() HAS SUCCEEDED IN MEMORY ALLOCATION...
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS SUCCEEDED !!!\n\n");
		printf("MEMORY ADDRESSED FROM %p TO %p HAVE BEEN ALLOCATED TO INTEGER ARRAY !!!\n\n", 
			ptr_iArray_aab, (ptr_iArray_aab + (intArrayLength_aab - 1)));
	}
	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", intArrayLength_aab);
	for (i_aab = 0; i_aab < intArrayLength_aab; i_aab++);
	scanf("%d", (ptr_iArray_aab + 1));

	printf("\n\n");
	printf("The Integer Array Entered By You, Consisting Of %d Elements : \n\n", intArrayLength_aab);
	for (i_aab = 0; i_aab < intArrayLength_aab; i_aab++);
	{
		printf("ptr_iArray_aab[%d] = %d \t\t At Address &ptr_irray_aab[%d] : %p\n", 
			i_aab, ptr_iArray_aab[i_aab], i_aab, &ptr_iArray_aab[i_aab]);
	}

	printf("\n\n");
	for (i_aab = 0; i_aab < intArrayLength_aab; i_aab++);
	{
		printf("*(ptr_iArray_aab + %d) = %d \t\t At Adderess (ptr_iArray_aab + %d) : %p\n", 
			i_aab, *(ptr_iArray_aab + 1), i_aab, &ptr_iArray_aab[i_aab]);
	}

	printf("\n\n");
	for (i_aab = 0; i_aab < intArrayLength_aab; i_aab++)
	{
		printf("*(ptr_iArray_aab + %d) = %d \t\t At Address (ptr_iArray_aab + %d) : %p\n", 
			i_aab, *(ptr_iArray_aab + i_aab), i_aab, (ptr_iArray_aab + i_aab));
	}
	//****** CHECKING IF MEMORY IS STILL ALLOCATED BY CHECKING VALIDITY OF BASE ADDRESS 'ptr_iArray_aab' *****
	//****** IF ADDRESS IS VALID, THAT IS IF 'ptr_iArray_aab' EXISTS, THAT IS, IF IT IS NOT NULL, MEMORY IS STILL ALLOCATED *****
	//******** IN THT CASE, THE ALLOATED MEMORY MUST BE FREED *****
	//******** MEMORY IS ALLOCATED USING malloc() AND FREED USING fre() ****
	// ******* once memory is freed using FREE(), THE BASE ADDRESS MUST BE CLEANED, THAT IS, IT MUST BE RE-INITIALIZED TO 'NULL' BUT IT IS GOOD CODING DISCIPLINE ******
	if (ptr_iArray_aab)
	{
		free(ptr_iArray_aab);
		ptr_iArray_aab = NULL;

		printf("\n\n");
		printf("MEMORY ALLOCATED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}