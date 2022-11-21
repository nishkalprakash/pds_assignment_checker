#include<stdio.h>
#include<math.h>
int main()
{	/* this is code to find the distance travaled by a ball droped from a hight 
	   Y which is to be given for the nth time it touches the ground */
	int Y,n;
	printf("height from which the ball is droped Y\n");
	scanf("%d",&Y);
	printf("%d",Y);
	printf("total distance traveled by the ball for the n th time\n");
	scanf("%d",&n);
	printf("%d",n);
	printf("%f",Y*(1+2*(pow(4,n)-1)/3*pow(4,n)));
	return 0;
}
