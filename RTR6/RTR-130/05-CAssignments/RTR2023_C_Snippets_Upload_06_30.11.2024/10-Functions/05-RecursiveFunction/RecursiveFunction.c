//
//RecursiveFunction.c
//
//
// Created by ASTROMEDICOMP on 31/05/20.
//

#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//variable declarationss
	unsigned int num_aab;

	//function prototype
	void recursive(unsigned int);

	//code
	printf("\n\n");
	printf("Enter Any Number: \n\n");
	scanf("%u", &num_aab);

	printf("\n\n");
	printf("Output Of Recursive Function : \n\n");

	recursive(num_aab);

	printf("\n\n");
	return(0);
}

void recursive(unsigned int n_aab)
{
	//code
	printf("n_aab = %d\n", n_aab);

	if (n_aab > 0)
	{
		recursive(n_aab - 1);
	}
}