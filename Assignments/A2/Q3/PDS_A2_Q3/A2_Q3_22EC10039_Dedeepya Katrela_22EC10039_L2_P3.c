#include<stdio.h>
#include<math.h>

int main ()
{
    int a,b,c,p,q;
    printf("enter coefficients a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("your equation is:%dx*x+%dx+%d",a,b,c);
    p=(-b+sqrt(b*b-4*a*c))/2*a;
    q=(-b-sqrt(b*b-4*a*c))/2*a;
    printf(" your roots are :%d %d",p,q);
    
    
   return 0;
}
    
    
    
