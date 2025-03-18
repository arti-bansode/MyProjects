// *** global scope ***
// global_count is a global variable declared in source code file ExternalGlobalVariablesInMultipleFiles.c
//To access it in this file, it must be re-declared as an external variable in the global scope of this files along with 'extern' keyword and its proper data type
//Then, it can be used as any ordinary global variable throughout this files as well

#include<stdio.h>

extern int global_count_aab;

void change_count_one(void)
{
	//code 
	global_count_aab = global_count_aab + 1;
	printf("change_count_one() : Value Of global_count in File_01 = %d\n", global_count_aab);
}
