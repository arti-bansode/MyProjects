#include<stdio.h> //for printf()
#include<conio.h>//for getch()

int main(void)
{
	//variable declarations
	int a_aab, b_aab;
	int result_aab;

	char option, option_division;

	//code
	printf("\n\n");

	printf("Enter Value For 'A' : ");
	scanf("%d", &a_aab);

	printf("Enter Value For 'b' :");
	scanf("%d", &b_aab);

	printf("Enter Option In Character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Substraction : \n");
	printf("'M' or 'm' For Multiplication : \n");
	printf("'D' or 'd' For Division : \n\n");

	printf("Enter Option : ");
	option = getch();

	printf("\n\n");

	switch (option)
	{
		//FALL THROUGH CONSITION FOR 'A' and 'b'
		case 'A':
		case 'a':
			result_aab = a_aab + b_aab;
			printf("Addition Of A = %d and B = %d Gives Result_aab = %d !!!\n", a_aab, b_aab, result_aab);
			break;

		//FALL THROUGH CONSITION FOR 'S' and 's'
		case 'S':
		case 's':
			if (a_aab >= b_aab)
			{
				result_aab = a_aab - b_aab;
				printf("Substraction Of B = %d From A = %d Gives Result_aab = %d !!!\n\n", b_aab, a_aab, result_aab);
			}
			else
			{
				result_aab = b_aab - a_aab;
				printf("Subtraction Of A = %d From B = %d Gives Result_aab = %d !!!\n\n", a_aab, b_aab, result_aab);
			}
			break;

		//FALL THROUGH CONSITION FOR 'M' AND 'm'
	    case 'M':
	    case 'm':
			result_aab = a_aab * b_aab;
			printf("Multiplication Of A = %d And B = %d GIves Result_aab = %d !!!\n\n", a_aab, b_aab, result_aab);
			break;

		//FALL THROUGH COSITION FOR 'D' and 'd'
		case 'D' :
		case 'd' :
			printf("Emter Option In Character : \n\n");
			printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
			printf("'R' or 'r' '%%' For Reminder pon Division : \n");
			printf("Enter Option : ");
			option_division = getch();

			printf("\n\n");

			switch (option_division)
			{
				// FALL THROUGH CONSITION FOR 'Q' and 'q' and '/'
				case 'Q':
				case 'q':
				case '/':
					if (a_aab >= b_aab)
					{
						result_aab = a_aab / b_aab;
						printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n ", a_aab, b_aab, result_aab);
					}
					else
					{
						result_aab = b_aab / a_aab;
						printf("Division Of B = By A = %d Gives Quotient = %d !!!\n\n", b_aab, a_aab, result_aab);
					}
					break; //'break' of case 'Q' or case 'q' or case '/'

					//FALL THROUGH CONSITION FOR 'R' and '%'
				case 'R':
				case 'r':
				case '%':
					if (a_aab >= b_aab)
					{
						result_aab = a_aab % b_aab;
						printf("Division Of B = %d By A= %d Gives Reminder = %d !!!\n\n ", a_aab, b_aab, result_aab);
					}
					else
					{
						result_aab = b_aab % a_aab;
						printf("Division Of B = %d By A =  %d Gives Reminder = %d !!!\n\n", b_aab, a_aab, result_aab);
					}
					break; //'break' of case 'R' or case 'r' or case '%'

				default: // 'default' case for switch (option_division)
					printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division);
					break; //'break' of 'default' of switch (option_division)

			} //ending curly brace of switch (option_division)

			break; //'break' of case 'D' or case 'd'

			default: //'default' case for switch (option)
				printf("Invalid Character %c Entered !!! Please Try Again ..\n\n", option);
				break;
	}
	//ending curly brace of switch(option)
    printf("Switch Case Block Complte !!!\n");

	return(0);
}

	