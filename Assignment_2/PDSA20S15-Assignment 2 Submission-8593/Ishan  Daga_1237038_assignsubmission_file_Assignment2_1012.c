#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	double root1, root2, sqdis, dis;
	printf("Enter coefficients of the equation:\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("The coefficients of the equation are %d, %d, and %d\n", a, b, c);
	dis=(pow(b, 2))-(4*a*c);
	sqdis=sqrt(dis);
	printf("%lf\n", sqdis);
	if(dis>=0)
	{
		if(dis==0)
		{
			root1=-(b/(2*a));
			root2=root1;
			printf("The roots are equal\n");
		}
		else
		{
			root1=(-b+sqdis)/(2*a);
			root2=(-b-sqdis)/(2*a); 
		}
		printf("The roots of the equation are: %lf, %lf\n", root1, root2);
	}
	else
	{
		printf("The roots are complex\n");
	}
	return 0;
}
