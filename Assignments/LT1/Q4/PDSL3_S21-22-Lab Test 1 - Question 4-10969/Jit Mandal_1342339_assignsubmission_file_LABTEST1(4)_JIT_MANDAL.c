#include <stdio.h>



int main()
{int n,i;
float x[100],y[100];
float x_avg=0,y_avg=0,numerator=0,denominator=0;
float m,b;
printf("Enter the number of points:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("Enter the X-coordinate of %d point:",i+1);
scanf("%f",&x[i]);
x_avg+=x[i];
printf("Enter the Y-coordinate of %d point:",i+1);
scanf("%f",&y[i]);
y_avg+=y[i];
}
x_avg/=n;
y_avg/=n;
for(i=0;i<n;i++)
{
numerator+=(x[i]-x_avg)*(y[i]-y_avg);
denominator+=(x[i]-x_avg)*(x[i]-x_avg);
}
m=numerator/denominator;
b=y_avg-m*x_avg;



printf("m=%f , b=%f , line equation y=%fx+%f",m,b,m,b);




return 0;
}
