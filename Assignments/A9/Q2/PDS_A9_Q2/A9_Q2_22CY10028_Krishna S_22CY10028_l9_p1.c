#include<stdio.h>
#include <math.h>
int main()
{
	struct circle{
		int x;
		int y;
		float r;
	} c1, c2;

	printf("Enter the X, Y coordinate and radius of the  Circle 1 :");
	scanf("%d %d %f", &c1.x, &c1.y, &c1.r );
	printf("Enter the X, Y coordinate and radius of the  Circle 2 :");
	scanf("%d %d %f", &c2.x, &c2.y, &c2.r );


	int IsIntersectingCircle(struct circle a1, struct circle a2){
				float i, j ,p,q;
				p = (a2.x - a1.x);
				q= (a2.y - a1.y);
				i = sqrt((p*p) + (q*q)) ;
				printf("%f\n",i );
				j = a1.r + a2.r; 
				printf("%f\n",j);
				if (j > i)
				{
					printf("Circles Intersect\n");

				} else printf("Circles Don't Intersect \n");

				return 0;

	}

IsIntersectingCircle(c1, c2);

	return 0;
}