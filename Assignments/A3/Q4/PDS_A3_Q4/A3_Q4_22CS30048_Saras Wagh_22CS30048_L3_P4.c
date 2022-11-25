/*Section 14
Roll no.:22CS30048
Name:Saras Dipak Wagh
Assignment no:3
Description:Program to check points
*/
#include<stdio.h>
int main()
{

float a,x,y,w,c,b,z;
printf("Input the no. of electric units:\n");
scanf("%f",&a);
if(a<100)
{
b=a*0.5;
printf("Electric bill is %f.\n",b);
}
if(a>=100&&a<=200)
{
x=100*0.5;
b=(a-100)*(0.75);
y=x+b;
z=1.2*y;
printf("Electric bill is %f.\n",z);

}
if(a>=200&&a<=300)
{
x=100*0.5;
b=(100)*(0.75);
z=(a-200)*(1.2);
w=(x+y+z)*1.2;
printf("Electric bill is %f.\n",w);
}
if(a>300)
{ 
x=100*0.5;
b=(100)*(0.75);
z=(100)*(1.2);
w=(a-300)*1.5;
c=(x+b+z+w)*1.2;
printf("Electric bill is %f.\n",c);
}
return 0;
}
