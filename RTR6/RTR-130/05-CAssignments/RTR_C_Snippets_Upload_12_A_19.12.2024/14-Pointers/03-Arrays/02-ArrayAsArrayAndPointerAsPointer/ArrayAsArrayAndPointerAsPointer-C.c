#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray_aab[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90,100 }; // Integer Array
	int* ptr_iArray_aab = NULL; //Integer pointer

	//code

	// ##### USING ARRAY NAME AS A ARRAY i.e : Value of xth Element Of iArray : iArray_aab[x] AND Address of xth Element of iArray_aab : &iArray_aab[x] #####
	printf("\n\n");
	printf(" *** USING ARRAY NAME AS A ARRAY i.e : Value of xth Element Of iArray : iArray_aab[x] AND Address of xth Element Of iArray : &iArray_aab[x] ***\n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
	printf("iArray_aab[0] = %d \t\t\t At Address &iArray_aab[0] : %p\n", iArray_aab[0], &iArray_aab[0]);
	printf("iArray_aab[1] = %d \t\t\t At Address &iArray_aab[1] : %p\n", iArray_aab[1], &iArray_aab[1]);
	printf("iArray_aab[2] = %d \t\t\t At Address &iArray_aab[2] : %p\n", iArray_aab[2], &iArray_aab[2]);
	printf("iArray_aab[3] = %d \t\t\t At Address &iArray_aab[3] : %p\n", iArray_aab[3], &iArray_aab[3]);
	printf("iArray_aab[4] = %d \t\t\t At Address &iArray_aab[4] : %p\n", iArray_aab[4], &iArray_aab[4]);
	printf("iArray_aab[5] = %d \t\t\t At Address &iArray_aab[5] : %p\n", iArray_aab[5], &iArray_aab[5]);
	printf("iArray_aab6] = %d \t\t\t At Address &iArray_aab[6] : %p\n", iArray_aab[6], &iArray_aab[6]);
	printf("iArray_aab[7] = %d \t\t\t At Address &iArray_aab[7] : %p\n", iArray_aab[7], &iArray_aab[7]);
	printf("iArray_aab[8] = %d \t\t\t At Address &iArray_aab[8] : %p\n", iArray_aab[8], &iArray_aab[8]);
	printf("iArray_aab[9] = %d \t\t\t At Address &iArray_aab[9] : %p\n", iArray_aab[9], &iArray_aab[9]);

	//ASSIGNING BASE ADDRESS OF INTEGER ARRAY 'iArray' TO INTEGER POINTER 'ptr_iArray_aab'
	//NAME OF ANY ARRAY IS ITS OWN BASE ADDRESS
	ptr_iArray_aab = iArray_aab; //SAME AS .......ptr_iArray = &iArray[0]

	//##### USING POINTER i.e : value of xth Element of iArray_aab : "(ptr_iArray_aab + x) AND Address Of xth Element Of iArray_aab : (ptr_iArray_aab + x) #####
	
	printf("\n\n");
	printf(" *** USING POINTER AS POINTER i.e : value of xth Element Of iArray : *(ptr_iArray_aab + x) AND Address of xth Elements Of iArray : (ptr_iArray_aab + x) *** \n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
	printf("*(ptr_iArray_aab + 0) = %d \t\t At Address (ptr_iArray_aab + 0) : %p\n", *(ptr_iArray_aab + 0), (ptr_iArray_aab + 0));
	printf("*(ptr_iArray_aab + 1) = %d \t\t At Address (ptr_iArray_aab + 1) : %p\n", *(ptr_iArray_aab + 1), (ptr_iArray_aab + 1));
	printf("*(ptr_iArray_aab + 2) = %d \t\t At Address (ptr_iArray_aab + 2) : %p\n", *(ptr_iArray_aab + 2), (ptr_iArray_aab + 2));
	printf("*(ptr_iArray_aab + 3) = %d \t\t At Address (ptr_iArray_aab + 3) : %p\n", *(ptr_iArray_aab + 3), (ptr_iArray_aab + 3));
	printf("*(ptr_iArray_aab + 4) = %d \t\t At Address (ptr_iArray_aab + 4) : %p\n", *(ptr_iArray_aab + 4), (ptr_iArray_aab + 4));
	printf("*(ptr_iArray_aab + 5) = %d \t\t At Address (ptr_iArray_aab + 5) : %p\n", *(ptr_iArray_aab + 5), (ptr_iArray_aab + 5));
	printf("*(ptr_iArray_aab + 6) = %d \t\t At Address (ptr_iArray_aab + 6) : %p\n", *(ptr_iArray_aab + 6), (ptr_iArray_aab + 6));
	printf("*(ptr_iArray_aab + 7) = %d \t\t At Address (ptr_iArray_aab + 7) : %p\n", *(ptr_iArray_aab + 7), (ptr_iArray_aab + 7));
	printf("*(ptr_iArray_aab + 8) = %d \t\t At Address (ptr_iArray_aab + 8) : %p\n", *(ptr_iArray_aab + 8), (ptr_iArray_aab + 8));
	printf("*(ptr_iArray_aab + 9) = %d \t\t At Address (ptr_iArray_aab + 9) : %p\n", *(ptr_iArray_aab + 9), (ptr_iArray_aab + 9));

	return(0);
}

