#include <stdio.h>
#include <math.h>
struct circle{
	int x;
	int y;
	float r;
}c1,c2;
int main()
{
float d,rsum;
printf("give coords of centre\n");
scanf("%d%d",&c1.x,&c1.y);
printf("give radius\n");
scanf("%f",&c1.r);
printf("give coords of centre\n");
scanf("%d%d",&c2.x,&c2.y);
printf("give radius\n");
scanf("%f",&c2.r);
d=sqrt(pow((c1.x-c2.x),2) + pow((c1.y-c2.y),2));
rsum=c1.r+c2.r;
if (rsum>d)
{
printf("Circles intersect\n");
}
else
{
printf("Circles dont intersect\n");
}
return 0;
}

