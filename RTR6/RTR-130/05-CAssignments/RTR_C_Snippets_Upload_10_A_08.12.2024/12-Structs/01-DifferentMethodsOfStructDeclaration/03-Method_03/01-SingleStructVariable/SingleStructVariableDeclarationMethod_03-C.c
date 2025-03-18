#include<stdio.h>

int main(void)
{
	//DEFINING STRUCT
	struct MyData
	{
		int i_aab;
		float f_aab;
		double d_aab;
	}data; //Declaring a single struct variable of type 'struct MyData' locally...

	//variable declarations
	int i_size_aab;
	int f_size_aab;
	int d_size_aab;
	int struct_MyData_size_aab;

	//code
	//Asigning Data Values To The Data Members Of 'struct MyData'
	data.i_aab = 30;
	data.f_aab = 11.45f;
	data.d_aab = 1.2995;

	//Displaying Value Of The Data Member Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF  'struct MyData' ARE : \n\n");
	printf("i_aab = %d\n", data.i_aab);
	printf("f_aab = %f\n", data.f_aab);
	printf("d_aab = %lf\n", data.d_aab);

	//Calculating size (In Bytes) Of The Data Member Of 'struct MyData'
	i_size_aab = sizeof(data.i_aab);
	f_size_aab = sizeof(data.f_aab);
	d_size_aab = sizeof(data.d_aab);

	//Calculating Sizes (In Bytes) Of The Data Member Of 'struct MyData'
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n ");
	printf("Size of 'i_aab' = %d bytes\n", i_size_aab);
	printf("Size of 'f_aab' = %d bytes\n", f_size_aab);
	printf("Size of 'd_aab' = %d bytes\n", d_size_aab);

	//Calculating Size (In Bytes) Of The Entire 'struct MyData'
	struct_MyData_size_aab = sizeof(struct MyData); //can also give 'struct MyData'

	// Displaying Sizes (In Bytes ) Of The Entire  'struct MyData'
	printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size_aab);

	return(0);
}