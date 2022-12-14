/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002

set :A                           */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float x1,x2,x3,y1,y2,y3;
double a,b,c,d,A,B,C;    // declaring variables i.e the coordinates
printf("enter the first x coordinate\n");
scanf("%f",&x1);
printf("enter the first y coordinate\n");
scanf("%f",&y1);                         // reading the coordinates
printf("enter the 2nd x coordinate\n");
scanf("%f",&x2);
printf("enter the 2nd y coordinate\n");
scanf("%f",&y2);
printf("enter the 3rd x coordinate\n");
scanf("%f",&x3);
printf("enter the 3rd y coordinate\n");
scanf("%f",&y3);
A=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
B=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
C=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

if(a+b>c && b+c>a && c+a>b){   //using if else
printf("the triangle is ");

if(a>=b && a>=c){
d=B+ C -A;
if (d<0){
printf("obtuse angled\n");
}
if (d==0){
printf("right angled\n");         // printing the type of triangle
}
if (d>0){
printf("acute angled\n");
}
}

if(b>=c && b>=a){
d=A+ C -B;
if (d<0){
printf("obtuse angled\n");     // printing the type of triangle
}
if (d==0){
printf("right angled\n");
}
if (d>0){                    // using if else
printf("acute angled\n");
}
}
if(c>=a && c>=b){
d=A+ B -C;
if (d<0){
printf("obtuse angled\n");   // printing the type of triangle
}
if (d==0){
printf("right angled\n");
}
if (d>0){
printf("acute angled\n");
}
}

}
else{
printf("invalid\n");
}
return 0;
}
















