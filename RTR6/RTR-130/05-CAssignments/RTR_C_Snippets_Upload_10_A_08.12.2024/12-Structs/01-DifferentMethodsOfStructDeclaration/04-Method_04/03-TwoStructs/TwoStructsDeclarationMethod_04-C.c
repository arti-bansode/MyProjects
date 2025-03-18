#include<stdio.h>

//Defining STRUCT
struct MyPoint
{
	int x_aab;
	int y_aab;
};

//DEFINING STRUCT
struct MyPointProperties
{
	int quadrant_aab;
	char axis_location_aab[10];
};

int main(void)
{
	//variable declarations
	struct MyPoint point; //declaring a single variable of type 'struct MyPoint' locally....

	struct MyPointProperties point_properties; //declaring a single variable of type 'struct MyPointProperties' locally...

	//code
	//User Input For The Data Member Of 'MyPoint' variable 'point_A'
	printf("\n\n");
	printf("Enter X-Coordinates For A Point : ");
	scanf("%d", &point.x_aab);
	printf("Enter Y-Coordinates For A Point : ");
	scanf("%d", &point.y_aab);

	printf("\n\n");
	printf("Point Co-Ordinates (x, y) Are : (%d, %d) !!!\n\n", point.x_aab, point.y_aab);

	if (point.x_aab == 0 && point.y_aab == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point.x_aab, point.y_aab);
	else //Atleaast One Of The Two Value (either 'X' or 'Y' or BOTH) Is a non-zero value...
	{
		if (point.x_aab == 0) //If 'X' IS ZERO OBIVIOUSLY 'Y' Is The Non-Zero Value 
		{
			if (point.y_aab < 0) //If 'Y' IS -ve
				strcpy(point_properties.axis_location_aab, "Negative Y");

			if (point.y_aab > 0) //If 'Y' IS +ve
				strcpy(point_properties.axis_location_aab, "Positive Y");

			point_properties.quadrant_aab = 0; //A Point Lying On Any Of The Coordinates Axes Is NOT Part Of ANY Quadarant...
			printf("The Point Lies On The Axis !!!\n\n", point_properties.axis_location_aab);
		}
		else if (point.y_aab == 0) //If 'Y' Is Zero ...OBIVIOUSLY 'X' Is The NON-ZERO VALUE
		{
			if (point.x_aab < 0) // If 'X' Is -ve
				strcpy(point_properties.axis_location_aab, "Negative X");

			if (point.x_aab > 0) //If 'X' IS +ve
				strcpy(point_properties.axis_location_aab, "Positive X");

			point_properties.quadrant_aab = 0; //A Point Lying On Any Of The Coordinates Axes Is NOT A Part Of Any Quadrent..
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location_aab);
		}
		else //BOTH 'X'AND 'Y' ARE NON ZERO
		{
			point_properties.axis_location_aab[0] = '\0'; //A Point Lying In Any Of The Quadrant Cannot Be Lying On Any Of The Co-ordinates Axes...

				if (point.x_aab > 0 && point.y_aab > 0) //'X' IS -ve AND 'Y' Is +ve
					point_properties.quadrant_aab = 1;

				else if (point.x_aab < 0 && point.y_aab > 0) //'X' Is -ve AND 'Y' Is +ve
					point_properties.quadrant_aab = 2;

				else if (point.x_aab < 0 && point.y_aab < 0) //'X' Is -ve AND 'Y' Is -ve
					point_properties.quadrant_aab = 3;

				else                                // 'X' Is +ve AND 'Y' Is -ve
					point_properties.quadrant_aab = 4;

			printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant_aab);


		}
	}
	return(0);
}