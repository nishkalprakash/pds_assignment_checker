#include <stdio.h>
#include <math.h>

int main()
    {
      int a,b,c;
      float d,x1,x2;
      printf("Enter the co-efficients\n");
      scanf("%d%d%d", &a,&b,&c);
      d=sqrt(b*b-4*a*c);
      x1=(-b+d)/2*a;
      x2=(-b-d)/2*a;
      printf("The roots are %f and %f\n", x1,x2);
      return 0;
    }
 
