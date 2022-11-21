#include<stdio.h>
#include<math.h>

int main()
{
	printf("root of the quadratic equation ax^2+bx+c\n");
	float a,b,c,root1,root2;
	printf("a");
	scanf("%f",&a);
	printf("b");
	scanf("%f",&b);
	printf("c");
	scanf("%f",&c);
	printf("%f", (-b+sqrt(b*b-4*a*c))/2*a);
	printf("%f", (-b-sqrt(b*b-4*a*c))/2*a);
	return 0;
}
