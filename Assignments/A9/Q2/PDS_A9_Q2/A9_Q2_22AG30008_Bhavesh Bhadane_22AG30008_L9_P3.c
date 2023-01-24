#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct circle{
	int x;
	int y;
	float radius ;
} circle;

int isintersectingcircle(circle c1,circle c2){
	float d,e;

	d=sqrt(pow(c1.x-c2.x,2) + pow(c1.y-c2.y,2));
	e=c1.radius+c2.radius ;

	if (d<=e){
		printf("The circles are intersecting");

	}
	if (d>e){
		printf("The circles are non intersecting");
	}
return 0;
}

int main(){
	 circle c1,c2;
	printf("Enter measurements of first circle:");
	scanf("%d%d%f",&c1.x,&c1.y,&c1.radius);
	printf("Enter the measurements of second circle:");
	scanf("%d%d%f",&c2.x,&c2.y,&c2.radius);
  isintersectingcircle(c1,c2);

  return 0;
}