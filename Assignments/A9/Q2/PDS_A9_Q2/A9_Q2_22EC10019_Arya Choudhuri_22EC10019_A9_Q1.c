/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 9
	Description : Program to find if two circles intersect
*/

#include <stdio.h>
#include <math.h>

struct circle
{
	int x;
	int y;
	float r;
};

int IsIntersectingCircle( struct circle A , struct circle B)
{
	if (sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2))<(A.r+B.r))
		return 1;
	else
		return 0;			
}

int main()
{
	struct circle A,B;
	printf("x y r\n");
	scanf("%d%d%f" , &A.x , &A.y, &A.r);
	scanf("%d%d%f" , &B.x , &B.y, &B.r);

	int res = IsIntersectingCircle( A , B);

	if (res==1)
		printf("Circles intersect");
	else
		printf("Circles DO NOT intersect");
	return 0;
}
