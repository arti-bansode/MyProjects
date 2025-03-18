#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void MyAlloc(int** ptr, unsigned int numberOfElements);

	//variable declarations
	int* piArray_aab = NULL;
	unsigned int num_elements_aab;
	int i_aab;

	//code
	printf("\n\n");
	printf("How Many Elements You Want In Integer Array ?\n\n");
	scanf("%u", &num_elements_aab);

	printf("\n\n");
	MyAlloc(&piArray_aab, num_elements_aab);

	printf("Enter %u Elements To Fill Up Your Integer Array : \n\n", num_elements_aab);
	for (i_aab = 0; i_aab < num_elements_aab; i_aab++)
		scanf("%d", &piArray_aab[i_aab]);

	printf("\n\n");
	printf("The %u Elements Entered By You In The Integer Array : \n\n", num_elements_aab);
	for (i_aab = 0; i_aab < num_elements_aab; i_aab++)
		printf("%u\n", piArray_aab[i_aab++]);

	printf("\n\n");
	if (piArray_aab)
	{
		free(piArray_aab);
		piArray_aab = NULL;
		printf("Memory Allocated Has Now Been Successfully Freed !!!\n\n");
	}
	return(0);
}

void MyAlloc(int** ptr, unsigned int numberOfElements)
{
	//code
	*ptr = (int*)malloc(numberOfElements * sizeof(int));
	if (*ptr == NULL)
	{
		printf("Could Not AAllocate Memory !!! Existing Now ...\n\n");
		exit(0);
	}
	printf("MyAlloc() Has Successfully Allocated %zu Bytes For Integer Array !!!\n\n", (numberOfElements * sizeof(int)));
}
