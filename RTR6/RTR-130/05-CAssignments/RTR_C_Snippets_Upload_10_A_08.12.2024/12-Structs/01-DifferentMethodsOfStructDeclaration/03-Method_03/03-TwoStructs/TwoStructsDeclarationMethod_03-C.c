#include<stdio.h>

int main(void)
{
	//DEFINING STRUCT
	struct MyPoint
	{
		int x_aab;
		int y_aab;
	}point; // declaring a single variable of type 'struct MyPoint' locally...

	//DEFINING STRUCT 
	struct MyPointProperties
	{
		int quadrant_aab;
		char axis_location_aab[10];
	}point_properties; //declaring a single variable of type 'struct MyPointProperties' locally...

	// code
	// User Input For The Data Member Of 'struct MyPoint' variable 'point_A'
	printf("\n\n");
	printf("Enter X - Coordinates For A point : ");
	scanf("%d", &point.x_aab);
	printf("Enter Y - Coordinates For A point : ");
	scanf("%d", &point.y_aab);

	printf("\n\n");
	printf("Point Coordinates (x,y) Are : (%d, %d) !!!\n\n", point.x_aab, point.y_aab);

	if (point.x_aab == 0 && point.y_aab == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n ", point.x_aab, point.y_aab);
	else // Atleast One Of The Two Value (either 'X' or 'Y' or BOTH) is a non-zero value...
	{
		if (point.x_aab == 0) // If 'X' IS ZERO ... OBIVIOUSLY 'Y' IS THE NON-ZERO VALUE
		{
			if (point.x_aab < 0) //If 'Y' IS -ve
				strcpy(point_properties.axis_location_aab, "Negative Y");

			if (point.y_aab > 0) // If 'Y' IS +ve
				strcpy(point_properties.axis_location_aab, "positive Y");

			point_properties.quadrant_aab = 0; //A Point Lying On Any Of The Coordinate Axes Is NOT A Part Of ANY Quadrant...
			printf("The Point Lies On The %s axis !!!\n\n", point_properties.axis_location_aab);
		}
		else if (point.y_aab == 0) //If 'Y' IS ZERO ... OBIVIOUSLY 'X' IS THE NON-ZERO VALUE
		{
			if (point.x_aab < 0) // If 'X' Is -ve
				strcpy(point_properties.axis_location_aab, "Negative X");

			if (point.x_aab > 0) // If 'X' Is +ve
				strcpy(point_properties.axis_location_aab, "Positive X");

			point_properties.quadrant_aab = 0; //A POint Lying On Any Of The Coordinate Axes Is NOT Part Of ANY Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location_aab);

		}
		else //BOTH 'X' AND 'Y' ARE NON-ZERO 
		{
			point_properties.axis_location_aab[0] = '\0'; //A Point Lying In ANY oF The 4 Quadrant Cannot Be Lying On Any Of The Co-ordinate Axes.... 

			if (point.x_aab > 0 && point.y_aab > 0)  // 'X' IS +ve AND 'Y' Is +ve
				point_properties.quadrant_aab = 1;

			else if (point.x_aab < 0 && point.y_aab < 0) // 'X' Is -ve AND 'Y' IS +ve
				point_properties.quadrant_aab = 2;

			else if (point.x_aab < 0 && point.y_aab < 0) // 'X' Is -ve AND 'Y' Is -ve
				point_properties.quadrant_aab = 3;

			else                                    // 'X' Is +ve AND Is -ve
				point_properties.quadrant_aab = 4;

			printf("The Point Lies In Quadrant Number %d !!! \n\n", point_properties.quadrant_aab);

		}
	}

	return(0);
}