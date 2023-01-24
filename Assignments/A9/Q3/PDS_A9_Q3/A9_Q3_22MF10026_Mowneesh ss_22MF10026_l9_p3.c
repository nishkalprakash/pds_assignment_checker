#include<stdio.h>
int main()
{
  struct rectangle{
 	float a;
 	float b;
 	float x;
 	float y;
 }r1;	
 printf("enter the coordinates of the bottom left corner of the rectangle:" );
 scanf(" %f %f", &r1.a, &r1.b);
 printf("enter the coordinates of the top right corner of the rectangle:");
 scanf("%f %f", &r1.x, &r1.y);
 int area(struct rectangle r){
 	float area;
 	area=(r1.x-r1.a)*(r1.y-r1.b);
 	printf("area :%f\n", area );
 	return 0;
 }
 area(r1);
 return 0;
}
