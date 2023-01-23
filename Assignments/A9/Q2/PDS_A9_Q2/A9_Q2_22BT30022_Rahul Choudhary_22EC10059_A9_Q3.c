/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 9
QUESTION NO. : 3
DESCRIPTION: checks whether 2 circles intersect or not
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
	int x,y;
	float r;
} circle;
int isIntersectingCircle(circle a, circle b){
	float d=pow((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y),0.5);
	float dr=a.r+b.r;
	if(d> dr)
		return 0;
	return 1;
}
int main(){
	circle a,b;
	printf("x y r\n");
	scanf("%d %d %f",&a.x,&a.y,&a.r);
	scanf("%d %d %f",&b.x,&b.y,&b.r);
	if(isIntersectingCircle(a,b))
		printf("Circles Intersect");
	else
		printf("Circles DON'T Intersect");
}