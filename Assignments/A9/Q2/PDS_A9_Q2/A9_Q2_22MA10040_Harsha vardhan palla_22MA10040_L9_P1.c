/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:9
program 5
 */
#include <stdio.h>
#include <math.h>
typedef struct{
int xval;
int yval;
float radius;
}circle;
int intersectingcircle(circle,circle);
int intersectingcircle(circle c1,circle c2){
 float d;
 d=sqrt(pow((c1.xval-c2.xval),2)+pow((c1.yval-c2.yval),2));
if(d<(c1.radius+c2.radius)) return 1;
else return 0;
}
int main(){
circle c1,c2;
int n;
printf("x y r\n");
scanf("%d %d %f",&c1.xval,&c1.yval,&c1.radius);
scanf("%d %d %f",&c2.xval,&c2.yval,&c2.radius);
n=intersectingcircle(c1,c2);
if(n==1) printf("Circles intersect\n");
if(n==0) printf("Circles Do not intersect\n");
return 0;
}





