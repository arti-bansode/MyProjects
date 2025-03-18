#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function => Valid Return Type (int) and 3 Parameter (int arc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration / signature
	void MyAddition(int, int);

	//variable declaration : local variable to main()
	int a_aab, b_aab;

	//code 
	printf("\n\n");
	printf("Enter Integer Value For 'A' :");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b_aab);

	MyAddition(a_aab, b_aab); //function call

	return(0);
}

//***** USER DEFINED FUNCTION : METHOD OF DEFINITION 3 ******
//***** NO RETURN VALUE, VALID PARAMETERS (int, int)

void MyAddition(int a_aab, int b_aab) //function definition
{
	//variable declaration : local variable to MyAddtion()
	int sum_aab;

	//code
	sum_aab = a_aab + b_aab;
	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a_aab, b_aab, sum_aab);

}
