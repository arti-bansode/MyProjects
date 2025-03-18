#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//***** USER DEFINED FUNCTION : METHOD OF CALLING FUNCTION 1 *****
//***** CALLING ALL FUNCTION IN main() DIRCTLY *****

//Entry-Point Function => main() => Valid Return Type (int) and 3 Parameter(int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	//function prototype OR declarations
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int, int);
	int MyDivision(int, int);

	//variable declarations
	int result_aab_subtraction;
	int a_aab_multiplication, b_aab_multiplication;
	int a_aab_division, b_aab_division, result_aab_division;
     
	//code

	//***ADDITION ****
	MyAddition(); //function call

	// *** SUBSTRACTION ***
	result_aab_subtraction = MySubtraction();//function call
	printf("\n\n");
	printf("Substraction Yield Result = %d\n", result_aab_subtraction);

	// *** MULTIPLICATION ***
	printf("\n\n"); \
	printf("Enter Integer Value For 'A' For Multiplication : ");
	scanf("%d", &a_aab_multiplication);

	printf("\n\n");
	printf("Enter Integer Value For 'B' For Multiolication : ");
	scanf("%d", &b_aab_multiplication);

	MyMultiplication(a_aab_multiplication, b_aab_multiplication); //function call

	// *** DIVISION ***
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Division : ");
	scanf("%d", &a_aab_division);

	printf("\n\n");
	printf("Enter Integer Value For 'B' For Division : ");
	scanf("%d", &b_aab_division);

	result_aab_division = MyDivision(a_aab_division, b_aab_division);//finction call
	printf("\n\n");
	printf("Division Of %d and %d Gives = %d\n", a_aab_division, b_aab_division, result_aab_division);
	printf("\n\n");
	return(0);
}

//*** Function Definition Of MyAddition() ****
void MyAddition(void) //function definition
{
	//variable declaration : local variable to MyAddition()
	int a_aab, b_aab, sum_aab;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Addition : ");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b_aab);

	sum_aab = a_aab + b_aab;

	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a_aab, b_aab, sum_aab);
}

//*** Function Definition Of MySubtraction()****
int MySubtraction(void) //function definition
{
	//variable declaration : local variable to MySubtraction()
	int a_aab, b_aab, subtraction;

    //code
    printf("\n\n"); 
    printf("Enter Integer Value For 'A' For Subtraction : ");
    scanf("%d", &a_aab);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Subtraction : ");
    scanf("%d", &b_aab);

    subtraction = a_aab - b_aab;
    return(subtraction);
}

//*** Function Definition Of MyMultiplication() ****
void MyMultiplication(int a_aab, int b_aab) //function definition
{
	//variable declaration : local variable to MyMultiplication()
 
	int multiplication;

	//code
	multiplication = a_aab * b_aab;

	printf("\n\n");
	printf("Multiplication Of %d And %d = %d\n\n", a_aab, b_aab, multiplication);
}

// *** Function Definition Of MyDivision() *****
int MyDivision(int a_aab, int b_aab) //function definition
{
	//variable declaration : local variable to MyDivision()
	int division_quotient;

	//code
	if (a_aab > b_aab)
		division_quotient = a_aab / b_aab;
	else
		division_quotient = b_aab / a_aab;

	return(division_quotient);
}