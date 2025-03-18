#include<stdio.h>

struct MyNumber
{
	int num_aab;
	int num_table_aab[10];
};

struct NumTables
{
	struct MyNumber n_aab;

};

int main(void)
{
	//variable declaration
	struct NumTables tables[10]; //an aray of 10 'struct NumTables'
	int i_aab, j_aab;

	//code
	for (i_aab = 0; i_aab < 10; i_aab++)
	{
		tables[i_aab].n_aab.num_aab = (i_aab + 1);
	}

	for (i_aab = 0; i_aab < 10; i_aab++)
	{
		printf("\n\n");
		printf("Table Of %d : \n\n", tables[i_aab].n_aab.num_aab);
		for (j_aab = 0; j_aab < 10; j_aab++)
		{
			tables[i_aab].n_aab.num_table_aab[j_aab] = tables[i_aab].n_aab.num_aab * (j_aab + 1);
			printf("%d * %d = %d\n", tables[i_aab].n_aab.num_aab, (j_aab + 1), tables[i_aab].n_aab.num_table_aab[j_aab]);
		}
	}
	return(0);
}



