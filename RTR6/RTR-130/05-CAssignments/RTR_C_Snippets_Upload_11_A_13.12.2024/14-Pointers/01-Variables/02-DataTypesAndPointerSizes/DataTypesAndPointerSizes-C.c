#include<stdio.h>

struct	Employee
{
	char name_aab[100];
	int age_aab;
	float salary_aab;
	char sex_aab;
	char matrrial_status_aab;
};

int main(void)
{
	//code

	printf("\n\n");
	printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");
	printf("Size of (int)     : %zd \t\t\t Size of pointer to int (int*)  : %zd\n\n", sizeof(int), sizeof(int*));
	printf("Size of (float)   :%zd  \t\t\t Size of pointer to float (float*) : %zd\n\n", sizeof(float), sizeof(float*));
	printf("Size of (double)   :%zd \t\t\t Size of pointer to double (double*) : %zd\n\n", sizeof(double), sizeof(double*));
	printf("Size of (char)   :%zd \t\t\t Size of pointer to char (char*) : %zd\n\n", sizeof(char), sizeof(char*));
	printf("Size of (struct Emloyee*) : %zd \t\t\t size of pointer to struct  employee (struct Employee*) :%zd\n\n ", sizeof(struct Employee), sizeof(struct Employee*));

	return(0);
}