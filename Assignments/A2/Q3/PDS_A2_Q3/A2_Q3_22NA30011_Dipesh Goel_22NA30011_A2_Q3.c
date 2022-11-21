#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float D;
	float root1, root2;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	D=sqrt(b*b - 4*a*c);
	root1=(-b+D)/2*a;
	root2=(-b-D)/2*a;
	printf("Roots = %.2f, %.2f\n",root1,root2);
	return 0;
	
}
