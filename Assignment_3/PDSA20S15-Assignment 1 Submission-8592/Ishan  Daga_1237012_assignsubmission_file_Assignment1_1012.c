#include <stdio.h>
 
int main()
{
	int c1x, c1y, c2x, c2y, c3x, c3y, c4x, c4y, x, y;
	printf("Enter bottom left corner:\n");
	scanf("%d%d", &c1x, &c1y);
	printf("Enter top right corner 3:\n");
	scanf("%d%d", &c3x, &c3y);
	c2x=c1x;
	c2y=c3y;
	c4x=c3x;
	c4y=c1y;
	printf("The four corners of the rectangle are (%d, %d) (%d, %d) (%d, %d) (%d, %d)\n", c1x, c1y, c2x, c2y, c3x, c3y, c4x, c4y);
	printf("Enter point: \n");
	scanf("%d%d", &x, &y);
	if((x>c1x)&&(x<c3x))
	{
		if((y>c1y)&&(y<c3y))
		{
			printf("The point (%d, %d) is an interior point.", x, y);
		}
		else
		{
			printf("The point (%d, %d) is an exterior point.", x, y);
		}
	}
	else
	{
		printf("The point (%d, %d) is an exterior point.", x, y);
	}
	return 0;
}
