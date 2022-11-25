#include<stdio.h>
#include<math.h>
int main()
{
int y,n;
float a,b,c;
printf("enter the value of y:"); //y is height
scanf("%d",&y);
printf("enter the value of n:");//n is the no of time it bounces
scanf("%d",&n);
printf("entered values of y and h are %d and %d", y,n);

a=pow(4,-n);
b=2*y*(1-a);
c=y+b/3;
printf("total distance travelled by ball is %f", c);



return 0;
}
