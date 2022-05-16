/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
#include<math.h>
int main()
{
    // defining the coefficients of line
      int a,b,c;
      int p,q,r;
      int x,y,z;
      printf(" Enter the coefficient of Line1 a,b,c: ");
      scanf("%d%d%d",&a,&b,&c);
      printf(" Enter the coefficient of Line2 p,q,r: ");
      scanf("%d%d%d",&p,&q,&r);
      printf("Enter the coefficient of Line3 x,y,z:");
      scanf("%d%d%d", &x,&y,&z);
      int l,m; //point of intersection of line 1&2 using cross multiplication
      l=(b*r-q*c)/(a*q-b*p);
      m=(p*c-a*r)/(a*q-b*p);
      printf("point of intersection (l,m)=(%d,%d)\n",l,m);
      int d,e;
      //point of intersection of line 2&3 using cross multiplication
      d= (q*z-y*r)/(p*y-x*y);
      e= (r*x-p*z)/(p*y-x*y);
      printf("point of intersection (d,e)=(%d,%d)\n",d,e);
      int h,j;
      //point of intersection of line 3&1 using cross multiplication
      h=(y*c-b*z/x*b-a*y);
      j=(z*a-x*c/x*b-a*y);
      printf("point of intersection (h,j)=(%d,%d)\n",h,j);

      {
          if (b/a==q/p==y/x);
          printf("lines are parallel");
      }
       {//Calculating sides' lengths
       int A,B,C,s,T;
A = sqrt(pow(l-d,2) + pow(m-e,2));
B = sqrt(pow(d-h,2) + pow(e-j,2));
C = sqrt(pow(h-l,2) + pow(j-m,2));
printf(" Sides lengths = %d %d %d\n",A,B,C);
s=(A+B+C)/2;
T = sqrt((s)*(s-A)*(s-B)*(s-C)); //using herons formula
printf("Area of the triangle= %d\n ",T);

      }

      return 0;
}
