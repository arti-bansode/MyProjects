#include<stdio.h>
int main(void)
{
	//code
	printf("\n\n");
	printf
	("****************************************************************************************************");

	printf("\n\n");
	printf("Hello World !!!\n\n");

	int a = 13;
	printf("Integer Decimal Value Of 'a' = %d\n", a);
	printf("Integer Octal Value Of 'a' = %o\n", a);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letter In Lower Case) =%x\n", a);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letter In Lower Case) =%x\n\n", a);

	char ch = 'A';
	printf("Character ch = %c\n", ch);
	char str[] = "Astromedicomp's Real Rendering Batch";
	printf("String str = %s\n\n", str);
	
	long num = 30121995L;
	printf("Long Integer = %ld\n\n", num);

	unsigned int b = 7;
	printf("Unsigned Integer 'b' = %u\n\n", b);

	float f_num = 3012.1995f;
	printf("Floating Point Number With Just %%f 'f_num' = %f\n", f_num);
	printf("Floating Point Number With  %%4.2f 'f_num' = %4.2f\n", f_num);
	printf("Floating Point Number With  %%6.5f 'f_num' = %6.5f\n", f_num);

	double d_pi = 3.14159265358979323846;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", d_pi);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", d_pi);
	printf("Double Precision Floating Point Number With Exponential (Upper Case)= %E\n", d_pi);
	printf("Double Hexadecimal Value Of 'd_pi'(Hexadecimal Letter In Lower Case)= %a\n", d_pi);
	printf("Double Hexadecimal Value Of 'd_pi'(Hexadecimal Letter In Upper Case)= %A\n", d_pi);

	printf("************************************************************************************************\n");

	printf("\n\n");
	return(0);


}