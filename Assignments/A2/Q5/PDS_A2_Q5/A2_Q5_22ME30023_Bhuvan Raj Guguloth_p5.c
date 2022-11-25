#include<stdio.h>
#include<math.h>

int main()
{
 float pow1, y, d; int n;
 printf("Enter the intial height of the ball: ");
 scanf("%f",&y);
 printf("Enter the number of times ball bounced: ");
 scanf("%d",&n);
 pow1=pow(0.25,n-1);
 d= y*((5.0/3.0)-(2.0/3.0)*pow1);
 printf("total distance travalled by ball = ");
 return 0;
}

