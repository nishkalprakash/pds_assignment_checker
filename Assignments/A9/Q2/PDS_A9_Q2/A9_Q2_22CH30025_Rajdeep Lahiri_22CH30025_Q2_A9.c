#include <stdio.h>
#include <math.h>
typedef struct circle
{
int x;
int y;
float r;
}circle;
void isintersecting(circle c1,circle c2)
{
float centdist = sqrt((c1.x-c2.x)*(c2.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
if(centdist<=(c1.r+c2.r))
	printf("circles intersect");
else 
	printf("circles dont intersect");
}
int main()
{ circle c1;
 circle c2;
printf("enter the details for the first circle");
scanf("%d",&c1.x);
scanf("%d",&c1.y);
scanf("%f",&c1.r);
printf("enter the details for the second circle");
scanf("%d",&c2.x);
scanf("%d",&c2.y);
scanf("%f",&c2.r);
isintersecting(c1,c2);
return 0;
}




