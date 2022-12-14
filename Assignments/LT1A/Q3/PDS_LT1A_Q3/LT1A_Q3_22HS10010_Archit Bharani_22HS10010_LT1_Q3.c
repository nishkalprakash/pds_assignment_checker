#include<stdio.h>
#include<math.h>
int main()
{
int i,x[3],y[3],max,min;
double a,b,c,d,e,f,t;
for(i=0;i<3;i++)
{
printf("Enter value of x and y coordinates\n");
scanf("%d %d",&x[i],&y[i]);
}
d=((x[0]-x[1])*(x[0]-x[1])) +((y[0]-y[1])*(y[0]-y[1]));
e=((x[1]-x[2])*(x[1]-x[2]))+((y[1]-y[2])*(y[1]-y[2]));
f=((x[2]-x[0])*(x[2]-x[0]))+((y[2]-y[0])*(y[0]-y[0]));
a=pow(d,0.5);
b=pow(e,0.5);
c=pow(f,0.5);

if(a>=b && a>=c && a<b+c)
printf("Invalid");
else if (a>=b && b>=c && b<a+c)
printf("Invalid");
else if (aa>=b && c>=b && c<a+b)
printf("Invalid");
else if (a<=b && a<=c && b>=c && b<a+c)
printf("Invalid");
else if (a<=b && a<=c && c>=b && c<a+b)
printf("Invalid");
else if (a*a ==b*b +c*c || b*b ==c*c + a*a || c*c== b*b +a*a)
printf("Right Angled");
return 0;
}
return 0;
}
