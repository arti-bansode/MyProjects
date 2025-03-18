#include<stdio.h>
#include<stdarg.h>

int main(void)
{
	//function prototype 
	int CalculateSum_aab(int, ...);

	// Variable Declarations
	int answer_aab;

	//code
	printf("\n\n");

	answer_aab = CalculateSum_aab(5, 10, 20, 30, 40, 50);
	printf("Answer = %d\n\n", answer_aab);

	answer_aab = CalculateSum_aab(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	printf("Answer = %d\n\n", answer_aab);

	answer_aab = CalculateSum_aab(0);
	printf("Answer = %d\n\n", answer_aab);

	return(0);
}

int CalculateSum_aab(int num, ...) //VARIADIC FUNCTION
{
	//variable declarations
	int sum_total_aab = 0;
	int n_aab;

	va_list numbers_list;

	//code
	va_start(numbers_list, num);

	while (num)
	{
		n_aab = va_arg(numbers_list, int);
		sum_total_aab = sum_total_aab + n_aab;
		num--;
	}
	va_end(numbers_list);
	return(sum_total_aab);
}


