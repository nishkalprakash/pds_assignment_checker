/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
float point(float,float,float,float,float,float);
float distance(float,float,float,float);
float area (float,float,float,float,float,float) ;
int main()
{ float a1,a2,a3,b1,b2,b3,c1,c2,c3,x1,y1,x2,y2,x3,y3,a,b,c,resarea;
printf("enter the coefficients of lines");
scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f",&a1,&a2,&a3,&b1,&b2,&b3,&c1,&c2,&c3);
if((a1/a2)!=(b1/b2)){
point(a1,a2,b1,b2,c1,c2);
x1=x[0];
y1=x[1];
printf("the point of intersection between l1 and l2 is %f, %f",x1,y1);}
else( printf("the lines 1 and 2 r not intersecting"));
if((a2/a3)!=(b2/b3)){
point(a2,a3,b2,b3,c2,c3);
x2=x[0];
y2=x[1];
printf("the point of intersection between l2 and l3 is %f, %f",x2,y2);}
else( printf("the lines  2 n 3 r not intersecting"));
if((a3/a1)!=(b3/b1)){
point(a3,a1,b3,b1,c3,c1);
x3=x[0];
y3=x[1];
printf("the point of intersection between l3 and l1 is %f, %f",x3,y3);}
else( printf("the lines r not intersecting"));
 a=distance (x1,y1,x2,y2);
 printf("distance between points 1 qand 2 is %f",a);
 b=distance (x2,y2,x3,y3);
 printf("distance between points 1 qand 2 is %f",a);
 c=distance (x3,y3,x1,y1);
 printf("distance b2tween points 1 qa3d 2 is %f",a);
 resarea=area(x1,y1,x2,y2,x3,y3);
}
float point(float a1,float a2,float b1,float b2,float c1,float c2){
float x[2];
x[0]=(b2*c1-b1*c2)/(b2*a1-b1*a2);
x[1]=(c2*a1-c1*a2)/(b2*a1-b1*a2);
 return x[];
}
float distance(float x1,float y1,float x2,float y2){
 return (sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
float area (float x1,float y1,float x2,float y2,float x3,float y3){
    float d;
    d=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
}
