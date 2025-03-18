#include<stdio.h>
int main(void)
{
	//variable declarations

	//IN-LINE INITILIZATION
	int iArray_aab[5][3][2] = { {{9,18},{27,36},{45,54}},
		{{8,16},{24,32},{40,48}},
		{{7,14},{21,28},{35,42}},
		{{6,12},{18,24},{30,36}},
		{{5,10},{15,20},{25,30}} };
	
	int int_size_aab;
	int iArray_size_aab;
	int iArray_num_elements_aab, iArray_width_aab, iArray_height_aab, iArray_depth_aab;
	int i_aab, j_aab, k_aab;

	//code
	printf("\n\n");

	int_size_aab = sizeof(int);

	iArray_size_aab = sizeof(iArray_aab);
	printf("Size Of Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_size_aab);

	iArray_width_aab = iArray_size_aab / sizeof(iArray_aab[0]);
	printf("Number Of Rows (width) In Three Diamentional (3D) Integer Array Is  = %d\n\n", iArray_width_aab);

	iArray_height_aab = sizeof(iArray_aab[0]) / sizeof(iArray_aab[0][0]);
	printf("Number Of Columns (width) In Three Diamentional (3D) Integer Array Is  = %d\n\n", iArray_height_aab);

	iArray_depth_aab = sizeof(iArray_aab[0][0]) / int_size_aab;
	printf("Depth In Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_depth_aab);

	iArray_num_elements_aab = iArray_width_aab * iArray_height_aab * iArray_depth_aab;
	printf("Number Of Elements In Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_num_elements_aab);

	printf("\n\n");
	printf("Elements In Integer 3D Array :\n\n");

	for (i_aab = 0; i_aab < iArray_width_aab; i_aab++)
	{
		printf("******* ROW %d *******\n", (i_aab + 1));
		for (j_aab = 0; j_aab < iArray_height_aab; j_aab++)
		{
			printf("******* COLUMN %d *******\n", (j_aab + 1));
			for (k_aab = 0; k_aab < iArray_depth_aab; k_aab++)
			{
				printf("iArray[%d][%d][%d] = %d\n", i_aab, j_aab, k_aab, iArray_aab[i_aab][j_aab][k_aab]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return(0);
}