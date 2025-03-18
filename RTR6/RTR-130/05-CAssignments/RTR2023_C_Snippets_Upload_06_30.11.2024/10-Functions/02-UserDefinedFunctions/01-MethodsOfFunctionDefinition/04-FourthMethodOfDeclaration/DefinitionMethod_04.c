#include<stdio.h> //'stdio.h' contains ddeclaration of 'printf()'

//Entry-Point Function => main => Valid Return Type (int) and 3 Parameter (int argc, che *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
	//function prototype / declaration /signature
	int MyAddition(int, int);

	//variable declarations : local variable to main()
	int a_aab, b_aab, result_aab;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Integer Valiue For 'B' : ");
	scanf("%d", &b_aab);

	result_aab = MyAddition(a_aab, b_aab); //function call
	printf("\n\n");
	printf("sum of %d And %d = %d\n\n", a_aab, b_aab, result_aab);

	return(0);

}
// ******USER DEFINED FUNCTION : METHOD OF DEFINITION 4 *******
// ****** VALID (int) RETURN VALUE, VALID PARAMETER (int, int)

int MyAddition(int a_aab, int b_aab) //function definition
{
	//variable declaration : local variable to MyAddition()
	int sum_aab;

	//code
	sum_aab = a_aab + b_aab;
	return (sum_aab);
}