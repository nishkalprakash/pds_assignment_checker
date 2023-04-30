#include <stdio.h>
#include <math.h>
int main(){
double x1,y1,x2,y2,x3,y3,x4,y4;
float a1,a2,a3,a4;
float mini=99999999;
printf("Enter the value of x1 and y1:");
scanf("%lf%lf",&x1,&y1);
printf("Enter the value of x2 and y2:");
scanf("%lf%lf",&x2,&y2);
printf("Enter the value of x3 and y3:");
scanf("%lf%lf",&x3,&y3);
printf("Enter the value of x4 and y4:");
scanf("%lf%lf",&x4,&y4);
a1=((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2;
a2=((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3)))/2;
a3=((x3*(y4-y1))+(x4*(y1-y3))+(x1*(y3-y4)))/2;
a4=((x4*(y1-y2))+(x1*(y2-y4))+(x2*(y4-y1)))/2;
/*a1=abs(a1);
a2=abs(a2);
a3=abs(a3);
a4=abs(a4);*/
if(a1<0) a1=-a1;
if(a2<0) a2=-a2;
if(a3<0) a3=-a3;
if(a4<0) a4=-a4;
//printf("%f %f %f %f",a1,a2,a3,a4);


if(mini>a1) mini=a1;
if(mini>a2) mini=a2;
if(mini>a3) mini=a3;
if(mini>a4) mini=a4;
if(mini==a1)
    printf("Points having the minimum area: (%lf,%lf),(%lf,%lf),(%lf,%lf)",x1,y1,x2,y2,x3,y3);
else if( mini==a2)
    printf("Points having the minimum area: (%lf,%lf),(%lf,%lf),(%lf,%lf)",x2,y2,x3,y3,x4,y4);
else if( mini==a3)
    printf("Points having the minimum area: (%lf,%lf),(%lf,%lf),(%lf,%lf)",x3,y3,x4,y4,x1,y1);
else
    printf("Points having the minimum area: (%lf,%lf),(%lf,%lf),(%lf,%lf)",x4,y4,x1,y1,x2,y2);

printf("\n");
printf("Area= %lf",mini);
printf("\n");



return 0;
}
