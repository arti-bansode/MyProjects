#include <stdio.h>

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
	//function prototype
	struct MyData AddStructMembers(struct MyData, struct MyData, struct MyData);

	//variable declaration
	struct MyData data1_aab, data2_aab, data3_aab, answer_data_aab;

	//code
	// *** data1 ***
	printf("\n\n\n\n");
	printf("******** DATA 1 ********\n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data1' : ");
	scanf("%d", &data1_aab.i_aab);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data1' : ");
	scanf("%f", &data1_aab.f_aab);

	printf("\n\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data1' : ");
	scanf("%lf", &data1_aab.d_aab);

	printf("\n\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data1' : ");
	data1_aab.c_aab = getch();
	printf("%c", data1_aab.c_aab);

	// *** data2 ***
	printf("\n\n\n\n");
	printf("******** DATA 2 ********\n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data2' : ");
	scanf("%d", &data2_aab.i_aab);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data2' : ");
	scanf("%f", &data2_aab.f_aab);

	printf("\n\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data2' : ");
	scanf("%lf", &data2_aab.d_aab);

	printf("\n\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data2' : ");
	data2_aab.c_aab = getch();
	printf("%c", data2_aab.c_aab);

	// *** data3 ***
	printf("\n\n\n\n");
	printf("******** DATA 3 ********\n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data3' : ");
	scanf("%d", &data3_aab.i_aab);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data3' : ");
	scanf("%f", &data3_aab.f_aab);

	printf("\n\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data3' : ");
	scanf("%lf", &data3_aab.d_aab);

	printf("\n\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data3' : ");
	data3_aab.c_aab = getch();
	printf("%c", data3_aab.c_aab);

	// *** CALLING FUNCTION AddStructMembers() WHICH ACCEPTS THREE VARIABLES OF TYPE 'struct MyData' AS PARAMETERS AND ADDS UP THE RESPECTIVE MEMBERS AND RETURNS THE ANSWER IN ANOTHER struct OF SAME TYPE ***
	answer_data_aab = AddStructMembers(data1_aab, data2_aab, data3_aab);

	printf("\n\n\n\n");
	printf("******* ANSWER *******\n\n");
	printf("answer_data.i = %d\n", answer_data_aab.i_aab);
	printf("answer_data.f = %f\n", answer_data_aab.f_aab);
	printf("answer_data.d = %lf\n", answer_data_aab.d_aab);

	answer_data_aab.c_aab = data1_aab.c_aab;
	printf("answer_data.c (from data1) = %c\n\n", answer_data_aab.c_aab);

	answer_data_aab.c_aab = data2_aab.c_aab;
	printf("answer_data.c (from data2) = %c\n\n", answer_data_aab.c_aab);

	answer_data_aab.c_aab = data3_aab.c_aab;
	printf("answer_data.c (from data3) = %c\n\n", answer_data_aab.c_aab);

	return (0);
}

struct MyData AddStructMembers(struct MyData md_one, struct MyData md_two, struct MyData md_three)
{
	//variable declarations
	struct MyData answer_aab;

	//code
	answer_aab.i_aab = md_one.i_aab + md_two.i_aab + md_three.i_aab;
	answer_aab.f_aab = md_one.f_aab + md_two.f_aab + md_three.f_aab;
	answer_aab.d_aab = md_one.d_aab + md_two.d_aab + md_three.d_aab;
	return (answer_aab);
}
