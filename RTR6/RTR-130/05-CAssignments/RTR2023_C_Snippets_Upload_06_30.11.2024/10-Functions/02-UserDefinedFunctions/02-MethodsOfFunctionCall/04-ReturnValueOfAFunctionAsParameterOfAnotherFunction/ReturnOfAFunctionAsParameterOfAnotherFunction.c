#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//function prototypes or declarations
	int MyAddition(int, int);

	//variable declartions
	int r_aab;
	int num_aab_01, num_aab_02;
	int num_aab_03, num_aab_04;

	//code
	num_aab_01 = 10;
	num_aab_02 = 20;
	num_aab_03 = 30;
	num_aab_04 = 40; 

	r_aab = MyAddition(MyAddition(num_aab_01, num_aab_02), MyAddition(num_aab_03, num_aab_04));
		//return value of MyAddition() is sent as parameter to  another call to MyAddition()

	printf("\n\n");
	printf("%d + %d + %d + %d = %d\n", num_aab_01, num_aab_02, num_aab_03, num_aab_04, r_aab);
	printf("\n\n");

	return(0);
}
// *** Function Definition Of MyAddition() ****
int MyAddition(int a_aab, int b_aab) //function definition
{
	//variable declaration
	int sum_aab;

	//code
	sum_aab = a_aab + b_aab;
	return(sum_aab);
}