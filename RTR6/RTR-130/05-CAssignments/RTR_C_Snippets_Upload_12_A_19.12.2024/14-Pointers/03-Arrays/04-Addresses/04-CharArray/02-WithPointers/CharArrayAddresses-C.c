#include<stdio.h>

int main(void)
{
	//variable declarations
	char cArray_aab[10];
	char* ptr_cArray_aab = NULL;
	int i_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
		cArray_aab[i_aab] = (char)(i_aab + 65);

	//*** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, cArray_aab' IS THE BASE ADDRESS OF ARRAY cArray_aab[] OR 'cArray_aab' IS THE ADDRESS OF ELEMENTS iArray[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'cArray_aab[]' TO INTEGER POINTER 'ptr_cArray'

	ptr_cArray_aab = cArray_aab; //ptr_fArray_aab = &fArray_aab[0];

	printf("\n\n");
	printf("Elements Of The 'character' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("fArray_aab[%d] = %c\n", i_aab, *(ptr_cArray_aab + 1));

	printf("\n\n");
	printf("Elements Of The 'character' Array : \n\n");
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("cArray_aab[%d] = %c \t\t Address = %p\n", i_aab, *(ptr_cArray_aab + i_aab), (ptr_cArray_aab + i_aab));

	printf("\n\n");

	return(0);
}