//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{
	int a, b, c, d, x, y;
	printf("Enter bottom-left coordinates\n");
	scanf("%d %d", &a, &b);
	printf("Enter top-right coordinates\n");
	scanf("%d %d", &c, &d);
	printf("Enter coordinates of point p\n");
	scanf("%d %d", &x, &y);
	if (c>a && d>b)
	{ 
		if (x==a && y==b)
			printf("p=(%d , %d) lies on the bottom left corner\n", x,y);
		else if(x==c && y==d)
			printf("p=(%d , %d) lies on the top right corner\n", x,y);
		else if(x==a && y==(d-b))
			printf("p = (%d , %d) lies on the bottom right corner\n", x,y);
		else if(x==(c-a) && y==b)
			printf("p=(%d , %d) lies on the top left corner\n", x,y);
		else if(x==a && y<d && y>b)
			printf("p =(%d , %d) lies on the left edge\n", x,y);
		else if(x==c && y<d && y>b)
			printf("p = (%d , %d) lies on the right edge\n", x,y);
		else if(y==b && x>a && x<c)
			printf("p = (%d , %d) lies on the bottom edge\n", x ,y);
		else if(y==d && x>a && x<c)
			printf("p = (%d , %d) lies on the top edge\n", x,y);
		else if(x>a && x<c && y>b && y<d)
			printf("p = (%d , %d) lies inside the rectangle\n", x,y);
		else printf("p = (%d , %d) lies outside the rectangle\n", x,y);
	}
	else 
		printf("ill formed rectangle\n");
	return 0;
}
