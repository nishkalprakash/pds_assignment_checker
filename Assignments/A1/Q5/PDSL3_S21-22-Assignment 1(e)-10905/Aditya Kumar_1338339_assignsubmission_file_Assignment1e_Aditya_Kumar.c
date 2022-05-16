/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept- Mechanical Engg
Sec-3
Group-4
Assignment- 1e
Package- stdio.h
*/
#include <stdio.h>

int main()

{
    char wood; float w,b,g,t, percent; int price;
printf("Enter the type of wood you want(n/s):\n");
scanf("%c",&wood);
printf("Enter the weight in kg:\n");
scanf("%f",&w);
if(wood=='n')
{
    price = 1100;
    percent = 0.2;
}
else
{
    price = 780;
    percent = 0.15;
}
b =w * price;
g = percent * w * price;
t =(1+ percent)* w * price;
    printf("Base price =  %0.2f\n",b);
    printf("GST =         %0.2f\n",g);
    printf("Total price = %0.2f\n",t);
    return 0;
}

