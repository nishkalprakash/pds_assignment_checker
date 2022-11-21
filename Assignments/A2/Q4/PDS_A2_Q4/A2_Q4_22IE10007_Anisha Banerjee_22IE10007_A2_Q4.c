#include<stdio.h>
#include<math.h>
int main()
  {
    double c,u,e,p;
    printf("Enter the required values\n");
    scanf("%lf %lf",&u,&e);
    p = sqrt(u*e);
    c=1/p;
    printf("The speed of light is %e\n",c);
    return 0;
   }
