#include <stdio.h>

#include <math.h>
int main ()
{
 int a,b,c,root1,root2;
 scanf("%d %d %d",&a,&b,&c);
 root1 = (-b)+sqrt((b*b)-(4*a*c)); // header should be mentioned to   use sqrt
 root1 = root1/(2*a);
 root2 = (-b)-sqrt((b*b)-(4*a*c));
 root2 = root2/(2*a);
 printf("The roots of the equation %dx^2+%dx+%d are\n %d,%d",a,b,c,root1,root2);
 
 return 0;
}
