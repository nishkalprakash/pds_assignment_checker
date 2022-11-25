#include<stdio.h>
#include<math.h>

int main()

{
    double a,b,c;
    printf("formula for speed of light:1/sqrt(a*b)\n");
    printf("give the values of a and b:");
    scanf("%lf %lf",&a,&b);
    c=1/sqrt(a*b);
    printf("speed of light is:%2.e",c);
 
  return 0;
 
}
    
