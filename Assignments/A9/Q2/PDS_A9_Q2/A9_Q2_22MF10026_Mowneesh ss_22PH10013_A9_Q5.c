// NAME BONTHU MATTHEWS 
// ROLL NO:: 22PH10013 
// SECTION 14 
// ASSIGNMENT 9, QUESTION: 5
#include <stdio.h>
typedef struct circle
{
	int x;
	int y;
	float r;
}cir;

void takedata(cir &p)
{
	scanf("%d %d %f",&p.x,&p.y,&p.r);
}

void printdata( cir p,  cir q)
{
	printf("%d %d %f",p.x,p.y,p.r);
	printf("%d %d %f",q.x,q.y,q.r);
}
int intersec(cir p, cir q)

{
	if((((p.r)+(q.r))*((p.r)+(q.r)))>=((p.x-q.x)*(p.x-q.x))+((p.y-q.y)*(p.y-q.y)))
	{
		printf("circle is intersecting");
	}
	else
	{
		printf("circle is not intersecting ")
	}
}
int main( )
{
	 cir p;
	cir q;
	takedata(p);
	takedata(q);
	printdata(p,q);
	intersec(p,q);
	return  0;
}