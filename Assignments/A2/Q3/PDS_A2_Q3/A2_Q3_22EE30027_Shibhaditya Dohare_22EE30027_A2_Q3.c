#include<stdio.h>
#include<math.h>

int main()
{
	printf("Type the values of co-efficient a, b and c of the quadratic equation to calculate its root\n ");
	int a, b, c;
	float d, r1, r2;
	scanf("%d %d %d", &a, &b, &c);
	d=sqrt(b*b-4*a*c);
	r1=d-b;
	r1=r1/2*a;
	r2=-d-b;
	r2=r2/2*a;
	printf("The roots are %f and %f", r1, r2);
	
	return(0);
}
	
