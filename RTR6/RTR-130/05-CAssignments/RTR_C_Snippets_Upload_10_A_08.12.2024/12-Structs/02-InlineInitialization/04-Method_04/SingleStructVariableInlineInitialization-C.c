#include<stdio.h>

//DEFINING STRUCT 
struct MyData
{
	int i_aab;
	float f_aab;
	double d_aab;
	char c_aab;
};

int main(void)
{
	//variable declarations

	// 35 will be assigned to 'i_aab' of 'data_one'
	// 3.9 will be assigned to 'f_aab' of 'data_one'
	// 1.23765 will be assigned to 'd_aab' of 'data_one'
	// 'A' will be assigned to 'c_aab' of 'data_one'
	struct MyData data_one = { 35, 3.9f, 1.23765, 'A' }; //Inline Initialization

	//'p' will be assigned to 'i_aab' of 'data_two' ... but 'p' is a character (char) and 'i_aab' is an integer  ... so 'p' is converted into it decimal integer ASCII value (80) and 80 is assigned to 'i_aab' of data_two
	// 6.2 will be assigned to 'f_aab' of 'data_two'
	// 12.199523 will be assigned to 'd_aab' of 'data_two'
	// 68 will be assigned to 'c_aab' of 'data_two' ... but 68 is an integer (int) and 'c' is a 'char' ... so 68 is cosidered as a decimal ASCII values and its corresponding character ('D') is assigned to 'c_aab'  of data_two
	struct MyData data_two = { 'P',6.2f,12.199523, 68 }; //Inline Initialization

	//36 will be assigned to 'i_aab' of 'data_three' 
	//'G' is 'char' but 'f_aab' of 'data_three' is 'float' ...hence 'G' is convarted to its decimal integer ASCII value (71) and this in turn is converted to 'float' (71.000000) and then it will be assigned to 'f' of' 'data_three' 
	// 0.000000 will be assigned to 'd_aab' of 'data_three'
	// No character will be assigned to 'c' of 'data_three'
	struct MyData data_three = { 36, 'G' }; //Inline Initialization

	// 79 will be assigned to 'i_aab' of 'data_four'
	// 0.000000 will be assigned to 'f_aab' of 'data_four'
	// 0.000000 will be assigned to 'd_aab' of 'data_four'
	//No character will be assigned to 'c_aab' of 'data_four'
	struct MyData data_four = { 79 }; //Inline Initialization

	//code
	//Displaying Values Of The Data Member Of 'struct MyData' 
	printf("\n\n");
	printf("DATA MEMBER OF 'struct MyData data_one' ARE : \n\n");
	printf("i_aab = %d\n", data_one.i_aab);
	printf("f_aab = %f\n", data_one.f_aab);
	printf("d_aab = %lf\n", data_one.d_aab);
	printf("c_aab = %c\n", data_one.c_aab);
	
	printf("\n\n");
	printf("DATA MEMBER OF 'struct MyData data_two' ARE : \n\n");
	printf("i_aab = %d\n", data_two.i_aab);
	printf("f_aab = %f\n", data_two.f_aab);
	printf("d_aab = %lf\n", data_two.d_aab);
	printf("c_aab = %c\n", data_two.c_aab);

	printf("\n\n");
	printf("DATA MEMBER OF 'struct MyData data_three' ARE : \n\n");
	printf("i_aab = %d\n", data_three.i_aab);
	printf("f_aab = %f\n", data_three.f_aab);
	printf("d_aab = %lf\n", data_three.d_aab);
	printf("c_aab = %c\n", data_three.c_aab);

	printf("\n\n");
	printf("DATA MEMBER OF 'struct MyData data_four' ARE : \n\n");
	printf("i_aab = %d\n", data_four.i_aab);
	printf("f_aab = %f\n", data_four.f_aab);
	printf("d_aab = %lf\n", data_four.d_aab);
	printf("c_aab = %c\n", data_four.c_aab);

	return(0);
}