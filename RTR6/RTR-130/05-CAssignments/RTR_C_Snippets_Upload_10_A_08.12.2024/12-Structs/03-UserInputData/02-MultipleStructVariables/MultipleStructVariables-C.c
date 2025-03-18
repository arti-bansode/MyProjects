#include<stdio.h>
#include<conio.h>

struct MyPoint
{
	int x_aab;
	int y_aab;
};

int main(void)
{
	//variable declaration
	struct MyPoint point_A, point_B, point_C, point_D, point_E; //declaring a 5 struct variable

	//code
	//User Input For The Data Member Of 'struct MyPoint' variable 'point_A'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'A' :");
	scanf("%d", &point_A.x_aab);
	printf("Enter Y-Coordinates For Point 'A' :");
	scanf("%d", &point_A.y_aab);

	//User Input For The Data Member Of 'struct MyPoint' variable 'point_B'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'B' :");
	scanf("%d", &point_B.x_aab);
	printf("Enter Y-Coordinates For Point 'B' :");
	scanf("%d", &point_B.y_aab);

	//User Input For The Data Member Of 'struct MyPoint' variable 'point_C'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'C' :");
	scanf("%d", &point_C.x_aab);
	printf("Enter Y-Coordinates For Point 'C' :");
	scanf("%d", &point_C.y_aab);

	//User Input For The Data Member Of 'struct MyPoint' variable 'point_D'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'D' :");
	scanf("%d", &point_D.x_aab);
	printf("Enter Y-Coordinates For Point 'D' :");
	scanf("%d", &point_D.y_aab);

	//User Input For The Data Member Of 'struct MyPoint' variable 'point_E'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'E' :");
	scanf("%d", &point_E.x_aab);
	printf("Enter Y-Coordinates For Point 'E' :");
	scanf("%d", &point_E.y_aab);

	//Displaying Value Of The Data Member Of 'struct MyPoint' (all variables)
	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", point_A.x_aab, point_A.y_aab);
	printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", point_B.x_aab, point_B.y_aab);
	printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", point_C.x_aab, point_C.y_aab);
	printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", point_D.x_aab, point_D.y_aab);
	printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", point_E.x_aab, point_E.y_aab);

	return(0);

}
