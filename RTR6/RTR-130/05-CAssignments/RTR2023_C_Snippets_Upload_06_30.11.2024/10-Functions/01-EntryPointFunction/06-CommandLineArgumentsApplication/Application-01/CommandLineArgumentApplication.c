#include<stdio.h> //'stdio.h' contains declaration of 'printf()'
#include<ctype.h> //'ctype.h' contains declaration of 'atoi'
#include<stdlib.h> //'stdlib' contains declaration of 'exit()'

int main(int argc, char* argv[], char* envp[])
{
	//variable declarations
	int i_aab;
	int num_aab;
	int sum_aab = 0;

	//code
	if (argc == 1)
	{
		printf("\n\n");
		printf("No Numbers Given For Addition !!! Existing Now...\n\n");
		printf("Usages : CommondLineArgumentsApplication <first number> <second number>.....\n\n");
		exit(0);
	}
	// *** THIS PROGRAMS ADDS COMMAND LINE ARGUMENTS GIVEN IN INTEGER FORM ONLY AND OUTPUTS THE SUM ***
	// *** DUE TO USE OF atoi(), ALL COMMAND LINE ARGUMENTS OF TYPES OTHER THAN 'int' ARE IGNORED ***
	printf("\n\n");
	printf("Sum Of ALL Integer Command Line Arguments Is : \n\n");
	for (i_aab = 1; i_aab < argc; i_aab++) //Loop starts from i_aab = 1 because, i_aab = 0 will result in 'argv[i]' = 'argv[0]' which is the name of the program itself i.e : 'CommandLineArgumentsApplication.exe'
	{
		num_aab = atoi(argv[i_aab]);
		sum_aab = sum_aab + num_aab;
	}
	printf("Sum_aab = %d\n\n", sum_aab);
	return(0);

}
