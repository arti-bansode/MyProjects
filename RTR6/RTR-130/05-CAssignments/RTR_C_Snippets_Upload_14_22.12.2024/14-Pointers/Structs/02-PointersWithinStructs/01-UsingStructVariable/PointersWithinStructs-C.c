#include<stdio.h>

// DEFINING STRUCT 
struct MyData
{
	int *ptr_i_aab;
	int i_aab;

	float *ptr_f_aab;
	float f_aab;

	double *ptr_d_aab;
	double d_aab;

};

int main(void)
{
	//variable declarations
	struct MyData data;

	//code
	data.i_aab = 9;
	data.ptr_i_aab = &data.i_aab;

	data.f_aab = 11.45f;
	data.ptr_f_aab = &data.f_aab;

	data.d_aab = 30.121995;
	data.ptr_d_aab = &data.d_aab;

	printf("\n\n");
	printf("i_aab = %d\n", *(data.ptr_i_aab));
	printf("Address Of 'i_aab' = %p\n", data.ptr_i_aab);

	printf("\n\n");
	printf("f_aab = %f\n", *(data.ptr_f_aab));
	printf("Address Of 'f_aab' = %p\n", data.ptr_f_aab);

	printf("\n\n");
	printf("d_aab = %lf\n", *(data.ptr_d_aab));
	printf("Address Of 'd_aa' = %p\n", data.ptr_d_aab);

	return(0);
}