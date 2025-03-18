#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray_aab[] = { 12, 24, 36, 48, 60,72, 84, 96, 108, 120 };
	float fArray_aab[] = { 9.8f, 8.7f, 7.6f, 6.5f, 5.4f };
	double dArray_aab[] = { 1.222222, 2.333333, 3.444444 };
	char cArray_aab[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' };

	//code
	printf("\n\n");
	printf("Integer Array Elements And The Addresses They Occupy Are As Follows : \n\n");
	printf("iArray_aab[0] = %d \t At Address : %p\n", *(iArray_aab + 0), (iArray_aab + 0));
	printf("iArray_aab[1] = %d \t At Address : %p\n", *(iArray_aab + 1), (iArray_aab + 1));
	printf("iArray_aab[2] = %d \t At Address : %p\n", *(iArray_aab + 2), (iArray_aab + 2));
	printf("iArray_aab[3] = %d \t At Address : %p\n", *(iArray_aab + 3), (iArray_aab + 3));
	printf("iArray_aab[4] = %d \t At Address : %p\n", *(iArray_aab + 4), (iArray_aab + 4));
	printf("iArray_aab[5] = %d \t At Address : %p\n", *(iArray_aab + 5), (iArray_aab + 5));
	printf("iArray_aab[6] = %d \t At Address : %p\n", *(iArray_aab + 6), (iArray_aab + 6));
	printf("iArray_aab[7] = %d \t At Address : %p\n", *(iArray_aab + 7), (iArray_aab + 7));
	printf("iArray_aab[8] = %d \t At Address : %p\n", *(iArray_aab + 8), (iArray_aab + 8));
	printf("iArray_aab[9] = %d \t At Address : %p\n", *(iArray_aab + 9), (iArray_aab + 9));

	printf("\n\n");
	printf("Float Array Elements And The Address They Occupy Are As Follow : \n\n");
	printf("fArray[0] = %f \t At Address : %p\n", *(fArray_aab + 0), (fArray_aab + 0));
	printf("fArray[1] = %f \t At Address : %p\n", *(fArray_aab + 1), (fArray_aab + 1));
	printf("fArray[2] = %f \t At Address : %p\n", *(fArray_aab + 2), (fArray_aab + 2));
	printf("fArray[3] = %f \t At Address : %p\n", *(fArray_aab + 3), (fArray_aab + 3));
	printf("fArray[4] = %f \t At Address : %p\n", *(fArray_aab + 4), (fArray_aab + 4));

	printf("\n\n");
	printf("Double Array Elements And The Addresses  They Occupy Are As Follows : \n\n");
	printf("dArray_aab[0] = %lf \t At Address : %p\n", *(dArray_aab + 0), (dArray_aab + 0));
	printf("dArray_aab[1] = %lf \t At Address : %p\n", *(dArray_aab + 1), (dArray_aab + 1));
	printf("dArray_aab[2] = %lf \t At Address : %p\n", *(dArray_aab + 2), (dArray_aab + 2));

	printf("\n\n");
	printf("Character Array Elements And The Address They Occupy Are As Follows : \n\n");
	printf("cArray_aab[0] = %c \t At Address : %p\n", *(cArray_aab + 0), (cArray_aab + 0));
	printf("cArray_aab[1] = %c \t At Address : %p\n", *(cArray_aab + 1), (cArray_aab + 1));
	printf("cArray_aab[2] = %c \t At Address : %p\n", *(cArray_aab + 2), (cArray_aab + 2));
	printf("cArray_aab[3] = %c \t At Address : %p\n", *(cArray_aab + 3), (cArray_aab + 3));
	printf("cArray_aab[4] = %c \t At Address : %p\n", *(cArray_aab + 4), (cArray_aab + 4));
	printf("cArray_aab[5] = %c \t At Address : %p\n", *(cArray_aab + 5), (cArray_aab + 5));
	printf("cArray_aab[6] = %c \t At Address : %p\n", *(cArray_aab + 6), (cArray_aab + 6));
	printf("cArray_aab[7] = %c \t At Address : %p\n", *(cArray_aab + 7), (cArray_aab + 7));
	printf("cArray_aab[8] = %c \t At Address : %p\n", *(cArray_aab + 8), (cArray_aab + 8));
	printf("cArray_aab[9] = %c \t At Address : %p\n", *(cArray_aab + 9), (cArray_aab + 9));
	printf("cArray_aab[10] = %c \t At Address : %p\n", *(cArray_aab + 10), (cArray_aab + 10));
	printf("cArray_aab[11] = %c \t At Address : %p\n", *(cArray_aab + 11), (cArray_aab + 11));
	printf("cArray_aab[12] = %c \t At Address : %p\n", *(cArray_aab + 12), (cArray_aab + 12));
	printf("cArray_aab[13] = %c \t At Address : %p\n", *(cArray_aab + 13), (cArray_aab + 13));

	return(0);
}