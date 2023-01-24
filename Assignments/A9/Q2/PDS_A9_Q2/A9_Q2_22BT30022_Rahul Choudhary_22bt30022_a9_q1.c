/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:9
description:cricles intersect or not
*/
#include<stdio.h>
struct circle
{
int x;
int y;
float r;
};
int intersect(struct circle s1, struct circle s2)
{
float d;
d=(s2.y-s1.y)*(s2.y-s1.y)+(s2.x-s1.x)*(s2.x-s1.x);
if(d<=(s1.r+s2.r)*(s1.r+s2.r))
return 1;
else
return 0;
}
int main()
{
struct circle s1,s2;
printf("x y r\n");
scanf("%d %d %f",&s1.x,&s1.y,&s1.r);
scanf("%d %d %f",&s2.x,&s2.y,&s2.r);
if(intersect(s1,s2))
printf("intersecting\n");
else
printf("not intersect\n");
return 0;
}
