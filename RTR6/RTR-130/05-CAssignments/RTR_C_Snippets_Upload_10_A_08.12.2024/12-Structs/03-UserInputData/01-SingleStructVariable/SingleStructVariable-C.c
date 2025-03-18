#include<stdio.h>
#include<conio.h>

struct MyData
{
	int i_aab;
	float f_aab;
	double d_aab;
	char ch_aab;
};

int main(void)
{
	//variable declarations
	struct MyData data; //declaring a single variable 

	//code
	//User Input For Values Of Data Member Of 'struct MyData'
	printf("\n\n");

	printf("Enter Integer Value For Data Member 'i_aab' of 'struct MyData' : \n");
	scanf("%d", &data.i_aab);

	printf("Enter Floating-point Value For Data Member 'f_aab' of 'struct MyData' :\n");
	scanf("%f", &data.f_aab);

	printf("Enter 'double' Values For Data Member 'd_aab' of 'struct MyData' : \n");
	scanf("%lf", &data.d_aab);

	printf("Enter Character Value For Data Member 'c_aab' of 'struct MyData' :\n");
	data.ch_aab = getch();

	//Displaying Value Of Data Member Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBER OF 'struct MyData' ARE : \n\n");
	printf("i_aab = %d\n", data.i_aab);
	printf("f_aab = %f\n", data.f_aab);
	printf("d_aab = %lf\n", data.d_aab);
	printf("c_aab = %c\n\n", data.ch_aab);

	return(0);
}