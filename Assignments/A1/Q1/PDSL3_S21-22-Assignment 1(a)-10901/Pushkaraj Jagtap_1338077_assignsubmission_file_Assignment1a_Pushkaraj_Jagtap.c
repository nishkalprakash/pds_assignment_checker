/*  Name        = Pushkaraj Jagtap
    Roll no.    = 21MF3IM12
    Package     = Codeblock
    Assign class= 5
    Assign no.  = 1(a)
*/

#include<stdio.h>
int main()
{
  float a,u,alpha,t,distance;
  printf("Enter the values of a, u, alpha in order:");
  scanf("%f%f%f",&a,&u,&alpha);

  printf("Enter the time:");
  scanf("%f",&t);

  distance=(u*t+alpha*t*t*0.5)+a;
  printf("Distance from origin:%f",distance);

}
