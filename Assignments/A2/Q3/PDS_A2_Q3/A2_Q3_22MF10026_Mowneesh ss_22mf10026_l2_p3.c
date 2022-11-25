#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a, b, c, root1, root2;
scanf("%d %d %d ", &a, &b,&c);
root1 = (-b) + sqrt((b*b)-(4*a*c));
root1 = root1/(2*a);
root2 = (-b) - sqrt((b*b)-(4*a*c));
root2 = root2/(2*a);
printf("the roots are %d %d \n", root1, root2);
return 0;
} 
 
