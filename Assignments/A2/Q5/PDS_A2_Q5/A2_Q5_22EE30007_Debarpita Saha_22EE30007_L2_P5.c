#include<stdio.h>

#include<math.h>

int main()

{

 

float e=0.5;

int y,n,d;

scanf("%d %d", &y, &n);

d= y+ 2*e*e*y*(1- pow(e, 2*n))/(1 - e*e);

printf( "distance travelled: %d", d);

return 0;

}
