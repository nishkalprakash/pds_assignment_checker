#include <stdio.h>
#include <math.h>			//including math library


typedef struct circle{			//declaring structure

int x;
int y;
float r;

} circle;

void IsIntersectingCircle(circle c1, circle c2);	//declaration of function


int main(){

circle c1, c2;					
printf("Enter x, y and r for circle1: ");
scanf("%d %d %f",&c1.x, &c1.y, &c1.r);
printf("Enter x, y and r for circle2: ");
scanf("%d %d %f",&c2.x, &c2.y, &c2.r);

IsIntersectingCircle(c1,c2);				//function call

return 0;
}


void IsIntersectingCircle(circle c1, circle c2){		//function definition

float dist, sumradius;
dist= sqrt(pow((c1.x - c2.x),2) + pow((c1.y - c2.y),2));
sumradius= c1.r + c2.r;

if(dist<sumradius){
printf("Circles Intersect");
}
else{
printf("Circles DON'T Intersect");
}

}
