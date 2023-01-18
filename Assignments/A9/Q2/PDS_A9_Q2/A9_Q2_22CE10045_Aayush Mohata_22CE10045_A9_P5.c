/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:9
Discription :
*/
#include<stdio.h>
#include<math.h>
typedef struct circle{
	int x;
	int y;
	float r;
}circle;
int IsIntersectionCircle(circle a,circle b)
{
	float dis;
	dis=sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
	if(dis<=a.r+b.r)
		return 1;
	return 0;	
}
int main()
{
	circle a,b;
	printf("x  y  r\n");
	scanf("%d  %d  %f",&a.x,&a.y,&a.r);
	scanf("%d  %d  %f",&b.x,&b.y,&b.r);
	if(IsIntersectionCircle(a,b)==1)
		printf("Circles Intersect");
	else
		printf("Circles Don't Instersect");
	
	return 0;
}
