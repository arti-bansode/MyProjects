#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function => main() => Valid Return Type (int) and 2 Parameter (int argc, char *argv[])
int main(int argc, char *argv[])
{
	//variable declarations
	int i_aab;

	//code
	printf("\n\n");
	printf("Hello World !!!\n\n"); //Library Function
	printf("Number Of Command Line Arguments = %d\n\n", argc);

	printf("Command Line Arguments Passed To Program Are : \n\n");
	for (i_aab = 0; i_aab < argc; i_aab++)
	{
		printf("Command Line Argument Number %d = %s\n", (i_aab + 1), argv[i_aab]);

	}
	printf("\n\n");
	return(0);
}