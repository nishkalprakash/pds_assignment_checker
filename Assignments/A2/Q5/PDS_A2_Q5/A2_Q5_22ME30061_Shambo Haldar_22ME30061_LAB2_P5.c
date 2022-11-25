/* This program calculates the distance travelled by the ball after n-th bounce */
#include<stdio.h>
#include<math.h>
int main()
{
	int h,n,d;
	scanf("%d%d",&h,&n);
	d = h + (h*(1 - pow((0.5),n))/(1 - (1/2)));
	printf("Distance travelled by the ball =%d",d);
	return 0;
}

