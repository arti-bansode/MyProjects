#include<stdio.h>

//DEFINING STRUCT 
struct MyData
{
	int i;
	float f;
	double d;
	char c;
}data; //Declaring a single struct variable of type 'struct MyData' gloabally...

int main(void)
{
	//variable declarations
	int i_size_aab;
	int f_size_aab;
	int d_size_aab;
	int struct_MyData_size_aab;

	//code
	//Assigning data values to the Data Member Of 'Struct MyData'
	data.i = 30;
	data.f = 11.45f;
	data.d = 1.2995;

	//Displaying Value Of The Data Menber Of 'Struct MyData'
	printf("\n\n");
	printf("DATA MEMBER OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);

	//Calculating Size (In Bytes) Of The Data Menber Of 'struct MyData'
	i_size_aab = sizeof(data.i);
	f_size_aab = sizeof(data.f);
	d_size_aab = sizeof(data.d);

	//Displaying Size (In Bytes) Of The Data Member Of 'struct MyData'
	printf("\n\n");
	printf("SIZE (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("size of 'i' = %d bytes\n", i_size_aab);
	printf("size of 'f' = %d bytes\n", f_size_aab);
	printf("size of 'd' = %d bytes\n", d_size_aab);

	//Calculating Size (In Bytes) of the entire 'struct MyData'
	struct_MyData_size_aab = sizeof(struct MyData); //can also give struct name sizeof(MyData)

	//Displaying Sizes (In Bytes) of the entire 'struct MyData'
	printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size_aab);

	return(0);

}