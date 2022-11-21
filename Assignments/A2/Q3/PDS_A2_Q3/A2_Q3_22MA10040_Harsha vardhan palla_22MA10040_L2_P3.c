/*finding the roots of a quadratic eqation*/

#include<stdio.h>

#include<math.h>

int main()

{

      int a,b,c,sqrt1,sqrt2;
      scanf("%d %d %d",&a,&b,&c);
      sqrt1=(-b+sqrt(b*b-4*a*c))/2/a;
      sqrt2=(-b-sqrt(b*b-4*a*c))/2/a;
      printf("Root1=%d",sqrt1);
      printf("Root2=%d",sqrt2);
}
