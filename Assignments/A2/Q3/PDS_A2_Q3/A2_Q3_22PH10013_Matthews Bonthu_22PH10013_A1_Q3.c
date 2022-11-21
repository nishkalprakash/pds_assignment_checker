#include <stdio.h>
#include <math.h>

int main ( )
{
   int  a,b,c,D,root1,root2;
   printf("please enter the three coefficents of the quadratic equation");
   scanf("%d %d %d",&a,&b,&c);

    D= b*b - 4*a*c;
    root1= (-b+sqrt(D))/2*a;
    root2= (-b-sqrt(D))/2*a;

    printf("hence the roots are %d and %d",root1,root2);
return 0;
}
    
   

