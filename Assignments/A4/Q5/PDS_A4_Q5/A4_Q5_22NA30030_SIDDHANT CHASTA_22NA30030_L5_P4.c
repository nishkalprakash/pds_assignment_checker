/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 4
Description : Program to find the approximate root of a cubic polynomial, where Range of coefficients is [-5,5] 
*/

#include<stdio.h>
int main()
{
  int s,t,y,z ;     // a and b are variables and s,t,y,z are the coefficient of the cubic polynomial s.x^3 + t.x^2 + y.x + z
  printf("Enter the coefficients of the cubic poylnomnial in this order z,y,t,s: ");
  scanf("%d %d %d %d", &z, &y, &t, &s);
  
  int x; // variable
  double p(x)= s*x*x*x + t*x*x + y*x + z ; // Cubic polynomial in variable x 
  int c; // Point where 
  double a,b;
  if((p(a)>0 && p(b)<0) || (p(a)<0 && p(b)>0))
  {
  float c; // Point where thr straight line segment joining points (a,p(a)) and (b,p(b)) intersects X axis 
  
if(p(c)<0.001){
        printf("c = %f is a root ", c);
        c=b-(p(b)*(b-a))/(p(b)-p(a)) ;
}
else if ((p(c)>0 && p(a)>0) || (p(c)<0 && p(a)<0)) {
printf(" root is : %f", a);
a=c=b-(p(b)*(b-a))/(p(b)-p(a));
}
 
else ((p(c)>0 && p(b)>0) || (p(c)<0 && p(b)<0)); {
     printf("hence the root is : %f",b);
     b=c=b-(p(b)*(b-a))/(p(b)-p(a)) ;
}

}

return 0;

}
  




