#include<stdio.h>
int main(void)
{
	//variable declarations
	int num_aab;

	//code
	printf("\n\n");

	printf("Enter Value For 'num_aab' : ");
	scanf("%d", &num_aab);

	//IF - ELASE - IF LADDER BEGINS FROM HERE...
	if (num_aab < 0)
		printf("Num_aab = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num_aab);

	else if ((num_aab > 0) && (num_aab <= 100))
		printf("Num_aab = %d Is Between 0 And 100 !!!\n\n", num_aab);

	else if ((num_aab > 100) && (num_aab <= 200))
		printf("Num_aab = %d Is Between 100 And 200 !!!\n\n", num_aab);

	else if ((num_aab > 200) && (num_aab <= 300))
		printf("Num_aab = %d Is Between 200 And 300 !!!\n\n", num_aab);

	else if ((num_aab > 300) && (num_aab <= 400))
		printf("Num_aab = %d Is Between 300 And 400 !!!\n\n", num_aab);

	else if ((num_aab > 400) && (num_aab <= 500))
		printf("Num_aab = %d Is Between 400 And 500 !!!\n\n", num_aab);

	else if (num_aab > 500)
		printf("Num_aab = %d Is Greater Than 500 !!!\n\n", num_aab);

        // *** NO TERMINATING 'ELSE' IN TIHS LADDER !!! ***

	return(0);


}