#include<stdio.h>
int main(void)
{
	//variable declarations
	float f_aab;
	float f_aab_num = 1.7f; //Simply Change this value Only to get differant outputs..

	//code
	printf("\n\n");

	printf("Printing Number %f to %f : \n\n", f_aab_num, (f_aab_num * 10.0f));

	for (f_aab = f_aab_num; f_aab <= (f_aab_num * 10.0f); f_aab =f_aab + f_aab_num)
	{
		printf("\t%f\n", f_aab);
	}

	printf("\n\n");

	return(0);
}