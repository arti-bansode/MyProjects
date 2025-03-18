#include<stdio.h> //'stdio.h' contains declaration of 'printf()'
#include<stdlib.h> //'stdlib' contains declaration of 'exit()'

int main(int argc, char* argv[], char* envp[])
{
	//variable declarations
	int i_aab;

	//code
	if (argc != 4) //Program name + First name + Middle name + surname =4 Command Line Arguments Are Required
	{
		printf("\n\n");
		printf("Invalid Usages !!! Existing Now ....\n\n");
		printf("Usages : CommandLineArgumentsApplication <first name> <middle name> <surname> \n\n");
		exit(0);
	}
	// *** THIS PROGRAM PRINTS YOUR FULL NAME AS ENTERED IN THE COMMAND LINE ARGUMENTS ***
	printf("\n\n");
	printf("Your Full Name Is : ");
	for (i_aab = 1; i_aab < argc; i_aab++) //Loop starts from i_aab = 1 because, i_aab = 0 will result in 'argv[i_aab]' = 'argv[0]' which is the name of the program itself i.e : 'CommandLineArgumentsApplication.exe'
	{
		printf("%s", argv[i_aab]);
	}
	printf("\n\n");
	return(0);
}