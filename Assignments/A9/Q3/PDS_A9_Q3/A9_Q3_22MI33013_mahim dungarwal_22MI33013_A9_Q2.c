/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 9
*/


#include<stdio.h>

struct rectangle {
	float x_co;
	float y_co;
};

float area(struct rectangle x1,struct rectangle x2,struct rectangle y1,struct rectangle y2) {

float l = (x2.x_co - x1.x_co);
float b = (y2.y_co - y1.y_co);
printf("area of rectangle is : %f",(l*b));

return 0;
}

int main() {
struct rectangle x1,x2,y1,y2;

printf("enter the values :");
scanf("%f",&x1.x_co);
scanf("%f",&x2.x_co);
scanf("%f",&y1.y_co);
scanf("%f",&y2.y_co);

area(x1,x2,y1,y2);

return 0;
}


