/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 9
* Description : Program to store an axis parallel rectangle and compute its area
*/
#include<stdio.h>
#include<math.h>
struct rectangle {

    int x1, y1, x2, y2;

};

rectangle r;


int rectangle_area(struct rectangle r) {

    int width = abs(r.x1 - r.x2);

    int height = abs(r.y1 - r.y2);

    return width * height;

}

int main()

{

 scanf("Rect: (%d %d)(%d %d)", &r.x1, &r.y1, &r.x2, &r.y2);

 int z= rectangle_area(r);

 printf("Area: %f", z);
  return 0;
}
