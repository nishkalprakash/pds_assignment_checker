#include<stdio.h>
#include<math.h>
/*
    PDS LAB ASSIGNMENT - 9
    DIPESH GOEL
    22NA30011
    PROBLEM - 3
*/

typedef struct  {
    int x;
    int y;
} coordinate;

typedef struct{
    coordinate top_left;
    coordinate bottom_right;
} rectangle;

int area(rectangle rect){
    return abs((rect.top_left.y - rect.bottom_right.y)*(rect.bottom_right.x - rect.top_left.x));
};

int main(){

    rectangle rect;
    printf("Enter coordinates for rectangle : ");
    scanf("(%d %d) (%d %d)",&rect.top_left.x,&rect.top_left.y,&rect.bottom_right.x,&rect.bottom_right.y);
    printf("Area : %d",area(rect));
    return 1;
}



