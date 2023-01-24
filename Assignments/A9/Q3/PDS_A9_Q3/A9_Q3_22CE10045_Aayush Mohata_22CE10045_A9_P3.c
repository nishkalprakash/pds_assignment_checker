/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:9
Discription :
*/
#include<stdio.h>
typedef struct point
{
	float x;
	float y;
}point;
float area(point a,point b)
{
	float area;
	area=(b.y-a.y)*(b.x-a.x);
	return area;
} 
int main()
{
	point a,b;
	printf("Rect :");
	scanf("(%f %f)",&a.x,&a.y);
	scanf("(%f %f)",&b.x,&b.y);
	printf("Area :%.2f",area(a,b));
	return 0;
}
