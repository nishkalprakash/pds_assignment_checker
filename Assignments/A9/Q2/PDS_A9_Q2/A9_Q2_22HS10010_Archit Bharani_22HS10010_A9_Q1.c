#include<stdio.h>
typedef struct circle{
int x;
int y; 
float r;
}circle;

int IsIntersectingCircle(circle c1,circle c2){
float f;
f=(c1.x-c2.x)*(c1.x-c2.x) +(c1.y-c2.y)*(c1.y-c2.y);   //square of distance between centre of circles
if(f<= (c1.r+c2.r)*(c1.r+c2.r))   
return 1;      
else return 0;

}
int main()
{

circle a,b;
printf("Enter x,y,r for 1st circle: ");
scanf("%d %d %f",&a.x,&a.y,&a.r);

printf("Enter x,y,r for 2nd circle: ");
scanf("%d %d %f",&b.x,&b.y,&b.r);

IsIntersectingCircle(a,b);
if(IsIntersectingCircle(a,b))
printf("Circles Intersect");
else
printf("Circles don't Intersect");
return 0;
}

