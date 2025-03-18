#include<stdio.h>

struct Employee
{
	char name_aab[100];
	int age_aab;
	float salary_aab;
	char sex_aab;
	char material_status_aab;
};

int main(void)
{
	//code
	printf("\n\n");
	printf("SIZE OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");
	printf("Size of (int)      : %zd \t\t\t Size Of Pointer To int (*int)	: %zd \t\t\t Size Of Pointer To Pointer To int(int**)	:%zd\n\n", sizeof(int), sizeof(int*), sizeof(int**));
	printf("Size of (float)      : %zd \t\t\t Size Of Pointer To float (*float)	: %zd \t\t\t Size Of Pointer To Pointer To float(float**)	:%zd\n\n", sizeof(float), sizeof(float*), sizeof(float**));
	printf("Size of (double)      : %zd \t\t\t Size Of Pointer To double (*double)	: %zd \t\t\t Size Of Pointer To Pointer To float(float**)	:%zd\n\n", sizeof(float), sizeof(float*), sizeof(float**));
	printf("Size of (char)      : %zd \t\t\t Size Of Pointer To char (*char)	: %zd \t\t\t Size Of Pointer To Pointer To char(char**)	:%zd\n\n", sizeof(char), sizeof(char*), sizeof(char**));
	printf("Size Of (Struct Employee) : %zd \t\t\t Size Of Pointer To Struct Employee (Struct Employee *) : %zd \t\t\t Size Of Pointer To Pointer To Struct Employee (Struct Employee**)		: %zd\n\n", sizeof(struct Employee), sizeof(struct Employee*), sizeof(struct Employee**));
	return(0);
}