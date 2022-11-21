#include<stdio.h>
#include<math.h>

int main()
{ 
     //declaring the required variables
     double u,t,x,c;
     //taking the input from the user
     scanf("%lf %lf",&u,&t);
     //evaluating the value of speed of light 
     x=sqrt(u*t);
     c=1/x;
     printf("The value of speed of light is %e",c);
     return 0;
}
     
     

