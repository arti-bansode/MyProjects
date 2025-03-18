#include <stdio.h>

union MyUnion
{
	int i_aab;
	float f_aab;
	double d_aab;
	char c_aab;
};

int main(void)
{
	//variable declarations
	union MyUnion u1, u2;

	//code
	// **** MyUnion u2 ****
	printf("Members Of Unoin u1 Are : \n\n");

	u1.i_aab = 6;
	u1.f_aab = 1.2f;
	u1.d_aab = 8.333333;
	u1.c_aab = 'S';

	printf("u1.i_aab = %d\n\n", u1.i_aab);
	printf("u1.f_aab = %f\n\n", u1.f_aab);
	printf("u1.d_aab = %lf\n\n", u1.d_aab);
	printf("u1.c_aab = %c\n\n", u1.c_aab);

	printf("Addresses Of Members Of Union u1 Are : \n\n");
	printf("u1.i_aab = %p\n\n", &u1.i_aab);
	printf("u1.f_aab = %p\n\n", &u1.f_aab);
	printf("u1.d_aab = %p\n\n", &u1.d_aab);
	printf("u1.c_aab = %p\n\n", &u1.c_aab);

	printf("MyUnion u1 = %p\n\n", &u1);

	//****** MyUnion u2 ******
	printf("\n\n");
	printf("Members Of Union u2 Are : \n\n");

	u2.i_aab = 3;
	printf("u2.i = %d\n\n", u2.i_aab);

	u2.f_aab = 4.5f;
	printf("u2.f_aab = %f\n\n", u2.f_aab);

	u2.d_aab = 5.12764;
	printf("u2.d_aab = %lf\n\n", u2.d_aab);

	u2.c_aab = 'A';
	printf("u2.c_aab = %c\n\n", u2.c_aab);

	printf("Address Of Members Of Union u2 Are : \n\n");
	printf("u2.i_aab = %p\n\n", &u2.i_aab);
	printf("u2.f_aab = %p\n\n", &u2.f_aab);
	printf("u2.d_aab = %p\n\n", &u2.d_aab);
	printf("u2.c_aab = %p\n\n", &u2.c_aab);

	printf("MyUnion u2 = %p\n\n", &u2);
	return(0);
}
