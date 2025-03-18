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
	// function prototypes
	void ChangeValues(struct MyData *);

	//variable declarations
	struct MyData *pData = NULL;

	//code
	printf("\n\n");

	pData = (struct MyData *)malloc(sizeof(struct MyData));
	if (pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXISTING NOW .....\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");

	//Assigning Data Values To The Data Members Of 'struct MyData'
	pData->i_aab = 30;
	pData->f_aab = 11.45;
	pData->d_aab = 1.2995;

	//Displaing Values Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i_aab = %d\n", pData->i_aab);
	printf("f_aab = %f\n", pData->f_aab);
	printf("d_aab = %lf\n", pData->d_aab);

	ChangeValues(pData);
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i_aab =%d\n", pData->i_aab);
	printf("f_aab =%f\n", pData->f_aab);
	printf("d_aab =%lf\n", pData->d_aab);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}
void ChangeValues(struct MyData *pParam_Data)
{
	//code

	pParam_Data->i_aab = 9;
	pParam_Data->f_aab = 8.2f;
	pParam_Data->d_aab = 6.1998;

	//CAN ALSO DO THIS AS ....

	/*
	 (*pParam_Data).i_aab = 9;
	 (*pParam_Data).f_aab = 8.2f;
	 (*pParam_Data).d_aab = 6.1998;

	*/
}

