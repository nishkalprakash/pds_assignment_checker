/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 9
Description : determining area of rectangle
*/
#include<stdio.h>
struct rect //structure definition
{
float bot_left_x;
float bot_left_y;
float top_right_x;
float top_right_y;
};
float Area(struct rect r1) //function definition 
{
float A=(r1.top_right_x-r1.bot_left_x)*(r1.top_right_y-r1.bot_left_y);
return A; //returning area
}
int main()
{
struct rect r;
float A;
scanf("%f %f %f %f",&r.bot_left_x,&r.bot_left_y,&r.top_right_x,&r.top_right_y);
A=Area(r); //function calling
printf("Area of rectangle = %0.2f\n", A); //print area upto 2 decimal
return 0;
}
