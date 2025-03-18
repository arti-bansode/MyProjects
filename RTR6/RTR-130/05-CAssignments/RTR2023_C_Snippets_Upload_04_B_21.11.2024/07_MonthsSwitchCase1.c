#include<stdio.h>
int main(void)
{
 //variable declarations
 int num_month_aab;

 //code
 printf("Enter Month Number\n\n");

 scanf("%d", &num_month_aab);

 printf("\n\n");

 switch (num_month_aab)
 {
 case 1: //like 'if'
	printf("Month Number %d Is JANUARY !!!\n\n", num_month_aab);
	break;

 case 2: //like 'else if'
	printf("Month Number %d Is Februuary !!!\n\n", num_month_aab);
	break;

 case 3: //like 'else if'
	printf("Month Number %d Is MARCH !!!\n\n", num_month_aab);
	break;

 case 4://like 'else if'
	printf("Month Number %d Is APRIL !!!\n\n", num_month_aab);
	break;

 case 5: //like 'else if'
	printf("Month Number %d Is MAY !!!\n\n", num_month_aab);
	break;

 case 6: //like 'else if'
	printf("Month Number %d Is JUNE !!!\n\n", num_month_aab);
	break;

 case 7: //like 'else if'
	printf("Month Number %d Is JULLY !!!\n\n", num_month_aab);
	break;

 case 8: //like 'else if'
	 printf("Month Number %d Is AUGUST !!!\n\n", num_month_aab);
		break;

 case 9: //like 'else if'
	printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month_aab);
	break;

 case 10: //like 'else if'
	printf("Month Number %d Is OCTOMBER  !!!\n\n", num_month_aab);
	break;

 case 11: //like 'else if'
	printf("Month Number %d Is NOVEMBER !!!\n\n", num_month_aab);
	break;

 case 12: //like 'else if'
	printf("Month Number %d Is DECEMBER !!!\n\n", num_month_aab);
	break;

 default: //like ending OPTIONAL 'else' ...just like terminating 'else' is optional in if-else if-else ladder, so is the 'default' case optinal i switch case.
	printf("Invalid Month Number %d Entered !!! Please Try Again ....\n\n", num_month_aab);
	break;
 }
 printf("Switch Cse Block Complete !!!\n");
 return(0);
}