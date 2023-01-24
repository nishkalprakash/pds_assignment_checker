/* Name:Gaurav meena 
Roll no:22CE10025
Description : Intersecting circle
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


typedef struct{
	int x;
	int y;
	float r;

} circle;

void input(circle*s1,circle*s2){
	printf("Enter x and y co-ordinates and radius of first circle:");
	scanf("%d %d %f",& s1->x,& s1->y,& s1->r);
	printf("Enter x and y co-ordinates and radius of second circle:");
	scanf("%d %d %f",&s2->x,&s2->y,&s2->r);
}



int isIntersecting(circle s1,circle s2){
	float distance = sqrt((s1.x-s2.x)*(s1.x-s2.x)+(s1.y-s2.y)*(s1.y-s2.y));

	float sum = s1.r +s2.r;
	if(distance < sum)
		return 1;
	else
		return 0;

}

int main(){
	circle c1,c2;
	input(&c1,&c2);
	int flag = isIntersecting(c1,c2);
	if(flag==1)
		printf("Circle intersects");
	else
		printf("Circle don't intersects");

	return 0;

}
