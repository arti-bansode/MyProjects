#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
	char name_aab[NAME_LENGTH];
	int age_aab;
	char sex_aab;
	float salary_aab;
	char marital_status_aab;

};

int main(void)
{
	//function prototype
	void MyGetString(char[], int);

	//variable declarations
	struct Employee* pEmployeeRecord_aab = NULL;
	int num_employees_aab, i_aab;

	//code
	printf("\n\n");
	printf("Enter Number Of Employee Whose Details You Want To Record : ");
	scanf("%d", &num_employees_aab);

	printf("\n\n");
	pEmployeeRecord_aab = (struct Employee*)malloc(sizeof(struct Employee) *num_employees_aab);
	if (pEmployeeRecord_aab == NULL)
	{
		printf("FAILED TO ALLOCATED MEMORY FOR %D EMPLOYEES !!! EXISTING NOW...\n\n", num_employees_aab);
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY FOR %D EMPLOYEES !!!\n\n", num_employees_aab);

	// ****** USER INPUT INITIALIZATIONS OF ARRAY OF 'struct Employee' *******
	for (i_aab = 0; i_aab < num_employees_aab; i_aab++)
	{
		printf("\n\n");
		printf("******* DATA  ENTRY FOR EMPLOYEE NUMBER %D *******\n", (i_aab + 1));

		printf("\n\n");
		printf("Enter Employee Name :");
		MyGetString(pEmployeeRecord_aab[i_aab].name_aab, NAME_LENGTH);

		printf("\n\n");
		printf("Enter Employee's Age (in years) :");
		scanf("%d", &pEmployeeRecord_aab[i_aab].age_aab);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		pEmployeeRecord_aab[i_aab].sex_aab = getch();
		printf("%c", pEmployeeRecord_aab[i_aab].sex_aab);
		pEmployeeRecord_aab[i_aab].sex_aab = toupper(pEmployeeRecord_aab[i_aab].sex_aab);

		printf("\n\n");
		printf("Enter Employee salary? (in India Rupees) : ");
		scanf("%f", &pEmployeeRecord_aab[i_aab].salary_aab);

		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		pEmployeeRecord_aab[i_aab].marital_status_aab = getch();
		printf("%c", pEmployeeRecord_aab[i_aab].marital_status_aab);
		pEmployeeRecord_aab[i_aab].marital_status_aab = toupper(pEmployeeRecord_aab[i_aab].marital_status_aab);
	}

	//*****DISPLAY *******
	printf("\n\n\n\n");
	printf("********* DISPLAYING EMPLOYEE RECORDS *******\n\n");
	for (i_aab = 0; i_aab < num_employees_aab; i_aab++)
	{
		printf("  ********** EMPLOYEE NUMBER %d ***********\n\n",(i_aab + 1));
		printf("Name    :%s\n", pEmployeeRecord_aab[i_aab].name_aab);
		printf("Age     :%d years\n", pEmployeeRecord_aab[i_aab].age_aab);

		if (pEmployeeRecord_aab[i_aab].sex_aab == 'M')
			printf("Sex_aab : Male\n");
		else if (pEmployeeRecord_aab[i_aab].sex_aab == 'F')
			printf("Sex      : Female\n");
		else
			printf("Sex_aab   : Invalid Data Entered\n");

		printf("Salary_aab     : Rs. %f\n", pEmployeeRecord_aab[i_aab].salary_aab);

		if (pEmployeeRecord_aab[i_aab].marital_status_aab == 'Y')
			printf("Marital Status : Married\n");
		else if (pEmployeeRecord_aab[i_aab].marital_status_aab == 'N')
			printf("Marital Status : Invalid Data Entered\n");

		printf("\n\n");

	}
	if (pEmployeeRecord_aab)
	{
		free(pEmployeeRecord_aab);
		pEmployeeRecord_aab = NULL;
		printf("MEMORY ALLOCATED TO %D EMPLOYEES HAS BEEN SUCCESSFULLY FREED !!!\n\n", num_employees_aab);
	}
	return(0);

}
// **** SIMPLE RUDIMENTARY IMPLIMENTATION OF gets_s() ****
// ****IMPLIMENTATION DUE TO DIFFERANT BEHAVIOUR OF gets_s() / fgets() /fscanf() ON DIFFERANT PLATFORMS *****
// **** backspace / character deletion and array key cursor movement not iplimented ****

void MyGetString(char str[], int str_size)
{
	// variable declarations 
	int i_aab;
	char ch_aab = '\0';

	//code
	i_aab = 0;
	do
	{
		ch_aab = getch();
		str[i_aab] = ch_aab;
		printf("%c", str[i_aab]);
		i_aab++;
	} while ((ch_aab != '\r') && (i_aab < str_size));
	if (i_aab == str_size)
		str[i_aab - 1] = '\0';
	else
		str[i_aab] = '\0';
}

