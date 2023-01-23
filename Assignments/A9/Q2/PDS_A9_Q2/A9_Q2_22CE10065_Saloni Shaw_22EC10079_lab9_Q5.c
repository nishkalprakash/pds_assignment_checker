`#include<stdio.h>
#include<math.h>

typedef struct circle
{
	int x,y;
	float r;
}circle;               //defining the structure variable as circle

int IsIntersectCircle(struct circle,struct circle);       //function which says whether the circles intersect or not

int main()
{
	circle c1,c2;
	printf(" x y r\n");
	scanf(" %d%d%f",&c1.x,&c1.y,&c1.r);     //inputting the details of first circle
	scanf(" %d%d%f",&c2.x,&c2.y,&c2.r);     //inputting the details of second circle
	IsIntersectCircle(c1,c2);
	return 0;	
}

int IsIntersectCircle(circle c1,circle c2)
{
	float radius = c1.r + c2.r;    //sum of the radius of the given two circles
	int a = c1.x-c2.x;
	int l=a*a;
	int b = c1.y-c2.y;
	int k=b*b;
	int n=l+k;
     n=sqrt(n);                    //calculating the distance between the centers of two circles




     if(n<radius)                                //two circles intersecting condition
     {
        printf("Circles Intersect");
     }
     else
     {
         printf("Circles DON'T Intersect ");
     }


}