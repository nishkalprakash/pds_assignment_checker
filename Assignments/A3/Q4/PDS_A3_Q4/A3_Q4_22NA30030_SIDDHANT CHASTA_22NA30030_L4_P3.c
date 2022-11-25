/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 3 
Description : Program to compute the electric bill 
*/

#include<stdio.h>
int main(){
float u;
printf("enter the units : ");
scanf("%f",&u);
 if(u>=100 && u<=200)
{ printf("bill is : %f",50+(u-100)*0.75+0.2*(50+(u-100)*0.75));
}
else if(u>200 && u<=300)
{
printf("bill is : %f",50+75+(u-200)*1.2+0.2*(50+75+(u-200)*1.2));
}
else(u>300 && u<=1000);
{
printf("bill is : %f",50+75+120+(u-300)*1.5+0.2*(50+75+120+(u-300)*1.5));
}
return 0;
}
