#include<stdio.h>
#include<math.h>
/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */
 typedef struct circle{
 int x,y;
 float r;
 } circle;

 int IsIntersectingCircle(struct circle c1,struct circle c2){
 float a,b,c;
 a=pow(c1.x-c2.x,2);
 b=pow(c1.y-c2.x,2);
 c=pow(a+b,0.5);
 if(c<=c1.r+c2.r) printf("circles intersect");
 else printf("circles does not intersect");
}
 int main(){
 circle c1,c2;
 printf("enter the x,y,r values of circle 1: ");
 scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
 printf("enter the x,y,r values of circle 2: ");
 scanf("%d %d %f",&c2.x,&c2.y,&c2.r);

 IsIntersectingCircle(c1,c2);
 return 0;
 }
