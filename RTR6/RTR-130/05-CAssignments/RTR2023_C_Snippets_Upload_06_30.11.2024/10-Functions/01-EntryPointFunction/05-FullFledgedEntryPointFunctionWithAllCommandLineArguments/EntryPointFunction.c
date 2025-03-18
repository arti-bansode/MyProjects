#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function => main() => Valid Return Typr (int) and 3 Parameter argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	//variable declarations
	int i_aab;

	//code
	printf("\n\n");
	printf("Hello World !!!\n\n"); //Library Function

	printf("Number Of Command Line Arguments = %d\n\n", argc);
	printf("Command Line Arguments Passed To This Program Are :\n\n");
	for (i_aab = 0; i_aab < argc; i_aab++)
	{
		printf("Command Line Argument Number %d = %s\n", (i_aab + 1), argv[i_aab]);
	}
	printf("\n\n");

	printf("First 20 Environmental Varibles Passed To This Program Are : \n\n");
	for (i_aab = 0; i_aab < 20; i_aab++)
	{
		printf("Environment Variable Number %d = %s\n", (i_aab + 1), envp[i_aab]);
	}
	printf("\n\n");
	return(0);
}
