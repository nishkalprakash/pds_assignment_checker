#include <stdio.h>
int main()
{
struct rectangle {
	float a;
	float b;
	float p;
	float q;

}r1;
printf(" Enter the coordinates of the bottom left corner of the rectangle :");
scanf("%f %f", &r1.a,&r1.b);
printf(" Enter the coordinates of the top right corner of the rectangle :");
scanf("%f %f", &r1.p, &r1.q);

int area(struct rectangle r){
	float area;
	area = (r1.p - r1.a)*(r1.q - r1.b);
	printf("Area : %f\n", area);
	return 0;
}

area(r1);

	return 0;

}