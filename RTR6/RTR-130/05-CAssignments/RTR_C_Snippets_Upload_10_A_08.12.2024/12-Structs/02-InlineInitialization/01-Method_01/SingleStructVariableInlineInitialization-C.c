#include<stdio.h>

//DEFINING STRUCT 
struct MyData
{
	int i_aab;
	float f_aab;
	double d_aab;
	char c_aab;
}data = { 30, 4.5f, 11.451995,'A' }; //Inline Initialization Of Struct Variable 'data' Of Type 'Struct MyData'

int main(void)
{
	//code
	//Displaying Value Of The Data Member Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE :\n\n");
	printf("i_aab = %d\n", data.i_aab);
	printf("f_aab = %f\n", data.f_aab);
	printf("d_aab = %lf\n", data.d_aab);
	printf("c_aab = %c\n\n", data.c_aab);

	return(0);
}