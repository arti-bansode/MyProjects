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

	//code

	//***** iArray[] ****
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display Of Element Of Array 'iArray[]' : \n\n");
	printf("iArray_aab[0] (1st Element) = %d\n", iArray_aab[0]);
	printf("iArray_aab[1] (2st Element) = %d\n", iArray_aab[1]);
	printf("iArray_aab[2] (3rd Element) = %d\n", iArray_aab[2]);
	printf("iArray_aab[3] (4th Element) = %d\n", iArray_aab[3]);
	printf("iArray_aab[4] (5th Element) = %d\n", iArray_aab[4]);
	printf("iArray_aab[5] (6th Element) = %d\n", iArray_aab[5]);
	printf("iArray_aab[6] (7th Element) = %d\n", iArray_aab[6]);
	printf("iArray_aab[7] (8th Element) = %d\n", iArray_aab[7]);
	printf("iArray_aab[8] (9th Element) = %d\n", iArray_aab[8]);
	printf("iArray_aab[9] (10th Element) = %d\n\n", iArray_aab[9]);

	int_size_aab = sizeof(int);
	iArray_size_aab = sizeof(iArray_aab);
	iArray_num_elements_aab = iArray_size_aab / int_size_aab;
	printf("Size Of Data type 'int' = %d bytes\n", int_size_aab);
	printf("Number Of Elements In 'int' Array 'iArray_aab[]' = %d Elements\n", iArray_num_elements_aab);
	printf("Size Of Array 'iArray_aab[]' (%d Elements * %d Bytes) = %d Bytes\n\n", iArray_num_elements_aab, int_size_aab, iArray_size_aab);

	// ****** fArray ******

	printf("\n\n");
	printf("In-line Initialization And Peace-meal Display Of Elements Of Array 'fArray[]' : \n\n");
	printf("fArray_aab[0] (1st Element) = %f\n", fArray_aab[0]);
	printf("fArray_aab[0] (1st Element) = %f\n", fArray_aab[0]);
	printf("fArray_aab[1] (2st Element) = %f\n", fArray_aab[1]);
	printf("fArray_aab[2] (3rd Element) = %f\n", fArray_aab[2]);
	printf("fArray_aab[3] (4th Element) = %f\n", fArray_aab[3]);
	printf("fArray_aab[4] (5th Element) = %f\n", fArray_aab[4]);
	printf("fArray_aab[5] (6th Element) = %f\n", fArray_aab[5]);
	printf("fArray_aab[6] (7th Element) = %f\n", fArray_aab[6]);
	printf("fArray_aab[7] (8th Element) = %f\n", fArray_aab[7]);
	printf("fArray_aab[8] (9th Element) = %f\n", fArray_aab[8]);
	printf("fArray_aab[9] (10th Element) = %f\n\n", fArray_aab[9]);

	float_size_aab = sizeof(float);
	fArray_size_aab = sizeof(fArray_aab);
	fArray_num_elements_aab = fArray_size_aab / float_size_aab;
	printf("Size Of Data Type 'float' = %d bytes\n", float_size_aab);
	printf("Number Of Element In 'float' Array 'fArray_aab[]' = %d Elements\n", fArray_num_elements_aab);
	printf("Size Of Array 'fArray_aab[]' (%d Elements * %d Bytes) = %d Bytes\n\n", fArray_num_elements_aab, float_size_aab, fArray_size_aab);

	// *** cArray[] ****
	printf("\n\n");
	printf("In-line Initialization And Pease-meal Display Of Elements Of Array 'cArray_aab[] : \n\n");

	printf("cArray_aab[0] (1st Element) = %c\n", cArray_aab[0]);
	printf("cArray_aab[1] (2st Element) = %c\n", cArray_aab[1]);
	printf("cArray_aab[2] (3rd Element) = %c\n", cArray_aab[2]);
	printf("cArray_aab[3] (4th Element) = %c\n", cArray_aab[3]);
	printf("cArray_aab[4] (5th Element) = %c\n", cArray_aab[4]);
	printf("cArray_aab[5] (6th Element) = %c\n", cArray_aab[5]);
	printf("cArray_aab[6] (7th Element) = %c\n", cArray_aab[6]);
	printf("cArray_aab[7] (8th Element) = %c\n", cArray_aab[7]);
	printf("cArray_aab[8] (9th Element) = %c\n", cArray_aab[8]);
	printf("cArray_aab[9] (10th Element) = %c\n", cArray_aab[9]);
	printf("cArray_aab[7] (11th Element) = %c\n", cArray_aab[7]);
	printf("cArray_aab[8] (12th Element) = %c\n", cArray_aab[8]);
	printf("cArray_aab[9] (13th Element) = %c\n\n", cArray_aab[9]);

	char_size_aab = sizeof(char);
	cArray_size_aab = sizeof(cArray_aab);
	cArray_num_elements_aab = cArray_size_aab / char_size_aab;
	printf("Size Of Data type 'char' char_size = %d byte\n", char_size_aab);;
	printf("Number Of Elements In 'char' Array 'cArray_aab[]' = %d Elements\n", cArray_num_elements_aab);
	printf("Size Of Array 'cArray_aab[]' (%d Element * %d Bytes) = %d bytes\n\n", cArray_num_elements_aab, char_size_aab, cArray_size_aab);

	return(0);
}