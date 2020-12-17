#include <stdio.h>

int main()
{
	int a, b, c, d, a1, b1, c1, d1, p, q;

	//taking input from user for bottom left and top right corner

	printf("enter the coordinates of bottom-left corner\n");
	scanf("%d%d", &a, &b);

	printf("enter the coordinates of top-right corner\n");
	scanf("%d%d", &c, &d);

	//evaluating other two coordinates

	a1 = a;
	b1 = d;
	c1 = c;
	d1 = b;

	// top-left corner is (a1,b1) and bottom right (c1,d1)

	printf("The four corners of the rectangle are (%i,%i), (%i,%i), (%i,%i), (%i,%i)\n", a, b, a1, b1, c, d, c1, d1);

	//taking the coordinates of the point to check from user

	printf("Enter the coordinates of the point you want to check\n");
	scanf("%d%d", &p, &q);

	//checking wether point is inside rectangle or not

	if ( p>a && p<c && q>b && q<d )
	{
		printf("Point (%i,%i) is inside the rectangle\n", p, q);
	}

	else
	{
		printf("Point (%i,%i) is not inside the rectangle\n", p, q);
	}

}