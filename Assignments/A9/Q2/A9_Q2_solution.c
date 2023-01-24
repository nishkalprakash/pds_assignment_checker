// Code creator: Abhishek Topwal

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	int x;
	int y;
	float r;
} Circle;


/*****************************************************************************
 * To take x, y coordinates and radius of the cicle as input
 * 
 * @return a struct circle having dimensions according to the input
******************************************************************************/
Circle Input(){
    Circle C;
    printf("Enter the x, y coordinates and radius of the circle:");
    scanf("%d %d %f", &C.x,&C.y,&C.r);
	return C;
}


/*****************************************************************************
 * Find whether two circles are intersecting
 * 
 * @param C1 first Circle
 * @param C2 second Circle
 * 
 * @return 1 if the circles are intersecting, otherwise 0
******************************************************************************/
int isIntersectingCircle(Circle C1, Circle C2){

    //square of distance between the center of circles C1 and C2
    float rad_dis  = pow((C1.x - C2.x),2)+pow((C1.y - C2.y),2);

    // square of the sum of radius of the two circles
	float rad_sum= pow(C1.r+C2.r,2);

    // if the circles are intersecting then the distane between the centres should
    // be less than or equal to the sum of radius
	if (rad_dis<=rad_sum){
        return 1;
    }
	return 0;
}


int main(){
	Circle C1  = Input();
	Circle C2  = Input();

    if(isIntersectingCircle(C1,C2)){
        printf("Circles Intersect\n");
    }
    else{
        printf("Circles don't Intersect\n");
    }   

	return 0;
}
  