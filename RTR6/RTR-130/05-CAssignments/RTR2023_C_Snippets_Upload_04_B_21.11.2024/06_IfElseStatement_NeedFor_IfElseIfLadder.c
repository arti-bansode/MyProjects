#include<stdio.h>
int main(void)
{
	//Variable declarations
	int num_aab;

	//code
	printf("\n\n");

	printf("Enter Value For 'num_aab' :");
	scanf("%d", &num_aab);
	if (num_aab < 0)// 'if' - 01
	{
		printf("Num_aab = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num_aab);
    }
	else //'else' - 01
	{
		if ((num_aab > 0) && (num_aab <= 100)) // 'if' - 02
		{
			printf("Num_aab = %d Is Between 0 And 100 !!!\n\n", num_aab);

		}
		else //'else' = 02
		{
			if ((num_aab > 100) && (num_aab <= 200)) //'if' - 03
			{
				printf("Num_aab = %d Is Between 100 And 200 !!!\n\n", num_aab);

			}
			else //'else' - 03
			{
				if ((num_aab > 200) && (num_aab <= 300 )) //'if' - 04
				{
					printf("Num_aab = %d Is Between 200 And 300 !!!\n\n", num_aab);

				}
				else //'else' - 04
				{
					if ((num_aab > 300) && (num_aab <= 400)) //'if' - 05
					{
						printf("Num_aab = %d Is Between 300 And !!!\n\n", num_aab);
					}
					else //'else' - 05
					{
						if ((num_aab > 400) && (num_aab <= 500)) //'if' - 06
						{
							printf("Num_aab = %d Is Between 400 And 500 !!!\n\n", num_aab);

						}
						else //' else' - 06
						{
							printf("Num_aab = %d Is Greater Than 500 !!!\n\n", num_aab);

						}//closing brace of else - 06 
					} //closing braces of 'else' - 05

				}// closing braces of 'else' -04
			}// closing braces of 'else' -03
		}// closing braces of 'else' -02
	}// closing braces of 'else' -01

	return(0);
}