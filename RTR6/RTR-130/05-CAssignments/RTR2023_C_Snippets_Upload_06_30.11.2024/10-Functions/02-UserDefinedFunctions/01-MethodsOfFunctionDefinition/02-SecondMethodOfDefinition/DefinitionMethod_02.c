#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function => main() => Valid Return Typr (int) and 3 Parameter (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration / signature
	int Myddition(void);

	//variable declarations : local variable to main()
	int result_aab;

	//code
	result_aab = MyAddition(); //function call

	printf("\n\n");
	printf("Sum_aab = %d\n\n", result_aab);
	return(0);
}
// *****USER DEFINED FUNCTION : METHOD OF DEFINITION 2 ******
// ***** VALID (int) RETURN VALUE, NO PARAMETERS ****

int MyAddition(void) //function definition
{
	// variable declarations : local variable to MyAddition()
	int a_aab, b_aab, Sum_aab;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b_aab);

	Sum_aab = a_aab + b_aab;
	return(Sum_aab);

}
