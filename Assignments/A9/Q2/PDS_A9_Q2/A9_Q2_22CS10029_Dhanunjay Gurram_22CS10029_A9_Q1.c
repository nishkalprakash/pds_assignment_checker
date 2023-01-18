/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:9*/
#include <stdio.h>
#include <math.h>
typedef struct{
	int xcoord;                                   
	int ycoord;
	float radius;
}circle;
int IsIntersectingCircle(circle,circle);
int IsIntersectingCircle(circle c1,circle c2){
	float d;                                                                 //d=distance between centers
	d=sqrt(pow((c1.xcoord-c2.xcoord),2)+pow((c1.ycoord-c2.ycoord),2));
	if (d<(c1.radius+c2.radius)) return 1;                                   //returns 1 if intersects 
	else return 0;
}
int main(){
    circle c1,c2;
    int n; 
	printf("x y r\n");
	scanf("%d %d %f",&c1.xcoord,&c1.ycoord,&c1.radius);
	scanf("%d %d %f",&c2.xcoord,&c2.ycoord,&c2.radius);
	n=IsIntersectingCircle(c1,c2);
	if (n==1) printf("Circles Intersect\n");
	else if (n==0) printf("Circles DON'T Intersect\n");
	return 0;
}