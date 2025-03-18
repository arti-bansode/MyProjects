#include<stdio.h>
#include<ctype.h>

#define NUM_EMPLOYEES 5 //simply change this constant value to have as many number of employee records as you please ......

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
	char name[NAME_LENGTH];
	int age;
	char sex;
	float salary;
	char marital_status;

};

int main(void)
{
	//function prototype
	void MyGetString(char[], int);

	//variable declaration
	struct Employee EmployeeRecord[NUM_EMPLOYEES]; //An array of <NUM_EMPLOYEES> struct - each being type 'struct Employee'
	int i_aab;

	//code
	// ******** USER INPUT INITIALIZATION OF ARRAY OF 'struct Employee' ****
	for (i_aab = 0; i_aab < NUM_EMPLOYEES; i_aab++)
	{
		printf("\n\n\n\n");
		printf(" ******** DATA ENTRY FOR EMPLOYEE NUMBER %d **********", (i_aab + 1));
		printf("\n\n");
		printf("Enter Employee Name : ");
		MyGetString(EmployeeRecord[i_aab].name, NAME_LENGTH);

		printf("\n\n\n");
		printf("Enter Employee's Age (in years) :");
		scanf("%d", &EmployeeRecord[i_aab].age);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		EmployeeRecord[i_aab].sex = getch();
		printf("%c", EmployeeRecord[i_aab].sex);
		EmployeeRecord[i_aab].sex = toupper(EmployeeRecord[i_aab].sex);

		printf("\n\n\n\n");
		printf("Enter Employee's Salary (in India Rupees) : ");
		scanf("%f", &EmployeeRecord[i_aab].salary);

		printf("\n\n");
		printf("Is The Employee Married (Y/y For Yes, N/n For No) : ");
		EmployeeRecord[i_aab].marital_status = getch();
		printf("%c", EmployeeRecord[i_aab].marital_status);
		EmployeeRecord[i_aab].marital_status = toupper(EmployeeRecord[i_aab].marital_status);

	}
	
	// ***DISPLAY ****
	printf("\n\n\n\n");
	printf(" ********** DISPLAYING EMPLOYEE RECORDS ********\n\n");
	for (i_aab = 0; i_aab < NUM_EMPLOYEES; i_aab++)
	{
		printf("******** EMPLOYEE NUMBER %D *********\n\n", (i_aab + 1));
		printf("Name		:%s\n", EmployeeRecord[i_aab].name);
		printf("Age			:%d years \n", EmployeeRecord[i_aab].age);

		if (EmployeeRecord[i_aab].sex == 'M')
			printf("Sex			:Male\n");
		else if (EmployeeRecord[i_aab].sex == 'F')
			printf("Sex			:Female\n");
		else
			printf("Sex			:Invalid Data Entered\n");

		printf("Salary			: Rs. %f\n", EmployeeRecord[i_aab].salary);

		if (EmployeeRecord[i_aab].marital_status == 'Y')
			printf("Marital status : Married\n");
		else if (EmployeeRecord[i_aab].marital_status == 'N')
			printf("Marital status : Unmarried\n");
		else
			printf("Marital Status : Invalid Data Entered\n");

		printf("\n\n");
	}
	return(0);
}
//****** SIMPLE RUDIMENTRY IMPLIMENTATION OF gets_s() ****
// ****** IMPLIMENTED DUE TO DIFFERANT BEHAVIOUR OF gets_s() / fgets() / fscanf() ON DIFFERANT PLATFORMS *****
// ****

void MyGetString(char str[], int str_size)
{
	//variable declaration
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

