#include<stdio.h>
int main(void)
{
	//variable declarations
	float f_aab;
	float f_aab_num = 1.7f; //simply change this value ONLY to get differant outputs....

	//code
	printf("\n\n");

	printf("Printing Number %f to %f : \n\n", f_aab_num, (f_aab_num * 10.0f));

	f_aab = f_aab_num;
	while (f_aab <= (f_aab_num * 10.0f))
	{
		printf("\t%f\n", f_aab);
		f_aab = f_aab + f_aab_num;
	}
	printf("\n\n");
	return(0);
}