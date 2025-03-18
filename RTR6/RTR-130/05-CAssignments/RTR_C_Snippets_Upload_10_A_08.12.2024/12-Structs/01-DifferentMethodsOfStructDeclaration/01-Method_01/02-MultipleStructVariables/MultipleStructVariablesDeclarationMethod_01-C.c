#include<stdio.h>

//DEFINING STRUCT....
struct MyPoint
{
	int x_aab;
	int y_aab;
}point_A, point_B, point_C, point_D, point_E; //Declaring 5 struct variables of type 'struct MyPoint' globally...

int main(void)
{
	//code
	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_A'
	point_A.x_aab = 3;
	point_A.y_aab = 0;

	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_B'
	point_B.x_aab = 1;
	point_B.y_aab = 2;

	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_C'
	point_C.x_aab = 9;
	point_C.y_aab = 6;

	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_D'
	point_D.x_aab = 8;
	point_D.y_aab = 2;

	//Assigning Data Values To The Data Member Of 'struct MyPoint' variable 'point_E'
	point_E.x_aab = 11;
	point_E.y_aab = 8;

	//Displaying Values Of The Data Member Of 'struct MyPoint' (all variables)
	printf("\n\n");
	printf("Co-ordinates (x,y) Of Point 'A' Are :(%d, %d)\n\n", point_A.x_aab, point_A.y_aab);
	printf("Co-ordinates (x,y) Of Point 'B' Are :(%d, %d)\n\n", point_B.x_aab, point_B.y_aab);
	printf("Co-ordinates (x,y) Of Point 'C' Are :(%d, %d)\n\n", point_C.x_aab, point_C.y_aab);
	printf("Co-ordinates (x,y) Of Point 'D' Are :(%d, %d)\n\n", point_D.x_aab, point_D.y_aab);
	printf("Co-ordinates (x,y) Of Point 'E' Are :(%d, %d)\n\n", point_E.x_aab, point_E.y_aab);

	return(0);

}