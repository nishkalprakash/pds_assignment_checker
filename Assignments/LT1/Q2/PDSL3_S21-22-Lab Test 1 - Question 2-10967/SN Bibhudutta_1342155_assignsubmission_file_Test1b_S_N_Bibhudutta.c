// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 1

#include<stdio.h>

int main()
{
    float x0,x1,tolerance,error;int iteration;
    printf("\nx0  = ");
    scanf("%f",&x0);
    printf("e= ");
    scanf("%f",&tolerance);
    printf("maxIteration = ");
    scanf("%d",&iteration);

    float func,d_func;

    //COMPUTING THE SQ ROOT

    printf("\n Iteration          x0                  x1                   Error");
    for(int i=1;(error>tolerance||i==1)&&i<=20;i++)
    {
         func=x0*x0*x0- 25;
         d_func=3*x0*x0;
         x1=x0-func/d_func;
         error=func/d_func;
         if(error<0)
         error*=-1;
         

         //PRINTING 
 
         printf("\n    %d           %f              %f               %f ",i,x0,x1,error);
         x0=x1;
    }

     printf("\nThe square root is %f", x1);

    return 0;

}