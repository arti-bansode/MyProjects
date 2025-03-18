#include<stdio.h>

//*** GLOBAL SCOPE ***

//If initialized by us, globbal variable are initialized to their zero value(with respect to their data types i.e: 0 for int, 0.0 for float and double etc) by default.
// but still, for programming discipline, we shall  explicitly initialize our global variable with 0.


int global_count_aab = 0;

int main(void)
{
	//function prototypes
	void change_count_one(void);
	void change_count_two(void);
	void change_count_three(void);

	//code
	printf("\n");

	printf("main() : value of global_count_aab = %d\n", global_count_aab);

	change_count_one();
	change_count_two();
	change_count_three();

	printf("\n");
	return(0);
}
// *** GLOBAL SCOPE ***

void change_count_one(void)
{
	//code
	global_count_aab = 100;
	printf("change_count_one() : value of global_count = %d\n", global_count_aab);
}

// *** GLOBAL SCOPE ***

void change_count_two(void)
{
	//code
	global_count_aab = global_count_aab + 1;
	printf("change_count_two() : value of global_count = %d\n", global_count_aab);
}

// *** GLOBAL SCOPE ***

void change_count_three(void)
{
	//code
	global_count_aab = global_count_aab + 10;
	printf("change_count_three() : value of global_count = %d\n", global_count_aab);
}

// *** GLOBAL SCOPE ***
