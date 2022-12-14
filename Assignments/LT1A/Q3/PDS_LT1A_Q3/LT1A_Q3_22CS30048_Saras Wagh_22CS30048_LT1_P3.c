#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double side(int x1,int y1,int x2,int y2)
{
double f=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
return f;
}
double d(int a,int b,int c)
{
double h=((a*a+b*b-c*c)/(2*a*b));
return (h);
}
int main()
{
int A1,A2,B1,B2,C1,C2;
double a,b,c,max;
printf("User enter the three coordinates of triangle:\n");
printf("Enter the coordinates (x,y):\n");
printf("1.\n");

printf("Enter the value of x:\n");
scanf("%d",&A1);
printf("Enter the value of y:\n");
scanf("%d",&A2);
printf("2.\n");

printf("Enter the value of x:\n");
scanf("%d",&B1);
printf("Enter the value of y:\n");
scanf("%d",&B2);
printf("3.\n");

printf("Enter the value of x:\n");
scanf("%d",&C1);
printf("Enter the value of y:\n");
scanf("%d",&C2);
printf("Side opposite to (A1,A2) is a.\nSide opposite to (B1,B2) is b.\nSide opposite to (C1,C2) is c.\n");
printf("The sides are:\na=%lf\nb=%lf\nc=%lf\n",side(B1,B2,C1,C2),side(A1,A2,C1,C2),side(B1,B2,A1,A2));
a=side(B1,B2,C1,C2);
b=side(A1,A2,C1,C2);
c=side(B1,B2,A1,A2);
if(a>=b&&a>=c)
{
printf("The maximum of the sides is a=%lf\n",a);
max=a;
if(max<(b+c))
printf("This triangle satisfies the triangle inequality\n");
else
printf("Invalid\n");
}
else if(b>=c&&b>=a)
{

printf("The maximum of the sides is b=%lf\n",b);
max=b;
if(max<(a+c))
printf("This triangle satisfies the triangle inequality\n");
else
printf("Invalid\n");
}
else
{
printf("The maximum of the sides is c=%lf\n",c);
max=c;
if(max<(b+a))
printf("This triangle satisfies the triangle inequality\n");
else
printf("Invalid\n");
exit(1);
}
if(d(a,b,c)==0)
printf("Right Angled");
else if(d(a,b,c)<0||d(a,b,c)<0||d(a,b,c)<0)
printf("Obtuse angled");
else
printf("Acute Angled");

return 0;
}


