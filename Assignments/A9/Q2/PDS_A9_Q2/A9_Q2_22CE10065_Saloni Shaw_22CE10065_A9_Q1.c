/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 9

Description - Program to check whether circle intersects or not
*/

#include <stdio.h>
#include<math.h>
typedef struct
{
int x;
int y;
float r;
}circle;
int IsIntersectingCircle(circle p, circle q)
{
float d;
d=sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));//applying distance formula
if(d<(p.r+q.r))
return 1;
else
return 0;
}
int main()//main function
{
circle c1,c2;
int m;
printf("x y r\n");//entering values
scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
m=IsIntersectingCircle(c1,c2);
if(m==1)//checking if circles intersect 
printf("Circles Intersect\n");
if(m==0)
printf("Circles DON'T Interesect\n");
return 0 ;
}//end of program
