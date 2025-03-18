#include<stdio.h>
int main(void)
{
	// variable declaration
	int num_month_aab;

	//code 
	printf("\n\n");

	printf("Enter Number Of Month(1 to 10) : ");
	scanf("%d", &num_month_aab);

	printf("\n\n");

	//IF - ELSE - IF LADDER BEGINS FROM HERE...
	if(num_month_aab == 1) //like 'case 1'
	printf("Month Number %d Is JANUARY !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 2) //like 'case 2'
	printf("Month Number %d Is Februuary !!!\n\n", num_month_aab);

	else if (num_month_aab == 3) //like 'case 3'
	printf("Month Number %d Is MARCH !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 4) //like 'case 4'
	printf("Month Number %d Is APRIL !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 5) //like 'case 5'
	printf("Month Number %d Is MAY !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 6) //like 'case 6'
	printf("Month Number %d Is JUNE !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 7) //like 'case 7'
	printf("Month Number %d Is JULLY !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 8) //like 'case 8'
	printf("Month Number %d Is AUGUST !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 9) //like 'case 9'
	printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month_aab);
	
	else if (num_month_aab == 10) //like 'case 10'
	printf("Month Number %d Is OCTOMBER  !!!\n\n", num_month_aab);

	else if (num_month_aab == 11) //like 'case 11'
	printf("Month Number %d Is NOVEMBER !!!\n\n", num_month_aab);

	else if (num_month_aab == 12) //like 'case 12'
	printf("Month Number %d Is DECEMBER !!!\n\n", num_month_aab);

	else //like 'default' ... just like 'default' is optional in switch-case , so in 'else' in the if-else if-else ladder.....
	printf("Invalid Month Number %d Entered !!! Please Try Again ....\n\n", num_month_aab);
	
	printf("If - Else If - else Ladder Complete !!!\n");
	
	return(0);
}