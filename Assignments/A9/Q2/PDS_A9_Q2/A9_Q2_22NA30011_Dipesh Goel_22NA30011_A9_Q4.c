#include<stdio.h>
#include<math.h>
/*
    PDS LAB ASSIGNMENT - 9
    DIPESH GOEL
    22NA30011
    PROBLEM - 4
*/

typedef struct{
    int x;          // x-coordinate of centre of circle
    int y;          // y-coordinate of centre of circle
    float r;        // radius of circle
} circle;


float dist(int x1, int y1, int x2, int y2){
	// Returns the distance between two given points
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    }

int IsIntersectingCircle(circle c1, circle c2){
	// Two circles intersect if the distance between their centers is less than the sum of their radii
   if (dist(c1.x, c1.y, c2.x, c2.y) < (c1.r+c2.r)) return 1;
   else return 0;
}
int main(){

    circle c1,c2;
    printf("x   y   r\n");
    scanf("%d   %d  %f",&c1.x,&c1.y,&c1.r);
    scanf("%d   %d  %f",&c2.x,&c2.y,&c2.r);
    if (IsIntersectingCircle(c1, c2)) printf("Circles Intersect");
    else printf("Circles DON’T Intersect");

    return 1;
    }

