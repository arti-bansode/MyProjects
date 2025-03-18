#include<stdio.h>
#include<stdlib.h>

//DEFINING STRUCT
struct MyData
{
	int* ptr_i_aab;
	int i_aab;

	float* ptr_f_aab;
	float f_aab;

	double* ptr_d_aab;
	double d_aab;

};

int main(void)
{
	//variable declarations
	struct MyData* pData = NULL;

	//code
	printf("\n\n");
	pData = (struct MyData*)malloc(sizeof(struct MyData));
	if (pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXISTING NOW...\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");

	(*pData).i_aab = 9;
	(*pData).ptr_i_aab = &(*pData).i_aab;

	(*pData).f_aab = 11.45f;
	(*pData).ptr_f_aab = &(*pData).f_aab;

	(*pData).d_aab = 30.121995;
	(*pData).ptr_d_aab = &(*pData).d_aab;

	printf("\n\n");
	printf("i_aab = %d\n", *((*pData).ptr_i_aab);
	printf("Addres Of 'i_aab' = %p\n", (*pData).ptr_i_aab);

	printf("\n\n");
	printf("f_aab = %f\n", *((*pData).ptr_f_aab);
	printf("Addres Of 'f_aab' = %p\n", (*pData).ptr_f_aab);

	printf("\n\n");
	printf("d_aab = %lf\n", *((*pData).ptr_d_aab);
	printf("Addres Of 'd_aab' = %p\n", (*pData).ptr_d_aab);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLLY FREED !!!\n\n");
	}
	return(0);
}

