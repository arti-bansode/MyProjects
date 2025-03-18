#include<stdio.h>

int main(void)
{
	//variable declarations
	int length_aab, breadth_aab, area_aab;

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
	struct Rectangle rect;
	 
	//code
	printf("\n\n");
	printf("Enter Leftmost X-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_01.x_aab);

	printf("\n\n");
	printf("Enter Bottommost Y-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_01.y_aab);

	printf("\n\n");
	printf("Enter Rightmost X-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_02.x_aab);

	printf("\n\n");
	printf("Enter Topmost Y-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_02.y_aab);

	length_aab = rect.point_02.y_aab - rect.point_01.y_aab;
	if (length_aab < 0)
		length_aab = length_aab * -1;

	breadth_aab = rect.point_02.x_aab - rect.point_01.x_aab;
	if (breadth_aab < 0)
		breadth_aab = breadth_aab * -1;

	area_aab = length_aab * -1;

	printf("\n\n");
	printf("Length_aab Of Rectangle = %d\n\n", length_aab);
	printf("Breadth_aab Of Rectangle = %d\n\n ", breadth_aab);
	printf("Area_aab Of Rectangle = %d\n\n", area_aab);

	return(0);
}