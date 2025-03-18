#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//function prototype OR declarations
	int MyAddition(int, int);

	//variable declarations
	int r_aab;
	int num_aab_01, num_aab_02;

	//code
	num_aab_01 = 10;
	num_aab_02 = 20;

	printf("\n\n");
	printf("%d + %d = %d\n", num_aab_01, num_aab_02, MyAddition(num_aab_01, num_aab_02));
	printf("\n\n");

	return(0);
}

//**** Function Definition Of MyAddition() *****
int MyAddition(int a_aab, int b_aab) //function definition
{
	//function prototype
	int add(int, int);

	// code 
	return(Add(a_aab, b_aab)); //return value of function Add() function MyAddition()
}

int Add(int x_aab, int y_aab)
{
	//code
	return(x_aab + y_aab);
}