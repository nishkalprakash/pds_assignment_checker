/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
Operating System: windows
*/
#include<stdio.h>
#include<math.h>
float Pointx(float A[],float B[])
{float x,y;
x=((B[2]*A[1])-(B[1]*A[2]))/((B[0]*A[1])-(B[1]*A[0]));
y=(A[2]-(A[0]*x))/A[1];
return (x);
}
float Pointy(float A[],float B[])
{float x,y;
x=((B[2]*A[1])-(B[1]*A[2]))/((B[0]*A[1])-(B[1]*A[0]));
y=(A[2]-(A[0]*x))/A[1];
return (y);
}
float Length(float P[],float Q[])
{float l;
l=sqrt(((P[1]-Q[1])*(P[1]-Q[1]))+((P[0]-Q[0])*(P[0]-Q[0])));
return (l);
}
float Area(float a,float b,float c)
{float S,area;
S=(a+b+c)/2;
area=sqrt((S*(S-a)*(S-b)*(S-c)));
return (area);
}
int main()
{
float a[3], b[3], c[3], p1[2], p2[2], p3[2],l1,l2,l3,A;
printf("please enter the coefficents of 1st line in a b c order:\n");
scanf("%f%f%f",&a[0],&a[1],&a[2]);
printf("please enter the coefficents of 2nd line in a b c order:\n");
scanf("%f%f%f",&b[0],&b[1],&b[2]);
printf("please enter the coefficents of 3rd line in a b c order:\n");
scanf("%f%f%f",&c[0],&c[1],&c[2]);
if((a[1]/a[0])==(b[1]/b[0])||(c[1]/c[0])==(b[1]/b[0])||(a[1]/a[0])==(c[1]/c[0]))
{printf("two lines are parallel");return 0;}
p1[0]= Pointx(a,b);
p1[1]= Pointy(a,b);
p2[0]= Pointx(c,a);
p2[1]= Pointy(c,a);
p3[0]= Pointx(b,c);
p3[1]= Pointy(b,c);
l1= Length(p1,p2);
l2= Length(p2,p3);
l3= Length(p3,p1);
A= Area(l1,l2,l3);
printf("Point of intersection between L1 and L2=(%f,%f)\n",p1[0],p1[1]);
printf("Point of intersection between L2 and L3=(%f,%f)\n",p2[0],p2[1]);
printf("Point of intersection between L1 and L3=(%f,%f)\n",p3[0],p3[1]);
printf("side lengths=(%f,%f,%f)\n",l1,l2,l3);
printf("area=%f",A);
return 0;
}
