#include <stdio.h>
#include <math.h>
int main ()
{
 int y,n;
 double dist;
 scanf("%d %d",&y,&n); // y is initial height,n is count
 dist= y*(1+ (2/3.0)*(1-(pow(0.25,n))));
 printf("The total distance travelled by the ball is %lf\n",dist);
return 0;
} 

