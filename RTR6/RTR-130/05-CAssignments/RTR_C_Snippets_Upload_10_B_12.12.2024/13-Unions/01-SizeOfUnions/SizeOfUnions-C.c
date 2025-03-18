#include <stdio.h>

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
	//variable declarations
	struct MyStruct s;
	union MyUnion u;

	//code
	printf("\n\n");
	printf("Size Of MyStruct = %zu\n", sizeof(s));
	printf("\n\n");
	printf("Size Of MyUnion = %zu\n", sizeof(u));
	return(0);
}