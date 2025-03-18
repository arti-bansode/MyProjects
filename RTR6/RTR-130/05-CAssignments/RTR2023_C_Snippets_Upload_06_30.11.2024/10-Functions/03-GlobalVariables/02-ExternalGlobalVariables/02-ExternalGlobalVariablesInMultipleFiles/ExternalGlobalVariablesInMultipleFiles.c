#include<stdio.h>

// *** GLOBAL SCOPE ***
int global_count_aab = 0;

int main(void)
{
	//function prototype
	void change_count(void);
	void change_count_one(void); //function defines in files_01.c
	void change_count_two(void); //function defines in file_02.c

	//code
	printf("\n");

	change_count();
	change_count_one(); //function defines in files_01.c
	change_count_two(); //function defines in filwe_02.c

	return(0);
}

void change_count(void)
{
	//code
	global_count_aab = global_count_aab + 1;
	printf("Global Count = %d\n", global_count_aab);
}
