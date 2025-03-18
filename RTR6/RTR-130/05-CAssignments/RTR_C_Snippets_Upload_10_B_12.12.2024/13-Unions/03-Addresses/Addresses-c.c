#include<stdio.h>


struct MyStruct
{
	int i_aab;
	float f_aab;
	double d_aab;
	char c_aab;
};

union MyUnion
{
	int i_aab;
	float f_aab;
	double d_aab;
	char c_aab;
};

int main(void)
{
	// variable declarations
	struct MyStruct s_aab;
	union MyUnion u_aab;

	//code
	printf("\n\n");
	printf("Members of Struct Are : \n\n");

	s_aab.i_aab = 9;
	s_aab.f_aab = 8.7f;
	s_aab.d_aab = 1.233422;
	s_aab.c_aab = 'P';

	printf("s.i = %d\n\n", s_aab.i_aab);
	printf("s.f = %f\n\n", s_aab.f_aab);
	printf("s.d = %lf\n\n", s_aab.d_aab);
	printf("s.c = %d\n\n", s_aab.c_aab);

	printf("Addresses Of Members Of Struct Are : \n\n");
	printf("s.i = %p\n\n", &s_aab.i_aab);
	printf("s.f = %p\n\n", &s_aab.f_aab);
	printf("s.d = %p\n\n", &s_aab.d_aab);
	printf("s.c = %p\n\n", &s_aab.c_aab);

	printf("MyStruct s = %p\n\n", &s_aab);

	printf("\n\n");
	printf("Members Of Union Are: \n\n");

	u_aab.i_aab = 3;
	printf("u.i = %d\n\n", u_aab.i_aab);

	u_aab.f_aab = 4.5f;
	printf("u.f = %f\n\n", u_aab.f_aab);

	u_aab.d_aab = 5.12764;
	printf("u.d = %lf\n\n", u_aab.d_aab);

	u_aab.c_aab = 'A';
	printf("u.c = %c\n\n", u_aab.c_aab);

	printf("Addresses Of Members Of Union Are : \n\n");
	printf("u.i = %p\n\n", &u_aab.i_aab);
	printf("u.f = %p\n\n", &u_aab.f_aab);
	printf("u.d = %p\n\n", &u_aab.d_aab);
	printf("u.c = %p\n\n", &u_aab.c_aab);

	printf("MyUnion u = %p\n\n", &u_aab);

	return(0);
}