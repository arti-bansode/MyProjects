#include<stdio.h>
#include<stdlib.h>

//DEFINING STRUCT 
struct MyData
{
	int i_aab;
	float f_aab;
	double d_aab;
};

int main(void)
{
	//variable declarations
	int i_size_aab;
	int f_size_aab;
	int d_size_aab;
	int struct_MyData_size_aab;
	int pointer_to_struct_MyData_size_aab;

	struct MyData *pData = NULL;

	//code
	printf("\n\n");

	pData = (struct MyData *)malloc(sizeof(struct MyData));
	if (pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXISTING NOW....\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");

	//Assigning Data Values To Data Members Of 'struct MyDta'
	(*pData).i_aab = 30;
	(*pData).f_aab = 11.45f;
	(*pData).d_aab = 1.2995;

	//Displaying Value Of The Data Member Of 'struct MyData'
	printf("\n\n");
	printf("Data Members Of 'struct MyData' ARE : \n\n");
	printf("i_aab = %d\n", (*pData).i_aab);
	printf("f_aab = %f\n", (*pData).f_aab);
	printf("d_aab = %lf\n", (*pData).d_aab);

	//Calculating Size (In Bytes) Of The Data Members Of 'struct MyData'
	i_size_aab = sizeof((*pData).i_aab);
	f_size_aab = sizeof((*pData).f_aab);
	d_size_aab = sizeof((*pData).d_aab);

	//Displaying Size (In Bytes) Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("SIZE (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size of 'i_aab' = %d bytes\n", i_size_aab);
	printf("Size of 'f_aab' = %d bytes\n", f_size_aab);
	printf("Size of 'd_aab; = %d bytes\n", d_size_aab);

	//Calculating Size (In Bytes) Of The Entire 'struct MyData'
	struct_MyData_size_aab = sizeof(struct MyData);
	pointer_to_struct_MyData_size_aab = sizeof(struct MyData *);

	// Displaying Size (In Bytes) Of The Entire 'struct MyData'
	printf("\n\n");
	printf("Size Of 'struct MyData' : %d bytes\n\n", struct_MyData_size_aab);
	printf("Size Of Pointer To 'struct MyData' :%d bytes\n\n", pointer_to_struct_MyData_size_aab);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);

}

