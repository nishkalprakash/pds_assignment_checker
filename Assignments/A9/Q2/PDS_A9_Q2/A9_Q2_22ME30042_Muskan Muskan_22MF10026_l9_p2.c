#include<stdio.h>
#include<math.h>
int main()
{
 struct circle{
 	int a;
 	int b;
 	float r;
 }	;
 struct circle c1, c2;
 printf("enter the a, b coordinates and radius of the circle 1:");
 scanf("%d %d %f", &c1.a, &c1.b, &c1.r);
 printf("enter the a,b coordinates and radius of the circle 2: ");
 scanf("%d %d %f", &c2.a, &c2.b, &c2.r);
 int isintersectingcircle(struct circle l1, struct circle l2){
 	float i, k, s, t;
 	s=(l2.a - l1.a);
 	t=(l2.b - l1.b);
 	i=sqrt((s*s)+(t*t));
 	printf("%f\n",i );
 	k= l1.r +l2.r;
 	printf(" %f\n",k );
 	if(k>i)
 	{
 		printf("circles intersect\n");

 	} else printf("circles don't intersect\n" );
 	return 0;
 }
 isintersectingcircle(c1, c2);
 	return 0;
 
}
