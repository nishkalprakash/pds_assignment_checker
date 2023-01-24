/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 9

Description-TO FIND IF THE CIRCLES ARE INTERSECTING OR NOT
*/
#include<stdio.h>//INCLUDING PACKAGE
struct circle//DEFINING STRUCTURE
{
int x;
int y;
float r;
};
int IsIntersectingCircle(struct circle c1,struct circle c2)//METHOD TO FIND INTERSECTING CIRCLES
{
float d;
d=(c2.y-c1.y)*(c2.y-c1.y)+(c2.x-c1.x)*(c2.x-c1.x);//CALCULATING SQUARE OF DISTANCE BETWEEN CENTRES
if((d<=(c1.r+c2.r)*(c1.r+c2.r)))
return 1;
else 
return 0;
}
int main()//MAIN METHOD
{
struct circle c1,c2;
printf("x y r\n");
scanf("%d %d %f",&c1.x,&c1.y,&c1.r);//GETTING CIRCLES FROM USER
scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
if(IsIntersectingCircle(c1,c2))
printf("Circles Intersect\n");
else
printf("Circles DON'T Intersect\n");
return 0;
}
