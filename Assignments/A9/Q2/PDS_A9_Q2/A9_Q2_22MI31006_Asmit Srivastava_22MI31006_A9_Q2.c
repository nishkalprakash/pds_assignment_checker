#include<stdio.h>
#include<math.h> //using pow and sqrt 
struct circle{
int x;
int y;
float r;
};
int IsIntersectingCircle(struct circle c1,struct circle c2);
int main(){
struct circle a,b;
printf("Enter the coordinates of center and the radius of circle 1");
scanf("%d %d %f" ,&a.x,&a.y,&a.r);
printf("Enter the coordinates of center and the radius of circle 2");
scanf("%d %d %f" ,&b.x,&b.y,&b.r);
IsIntersectingCircle(a,b);//function call
return 0;
}



int IsIntersectingCircle(struct circle c1,struct circle c2){
float distance;
float radius;
distance=sqrt(pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2));// using formula
radius=c1.r+c2.r;
if(distance<radius){
printf("Circles intersect"); }
else {
printf("circles don't intersect");}
return 0;
} 

