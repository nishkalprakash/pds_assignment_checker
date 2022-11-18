#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{float x1,y1,x2,y2,x3,y3,a,b,c,cosA,cosB,cosC;
printf("Enter coordinates (x1,y1)\n");
scanf("%f%f",&x1,&y1);
printf("Enter coordinates (x2,y2)\n");
scanf("%f%f",&x2,&y2);
printf("Enter coordinates (x3,y3)\n");
scanf("%f%f",&x3,&y3);
a=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
b=sqrt((y2-y3)*(y2-y3)+(x2-x3)*(x2-x3));
c=sqrt((y1-y3)*(y1-y3)+(x1-x3)*(x1-x3));
if((a+b>c)&&(b+c>a)&&(c+a>b))
{printf("This is a valid triangle\n");
cosA=(b*b+c*c-a*a)/(2*b*c);
cosB=(c*c+a*a-b*b)/(2*a*c);
cosC=(b*b+a*a-c*c)/(2*a*b);
if(cosA>0&&cosB>0&&cosC>0)
{printf("This is an acute angled triangle\n");}
if(cosA==0||cosB==0||cosC==0)
{printf("This is a right angled triangle\n");}
if(cosA<0||cosB<0||cosC<0)
{printf("This is an obtuse angled triangle\n");}
}
else
{printf("This is an invalid triangle\n");}

return 0;
}