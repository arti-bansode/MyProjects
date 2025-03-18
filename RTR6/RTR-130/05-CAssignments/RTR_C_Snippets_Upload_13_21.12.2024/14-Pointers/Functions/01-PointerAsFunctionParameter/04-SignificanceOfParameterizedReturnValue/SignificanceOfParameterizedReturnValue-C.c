#include<stdio.h>

enum
{
	NEGATIVE = -1,
	ZERO,
	POSITIVE
};

int main(void)
{
	//function declarations
	int Differance(int, int, int*);

	//variable declaration
	int a_aab;
	int b_aab;
	int answer_aab, ret_aab;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A' :");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &b_aab);

	ret_aab = Differance(a_aab, b_aab, &answer_aab);

	printf("\n\n");
	printf("Differance Of %d And %d  = %d \n\n", a_aab, b_aab, answer_aab);

	if (ret_aab == POSITIVE)
		printf("The Differance Of %d And %d Is Positive !!!\n\n", a_aab, b_aab);

	else if (ret_aab == NEGATIVE)
		printf("The Differance Of %d And %d Is Negative !!!\n\n", a_aab, b_aab);

	else
		printf("The Differace Of %d And %d Is Zero !!!\n\n", a_aab, b_aab);

	return(0);
}
// WE WANT OUR FUNCTION Differance() TO PERFORM 2 JOBS...
// ONE, IS TO SUBSTRACT THE INPUT NUMBERS ('y' FROM 'x') AND THE SECOND , IS TO TELL WETHER THE DIFFERANCE OF  'x' AND 'y' IS POSITIVE or NEGATIVE  or ZERO...
// BUT ANY FUNCTION HAS ONLY ONE VALID RETURN VALUE, THEN HOW CAN WE MANAGE TO RETURN TWO VALUES TO THE CALLING FUNCTION?
//THIS IS WHERE PARAMETERIZED RETURN VALUE COMES INTO THE PICTURE... 
// WE CAN RETURN THE ACTUAL DIFFERANCE OF 'x' AND 'y' ,THAT IS, THE ACTUAL ANSWER VALUE , VIA OUT-PARAMETER / PARAMETERIZED RETURN VALUE 
//AND WE CAN RETURN THE STATUS OF THE ANSWER (POSITIVE / NEGATIVE / ZERO) VIA THE ACTUAL RETURN VALUE OF THE FUNCTION ...

int Differance(int x, int y, int* diff)
{
	//code
	*diff = x - y;

	if (*diff > 0)
		return(POSITIVE);

	else if (*diff < 0)
		return(NEGATIVE);

	else
		return(ZERO);
}
