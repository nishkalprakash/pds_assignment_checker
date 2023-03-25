#include<stdio.h>
int main()
{
 double x1,x2,x3;
 double y1,y2,y3;
 double z1,z2,z3;
 printf("A(x1,y1,z1) : ");
 scanf("%lf %lf %lf",&x1,&y1,&z1);
 printf("B(x2,y2,z2) : ");
 scanf("%lf %lf %lf",&x2,&y2,&z2);
 printf("C(x3,y3,z3) : ");
 scanf("%lf %lf %lf",&x3,&y3,&z3);
 printf("A(x1,y1,z1) : (%lf %lf %lf) \n",x1,y1,z1);
 printf("B(x2,y2,z2) : (%lf %lf %lf) \n",x2,y2,z2);
 printf("C(x3,y3,z3) : (%lf %lf %lf) \n",x3,y3,z3);
 double d = x1*((y2*z3)-(y3*z2))-y1*((x2*z3)-(x3*z2))+z1*((x2*y3)-(x3*y2));
 if(d == 0)
     printf("The given three points are collinear");
  else
     printf("The given three points are not collinear");
 return 0;
}
