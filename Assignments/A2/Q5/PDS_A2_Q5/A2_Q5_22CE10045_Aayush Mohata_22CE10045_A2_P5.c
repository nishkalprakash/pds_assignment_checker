#include<stdio.h>
#include<math.h>
int main()
{
	int y,n;
	float dis;
	scanf("%d %d",&y,&n);
	dis=y+((1-pow(0.25,n-1)))*y*2)/3;
	printf ("Total distance travelled by the ball in %d time is %f",n,dis);
	return 0;
}
