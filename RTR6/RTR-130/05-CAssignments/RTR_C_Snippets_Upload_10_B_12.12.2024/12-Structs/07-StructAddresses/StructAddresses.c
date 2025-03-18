#include <stdio.h>

struct MyData
{
	int i_aab;
	float f_aab;
	double d_aab;
	char c_aab;
};

int main(void)
{
	//variable declaration
	struct MyData data;

	//code
	//Assigning Data Values To The Data Members of 'struct MyData'
	data.i_aab = 30;
	data.f_aab = 11.45f;
	data.d_aab = 1.2995;
	data.c_aab = 'A';

	//Displaying values Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i_aab);
	printf("f = %f\n", data.f_aab);
	printf("d = %lf\n", data.d_aab);
	printf("c = %c\n\n", data.c_aab);

	printf("\n\n");
	printf("ADDRESSES OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("'i' Occupies Addresses From %p\n", &data.i_aab);
	printf("'f' Occupies Addresses From %p\n", &data.f_aab);
	printf("'d' Occupies Addresses From %p\n", &data.d_aab);
	printf("'c' Occupies Addresses %p\n\n", &data.c_aab);

	printf("Starting Address Of 'struct MyData' variable 'data' = %p\n\n", &data);

	return(0);
}