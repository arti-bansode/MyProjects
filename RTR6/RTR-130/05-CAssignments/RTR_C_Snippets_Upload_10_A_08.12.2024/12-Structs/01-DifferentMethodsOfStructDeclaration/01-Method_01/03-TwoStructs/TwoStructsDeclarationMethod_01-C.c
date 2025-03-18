#include<stdio.h>

//DEFINING STRUCT
struct MyPoint
{
	int x_aab;
	int y_aab;
}point; //declaraing a single variable of type 'struct MyPoint'globally....

//DEFINING STRUCT 
struct MyPointProperties
{
	int quadrant_aab;
	char axis_location_aab[10];
}point_properties; //declaring a single variable of type 'struct MyPointProperties' globally....

int main(void)
{
	//code
	//User Input For The Data Member Of 'struct MyPoint' variable 'point_A'
	printf("\n\n");
	printf("Enter X-Coordinates For A point : ");
	scanf("%d", &point.x_aab);
	printf("Enter Y-Coordinates For A point : ");
	scanf("%d", &point.y_aab);

	printf("\n\n");
	printf("Point Co-ordinates (x,y) Are : (%d,%d) !!!\n\n", point.x_aab, point.y_aab);

	if (point.x_aab == 0  && point.y_aab == 0)
		printf("The Point Is The Origine (%d, %d) !!!\n", point.x_aab, point.y_aab);
	else //Atleast One Of The Two Value (either 'x' or 'Y' or BOTH) is a non-zero values.....
	{
		if (point.x_aab == 0) //If 'X' IS ZERO .... OBVIOUSLY 'Y' IS THE NON-ZERO VALUE
		{
			if (point.y_aab < 0) //If 'Y' IS  -ve
				strcpy(point_properties.axis_location_aab, " Negative Y");

			if (point.y_aab > 0) // If 'Y' IS  +ve
				strcpy(point_properties.axis_location_aab, "Positive Y");

			point_properties.quadrant_aab = 0; //A Point Lying On Any Of The Co-ordinates Axis Is NOT A Part Of ANY Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location_aab);
		}
		else if (point.y_aab == 0) //If 'Y' IS ZERO ... OBIVIOUSLY 'X' IS THE NON-ZERO VALUES
		{
			if (point.x_aab < 0) //If 'X' IS -ve
				strcpy(point_properties.axis_location_aab, "Negative X");

			if (point.x_aab > 0) //If 'X' IS +ve
				strcpy(point_properties.axis_location_aab, "Positive X");

			point_properties.quadrant_aab = 0; //A Point Lying On Any Of The Co-ordinates Axis Is NOT A Part Of ANY Quadrant ...
			printf("The Point Lies On The %s Axis  !!!\n\n", point_properties.axis_location_aab);
		}
		else //BOTH 'X' AND 'Y' ARE NON-ZERO
		{
			point_properties.axis_location_aab[0] = '\0'; //A Point Lying In ANY Of The 4 Quadrants Cannot Be Lying On Any Of The Co-ordinates Axes....

			if (point.x_aab > 0 && point.y_aab > 0) point_properties.quadrant_aab = 1; // 'X' IS  +ve AND 'Y' IS +ve

			else if (point.x_aab < 0 && point.y_aab > 0) point_properties.quadrant_aab = 2; // 'X' IS -ve AND 'Y' IS +ve

			else if (point.x_aab < 0 && point.y_aab < 0) point_properties.quadrant_aab = 3; // 'X' IS  +ve AND 'Y' IS -ve

			else
				point_properties.quadrant_aab = 4;

				printf("The Point Lies In Quadrant Number % d !!!\n\n", point_properties.quadrant_aab);
		}
	}
	return(0);
}
