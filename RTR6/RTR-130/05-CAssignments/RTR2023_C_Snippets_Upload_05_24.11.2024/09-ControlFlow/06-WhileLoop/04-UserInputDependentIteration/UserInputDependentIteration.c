#include<stdio.h>
int main(void)
{
	//variable declarations
	int i_aab_num, num_aab, i_aab;

	//code
	printf("Enter An Integer Value From Which Iteration Must Begin :");
	scanf("%d", &i_aab_num);

	printf("How Many Digits Do You Want To Print From %d Onward ? :", i_aab_num);
	scanf("%d", &num_aab);

	printf("Printing Digits %d to %d : \n\n", i_aab_num, (i_aab_num + num_aab));

	i_aab = i_aab_num;
	while (i_aab <= (i_aab_num + num_aab))
	{
		printf("\t%d\n", i_aab);
		i_aab++;
	}
	printf("\n\n");

	return(0);
}