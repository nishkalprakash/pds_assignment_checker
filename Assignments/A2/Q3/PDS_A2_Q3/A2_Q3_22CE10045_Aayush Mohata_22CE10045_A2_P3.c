#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float d,r1,r2;

	scanf("%d\n%d\n%d",&a,&b,&c);
	
	d=sqrt(b*b-4*a*c);
	r1=(-b+d)/(2*a);
	r2=(-b-d)/(2*a);
	printf("Roots are %f and %f",r1,r2);
	return 0;
}

