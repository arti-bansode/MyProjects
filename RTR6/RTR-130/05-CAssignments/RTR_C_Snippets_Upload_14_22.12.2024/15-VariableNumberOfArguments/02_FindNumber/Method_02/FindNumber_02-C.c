#include<stdio.h>
#include<stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(void)
{
	//function prototypes
	void FindNumber(int, int, ...);

	//code
	printf("\n\n");

	FindNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 3, 5, 9, 2, 3, 6, 3, 1, 3);

	return(0);
}

void FindNumber(int num_to_be_found, int num, ...) //VARADIC FUNCTION
{
	// function prototypes
	int va_FindNumber(int, int, va_list);

	// variable declarations
	int count_aab = 0;
	int n_aab;
	va_list numbers_list;

	// code
	va_start(numbers_list, num);

	count_aab = va_FindNumber(num_to_be_found, num, numbers_list);

	if (count_aab == 0)
		printf("Number %d Could Not Be Found !!!\n\n", num_to_be_found);
	else
		printf("Number % d Found % d Times !!!\n\n", num_to_be_found, count_aab);

	va_end(numbers_list);
}
int va_FindNumber(int num_to_be_found, int num, va_list list)
{
	//variable declarations
	int count_of_num_aab = 0;
	int n_aab;

	//code
	while (num)
	{
		n_aab = va_arg(list, int);
		if (n_aab == num_to_be_found)
			count_of_num_aab++;
		num--;
	}
	return(count_of_num_aab);
}

	

