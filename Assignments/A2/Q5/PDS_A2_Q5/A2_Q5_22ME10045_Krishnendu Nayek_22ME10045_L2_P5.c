#include<stdio.h>
#include<math.h>

int main()
{
int y,n,m,d,g=9.78;
scanf("%d %d",&y, &n);
printf("Height=%d \n",y);
printf("Ball touches the ground for the %d th time \n",n);
d=(2*y*(1-pow(0.25,n))/0.75) - y;
printf("The total distance transversed by the ball is %d",d);
return 0;
}

