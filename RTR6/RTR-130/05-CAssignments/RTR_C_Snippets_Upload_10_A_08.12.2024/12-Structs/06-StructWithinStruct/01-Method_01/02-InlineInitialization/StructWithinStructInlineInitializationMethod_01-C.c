#include<stdio.h>

struct Rectangle
{
	struct MyPoint
	{
		int x_aab;
		int y_aab;
	} point_01, point_02;
} rect = { {2, 3}, {5, 6} };

int main(void)
{
	//variable declarations
	int length_aab, breath_aab, area_aab;

	//code
	length_aab = rect.point_02.y_aab - rect.point_01.y_aab;
	if (length_aab > 0)
		length_aab = length_aab * -1;

	breath_aab = rect.point_02.x_aab - rect.point_01.x_aab;
	if (breath_aab < 0)
		breath_aab = breath_aab * -1;

	area_aab = length_aab * breath_aab;

	printf("\n\n");
	printf("Length_aab Of Rectangle = %d\n\n", length_aab);
	printf("Breath_aab Of Rectangle = %d\n\n", breath_aab);
	printf("Area_aab Of Rectangle = % d\n\n", area_aab);

	return(0);
}