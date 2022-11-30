#include<stdio.h>
int main()
{
int t,y,z,w;
double a,b,c,pa,pb,pc;
//p(x)= t*x^3 + y*x^2 +z*x +w;
printf("Enter coefficient of x^0");
scanf("%d",&w);
printf("Enter coefficient of x^1");
scanf("%d",&z);
printf("Enter coefficient of x^2");
scanf("%d",&y);
printf("Enter coefficient of x^3");
scanf("%d",&t);
printf("Enter value of a such that a<b ");
scanf("%lf",&a);
printf("Enter value of b such that a<b ");
scanf("%lf",&b);
c= pb*(b-a)/(pb-pa)+b;
pa= t*a+y*a+z*a+w*a;
pb= t*b+y*b+z*b+w*b;
pc= t*c+y*c+z*c+w*c;
if (pa/pb<0 && pc<0.001)
{
printf("root is %lf",pc);
}
else if (pa/pc >0 && pa/pb<0)
{
printf("root is %lf",pa);
}
else if (pa/pc<0 && pa/pb<0)
{
printf("root is %lf",pb);
}
return 0;
}

