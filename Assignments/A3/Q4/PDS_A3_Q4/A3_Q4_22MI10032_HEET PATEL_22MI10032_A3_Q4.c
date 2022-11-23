/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 3
Description : To compute and print the electric bill
*/
#include<stdio.h>
int main()
{
float f ;
printf("Please enter the units consumed\n");
scanf("%f",&f);
if(f<=100){
float a = 60.0;
printf("Electric bill : 60\n");
}
if(f>100 && f<=200){
float b = 50.00 + (f-100)*0.75 ;
float c = 1.2*b;
printf("Electric bill : %f\n" , c );
}
if(f>200 && f<=300){
float d = 50.00 + 100*0.75 + (f-200)*1.20 ;
float e = 1.2*d;
printf("Electric bill : %f\n" , e );
}
if(f>300){
float g = 50.00 + 100*0.75 + 100*1.20 + (f-300)*1.50;
float h = 1.2*g;
printf("Electric bill : %f\n" , h);
}
return 0 ;
}
