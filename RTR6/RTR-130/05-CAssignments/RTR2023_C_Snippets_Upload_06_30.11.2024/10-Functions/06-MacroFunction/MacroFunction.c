#include<stdio.h>

#define MAX_NUMBER(a, b) ((a > b) ? a : b)

int main(int argc, char* argv[], char* envp[])
{
	//variable declarations
	int iNum_01_aab;
	int iNum_02_aab;
	int iResult_aab;

	float fNum_01_aab;
	float fNum_02_aab;
	float fResult_aab;

	//code
	// *** COMPAIRIN INTEGER VALUES ****
	printf("\n\n");
	printf("Enter An Integer Number : \n\n");
	scanf("%d", &iNum_01_aab);

	printf("\n\n");
	printf("Enter Another Integer Number : \n\n");
	scanf("%d", &iNum_02_aab);

	iResult_aab = MAX_NUMBER(iNum_01_aab, iNum_02_aab);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %d\n", iResult_aab);

	printf("\n\n");

	// *** COMPAIRING FLOATING-POINT VALUES ****
	printf("\n\n");
	printf("Enter A  Floating Point Number : \n\n");
	scanf("%f", &fNum_01_aab);

	printf("\n\n");
	printf("Enter Another Floating Point Number : \n\n");
	scanf("%f", &fNum_02_aab);

	fResult_aab = MAX_NUMBER(fNum_01_aab, fNum_02_aab);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %f\n", fResult_aab);

	printf("\n\n");

	return(0);
}
