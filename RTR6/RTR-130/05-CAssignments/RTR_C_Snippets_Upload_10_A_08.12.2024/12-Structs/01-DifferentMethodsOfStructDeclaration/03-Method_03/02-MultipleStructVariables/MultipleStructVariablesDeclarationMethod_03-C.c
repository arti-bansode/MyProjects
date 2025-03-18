#include<stdio.h>

int main(void)
{
	//DEFINING STRUCT ....
	struct MyPoint
	{
		int x_aab;
		int y_aab;
	} point_A, point_B, point_C, point_D, point_E; // Declaring 5 struct variables of type 'struct MyPoint' locally...

	// code
	// Assigning Data Value To The Data Member Of 'struct MyPoint' Variable 'point_A'
	point_A.x_aab = 3;
	point_A.y_aab = 0;

	//Assigning Data Value To The Data Member Of 'struct MyPoint' variable 'point_B'
	point_B.x_aab = 1;
	point_B.y_aab = 2;

	//Assigning Data Value To The Data Member Of 'struct MyPoint' variable 'point_C'
	point_C.x_aab = 9;
	point_C.y_aab = 6;

	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_D'
	point_D.x_aab = 8;
	point_D.x_aab = 2;

	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_E'
	point_E.x_aab = 11;
	point_E.y_aab = 8;

	//Displaying Value Of The Data Member Of 'struct MyPoint' (all variable)
	printf("\n\n");
	printf("Co-ordinates (x, y) of point 'A' Are : (%d, %d)\n\n", point_A.x_aab, point_A.y_aab);
	printf("Co-ordinates (x, y) of point 'B' Are : (%d, %d)\n\n", point_B.x_aab, point_B.y_aab);
	printf("Co-ordinates (x, y) of point 'C' Are : (%d, %d)\n\n", point_C.x_aab, point_C.y_aab);
	printf("Co-ordinates (x, y) of point 'D' Are : (%d, %d)\n\n", point_D.x_aab, point_D.y_aab);
	printf("Co-ordinates (x, y) of point 'E' Are : (%d, %d)\n\n", point_E.x_aab, point_E.y_aab);

	return(0);

}