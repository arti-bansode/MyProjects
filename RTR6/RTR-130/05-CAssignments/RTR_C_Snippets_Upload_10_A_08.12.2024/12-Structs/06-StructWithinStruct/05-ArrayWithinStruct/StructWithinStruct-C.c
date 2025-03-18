#include<stdio.h>

struct MyNumber
{
	int num_aab;
	int num_table_aab[10];
};

struct NumTables
{
	struct MyNumber a;
	struct MyNumber b;
	struct MyNumber c;
};

int main(void)
{
	// variable declarations
	struct NumTables tables;
	int i_aab;

	//code
	tables.a.num_aab = 2;
	for (i_aab = 0; i_aab < 10; i_aab++)
		tables.a.num_table_aab[i_aab] = tables.a.num_aab * (i_aab + 1);
	printf("\n\n");
	printf("Table Of %d : \n\n", tables.a.num_aab);
		for (i_aab = 0; i_aab < 10; i_aab++)
			printf("%d * %d = %d\n", tables.a.num_aab, (i_aab + 1), tables.a.num_table_aab[i_aab]);

	tables.b.num_aab = 3;
	for (i_aab = 0; i_aab < 10; i_aab++)
		tables.b.num_table_aab[i_aab] = tables.b.num_aab * (i_aab + 1);
	printf("\n\n");
	printf("Table Of %d : \n\n", tables.b.num_aab);
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("%d * %d = %d\n", tables.b.num_aab, (i_aab + 1), tables.b.num_table_aab[i_aab]);

	tables.c.num_aab = 4;
	for (i_aab = 0; i_aab < 10; i_aab++)
		tables.c.num_table_aab[i_aab] = tables.c.num_aab * (i_aab + 1);
	printf("\n\n");
	printf("Table Of %d : \n\n", tables.c.num_aab);
	for (i_aab = 0; i_aab < 10; i_aab++)
		printf("%d * %d = %d\n", tables.c.num_aab, (i_aab + 1), tables.c.num_table_aab[i_aab]);

	return(0);
}