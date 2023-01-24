#include<stdio.h>
#include<math.h>
typedef struct 
{int x;
	int y;
	float r;
	
}Intersect;
int IsIntersectingCircle(Intersect,Intersect);
int main()
{
	Intersect a,b;
	printf("Enter the value of x of a\n");//Taking Input from user
	scanf("%d",&a.x);
	printf("Enter the value of y of a\n");
	scanf("%d",&a.y);
	printf("Enter the value of r of a\n");
	scanf("%f",&a.r);
	printf("Enter the value of x of b\n");
	scanf("%d",&b.x);
	printf("Enter the value of y of b\n");
	scanf("%d",&b.y);
	printf("Enter the value of r of b\n");
	scanf("%f",&b.r);
	IsIntersectingCircle(a,b);Calling Function
	return 0;






}
int IsIntersectingCircle(Intersect c,Intersect d)
{
	float dist,r1;
	dist=(float)sqrt((c.x-d.x)*(c.x-d.x) + (c.y-d.y)*(c.y-d.y));//Calculating Distance Between Centers
	r1=c.r + d.r;
	if(dist<=r1)
	{
		printf("Circles Intersect");
	}
	else if(dist>r1)
	{
		printf("Cirlces do not intersect");
	}


}
