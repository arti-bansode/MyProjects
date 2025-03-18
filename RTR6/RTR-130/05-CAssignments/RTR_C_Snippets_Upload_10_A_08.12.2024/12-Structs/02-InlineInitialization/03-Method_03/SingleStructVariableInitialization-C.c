#include<stdio.h>

int main(void)
{
	//DEFINING STRUCT
	struct MyData
	{
		int i_aab;
		float f_aab;
		double d_aab;
		char c_aab;
	}data = { 5, 9.1f, 3.78623, 'N' };

	//Displaying Value Of The Data Member Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i_aab = %d\n", data.i_aab);
	printf("f_aab = %f\n", data.f_aab);
	printf("d_aab = %lf\n", data.d_aab);
	printf("c_aab = %c\n\n", data.c_aab);
	return(0);
}