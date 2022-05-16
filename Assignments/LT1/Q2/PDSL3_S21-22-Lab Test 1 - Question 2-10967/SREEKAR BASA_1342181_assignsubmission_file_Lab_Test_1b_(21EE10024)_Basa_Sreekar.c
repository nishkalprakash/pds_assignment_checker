/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_1
Question    : 2
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i,a,b,c,n;
    float x,y,x0,x1 ;
    printf(" Enter x0 : ");
    scanf("%f",&x0);
    printf(" Enter the tolernce limiting  :");
    scanf("%f",&x);
    printf("Enter no.of iterations : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      x1 = x0 - ((pow(x0,3)-25)/(3*pow(x0,2))) ;
      printf("Iteration_%d ; x0 = %f ; x1 = %f",i+1,x0,x1);
      if ((fabs(x0-x1)<x))
      {
          x0 = x1 ;
          break;
      }
      x0 = x1;
      printf("\n");
    }
    printf(" \n The square root is : %f",x0);
    return 0;
}
