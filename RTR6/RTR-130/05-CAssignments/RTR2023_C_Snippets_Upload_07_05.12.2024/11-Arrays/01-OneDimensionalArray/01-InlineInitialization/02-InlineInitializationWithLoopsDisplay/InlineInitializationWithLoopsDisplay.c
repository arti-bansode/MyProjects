#include<stdio.h>
int main(void)

{
	//variable declaration
	int iArray_aab[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
	int int_size_aab;
	int iArray_size_aab;
	int iArray_num_elements_aab;

	float fArray_aab[] = { 1.2f, 2.3f, 3.4f, 5.6f, 6.7f, 7.8f, 8.9f };
	int float_size_aab;
	int fArray_size_aab;
	int fArray_num_elements_aab;

	char cArray_aab[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
	int char_size_aab;
	int cArray_size_aab;
	int cArray_num_elements_aab;

	int i;
	float f;
	char c;

	//code

	//***** iArray[] ****
	printf("\n\n");
	printf("In-line Initialization And loop (for) Display Of Element Of Array 'iArray_aab[]' : \n\n");

	int_size_aab = sizeof(int);
	iArray_size_aab = sizeof(iArray_aab);
	iArray_num_elements_aab = iArray_size_aab / int_size_aab;

	for (i = 0; i < iArray_num_elements_aab; i++)
	{
		printf("iArray_aab[%d] (element %d) = %d\n", i, (i + 1), iArray_aab[i]);
	}

	printf("\n\n");
	printf("Size Of Data type 'int' = %d bytes\n", int_size_aab);
	printf("Number Of Elements In 'int' Array 'iArray[]' = %d element\n", iArray_num_elements_aab);
	printf("Size Of Array 'iArray_aab[]' (%d Elements * %d Byte) = %d Bytes\n\n", iArray_num_elements_aab, int_size_aab, iArray_size_aab);


		//***** fArray[] ****
	printf("\n\n");
	printf("In-line Initialization And loop (for) Display Of Element Of Array 'fArray_aab[]' : \n\n");

	float_size_aab = sizeof(float);
	fArray_size_aab = sizeof(fArray_aab);
	fArray_num_elements_aab = fArray_size_aab / float_size_aab;

	for (i = 0; i < fArray_num_elements_aab; i++)
	{
	     printf("fArray_aab[%d] (element %d) = %f\n", i, (i + 1), fArray_aab[i]);
	}

	printf("\n\n");
	printf("Size Of Data type 'float' = %d bytes\n", float_size_aab);
	printf("Number Of Elements In 'float' Array 'fArray[]' = %d element\n", fArray_num_elements_aab);
	printf("Size Of Array 'fArray[]' (%d Elements * %d Byte) = %d Bytes\n\n", fArray_num_elements_aab, float_size_aab, fArray_size_aab);


		//***** cArray[] ****
	printf("\n\n");
	printf("In-line Initialization And loop (for) Display Of Element Of Array 'cArray[]' : \n\n");

	char_size_aab = sizeof(char);
	cArray_size_aab = sizeof(cArray_aab);
	cArray_num_elements_aab = cArray_size_aab / char_size_aab;

	for (c = 0; c < cArray_num_elements_aab; c++)
	{
		printf("cArray_aab[%d] (element %d) = %c\n", i, (i + 1), cArray_aab[c]);
	}

	printf("\n\n");
	printf("Size Of Data type 'char' = %d bytes\n", char_size_aab);
	printf("Number Of Elements In 'char' Array 'cArray[]' = %d element\n", cArray_num_elements_aab);
	printf("Size Of Array 'cArray[]' (%d Elements * %d Byte) = %d Bytes\n\n", cArray_num_elements_aab, char_size_aab, cArray_size_aab);
	
}
