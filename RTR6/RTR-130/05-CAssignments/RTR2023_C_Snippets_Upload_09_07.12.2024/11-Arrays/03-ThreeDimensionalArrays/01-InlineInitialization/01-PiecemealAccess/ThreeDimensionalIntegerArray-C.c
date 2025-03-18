#include<stdio.h>
int main(void)
{
	// variable declarations

	//IN-LINE INITIALIZATION
	int iArray_aab[5][3][2] = { {{9,18},{27,36},{5,54}},
	{{8,16},{24,32},{40,48}},
	{{7,14},{21,28},{35,42}},
	{{6,12},{18,24},{30,36}},
	{{5,10},{15,20},{25,30}} };

	int int_size_aab;
	int iArray_size_aab;
	int iArray_num_elements_aab, iArray_width_aab, iArray_height_aab, iArray_depth_aab;

	//code
	printf("\n\n");

	int_size_aab = sizeof(int);

	iArray_size_aab = sizeof(iArray_aab);
	printf("Size Of Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_size_aab);

	iArray_width_aab = iArray_size_aab / sizeof(iArray_aab[0]);
	printf("Number Of Rows (width) In Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_width_aab);

	iArray_height_aab = sizeof(iArray_aab[0]) / sizeof(iArray_aab[0][0]);
	printf("Number Of Column (Height) In Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_height_aab);

	iArray_depth_aab = sizeof(iArray_aab[0][0]) / int_size_aab;
	printf("Depth In Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_depth_aab);

	iArray_num_elements_aab = iArray_width_aab * iArray_height_aab * iArray_depth_aab;
	printf("Number Of Elements In Three Diamentional (3D) Integer Array Is = %d\n\n", iArray_num_elements_aab);

	printf("\n\n");
	printf("Elements In Integer 3D Array : \n\n");

	//  ***PIECE-MEAL DISPLAY ***
	// ****ROW 1 *****
	printf("****** ROW 1 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray_aab[0][0][0] = %d\n", iArray_aab[0][0][0]);
	printf("iArray_aab[0][0][1] = %d\n", iArray_aab[0][0][1]);
	printf("\n");

	printf("****** COLUMN 1 *******");
	printf("iArray_aab[0][1][0] = %d\n", iArray_aab[0][1][0]);
	printf("iArray_aab[0][1][1] = %d\n", iArray_aab[0][1][1]);


	printf("****** COLUMN 3 *******");
	printf("iArray_aab[0][2][0] = %d\n", iArray_aab[0][2][0]);
	printf("iArray_aab[0][2][1] = %d\n", iArray_aab[0][2][1]);

	// ****** ROW 2 *******
	printf("****** ROW 1 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray_aab[1][0][0] = %d\n", iArray_aab[1][0][0]);
	printf("iArray_aab[1][0][1] = %d\n", iArray_aab[1][0][1]);
	printf("\n");

	printf("****** COLUMN 2 ******\n");
	printf("iArray_aab[1][1][0] = %d\n", iArray_aab[1][1][0]);
	printf("iArray_aab[1][1][1] = %d\n", iArray_aab[1][1][1]);
	printf("\n");

	printf("****** COLUMN 3 ******\n");
	printf("iArray_aab[1][2][0] = %d\n", iArray_aab[1][2][0]);
	printf("iArray_aab[1][2][1] = %d\n", iArray_aab[1][2][1]);
	printf("\n");

	// ******* ROW 3 *******
	printf("****** ROW 3 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray_aab[2][0][0] = %d\n", iArray_aab[2][0][0]);
	printf("iArray_aab[2][0][1] = %d\n", iArray_aab[2][0][1]);
	printf("\n");

	printf("****** COLUMN 2 ******\n");
	printf("iArray_aab[2][1][0] = %d\n", iArray_aab[2][1][0]);
	printf("iArray_aab[2][1][1] = %d\n", iArray_aab[2][1][1]);
	printf("\n");

	printf("****** COLUMN 1 ******\n");
	printf("iArray_aab[2][2][0] = %d\n", iArray_aab[2][2][0]);
	printf("iArray_aab[2][2][1] = %d\n", iArray_aab[2][2][1]);
	printf("\n");

	// ****** ROW 4 ******
	printf("****** ROW 4 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray_aab[3][0][0] = %d\n", iArray_aab[3][0][0]);
	printf("iArray_aab[3][0][1] = %d\n", iArray_aab[3][0][1]);
	printf("\n");

	printf("****** COLUMN 2 ******\n");
	printf("iArray_aab[3][1][0] = %d\n", iArray_aab[3][1][0]);
	printf("iArray_aab[3][1][1] = %d\n", iArray_aab[3][1][1]);
	printf("\n");

	printf("****** COLUMN 3 ******\n");
	printf("iArray_aab[3][2][0] = %d\n", iArray_aab[3][2][0]);
	printf("iArray_aab[3][2][1] = %d\n", iArray_aab[3][2][1]);
	printf("\n");

	// ****** ROW 5 ******
	printf("****** ROW 5 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray_aab[4][0][0] = %d\n", iArray_aab[4][0][0]);
	printf("iArray_aab[4][0][1] = %d\n", iArray_aab[4][0][1]);
	printf("\n");

	printf("****** COLUMN 2 ******\n");
	printf("iArray_aab[4][1][0] = %d\n", iArray_aab[4][1][0]);
	printf("iArray_aab[4][1][1] = %d\n", iArray_aab[4][1][1]);
	printf("\n");

	printf("****** COLUMN 3 ******\n");
	printf("iArray_aab[4][2][0] = %d\n", iArray_aab[4][2][0]);
	printf("iArray_aab[4][2][1] = %d\n", iArray_aab[4][2][1]);
	printf("\n");

	return(0);

}