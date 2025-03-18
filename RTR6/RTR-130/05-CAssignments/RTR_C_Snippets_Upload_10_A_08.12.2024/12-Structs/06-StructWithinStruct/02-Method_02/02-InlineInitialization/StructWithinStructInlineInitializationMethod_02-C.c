#include<stdio.h>
struct MyPoint
{
	int x_aab;
	int y_aab;
};

struct Rectangle
{
	struct MyPoint point_01;
	struct MyPoint point_02;
};

struct Rectangle rect = { {2,3}, {5,6} };

int main(void)
{
	//variaable declarations
	int length_aab, breadth_aab, area_aab;

	//code

	length_aab = rect.point_02.y_aab - rect.point_01.y_aab;
	if (length_aab < 0)
		length_aab = length_aab * -1;

	breadth_aab = rect.point_02.x_aab - rect.point_01.x_aab;
	if (breadth_aab < 0)
		breadth_aab = breadth_aab * -1;

	area_aab = length_aab * breadth_aab;

	printf("\n\n");
	printf("Length Of Rectangle = %d\n\n", length_aab);
	printf("Breadth Of Rectangle = %d\n\n", breadth_aab);
	printf("Area Of Rectangle = %d\n\n", area_aab);

	return(0);
}