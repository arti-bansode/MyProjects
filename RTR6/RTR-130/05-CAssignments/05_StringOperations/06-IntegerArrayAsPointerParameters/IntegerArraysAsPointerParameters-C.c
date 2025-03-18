#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//function declarations
	void MultiplyArrayElementsByNumber(int*, int, int);

	//variable declaration
	int* iArray_aab = NULL;
	int num_elements_aab;
	int i_aab, num_aab;

	//code
	printf("\n\n");
	printf("Enter How Many Elements You Want In The Integer Array : ");
	scanf("%d", &num_elements_aab);

	iArray_aab = (int*)malloc(num_elements_aab * sizeof(int));
	if (iArray_aab == NULL)
	{
		printf("MEMORY ALLOCATION TO 'iArray' HAS FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", num_elements_aab);
	for (i_aab = 0; i_aab < num_elements_aab; i_aab++)
		scanf("%d", &iArray_aab[i_aab]);

	// ***** ONE *****
	printf("\n\n");
	printf("Array Before Passing To Function MultiplyArrayElementsByNumber() : \n\n");
	for (i_aab = 0; i_aab < num_elements_aab; i_aab++)
		printf("iArray[%d] = %d\n", i_aab, iArray_aab[i_aab]);

	printf("\n\n");
	printf("Enter The Number By Which You Want To Multiply Each Array Element : ");
	scanf("%d", &num_aab);

	MultiplyArrayElementsByNumber(iArray_aab, num_elements_aab, num_aab);

	printf("\n\n");
	printf("Array Returnnedd By Function MultiplyArrayElementsByNumber() : \n\n");
	for (i_aab = 0; i_aab < num_elements_aab; i_aab++)
		printf("iArray[%d] = %d\n", i_aab, iArray_aab[i_aab]);
	
	if (iArray_aab)
	{ 
		free(iArray_aab);
		iArray_aab = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO 'iArray' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return (0);
}

void MultiplyArrayElementsByNumber(int* arr, int iNumElements, int n)
{
	//variable declarations
	int i_aab;

	//code
	for (i_aab = 0; i_aab < iNumElements; i_aab++)
		arr[i_aab] = arr[i_aab] * n;
}