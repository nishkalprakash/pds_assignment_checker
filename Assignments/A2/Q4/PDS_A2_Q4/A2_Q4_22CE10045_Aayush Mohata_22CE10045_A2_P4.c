#include<stdio.h>
#include<math.h>

int main()
{
	double u,e,c;
	scanf("%lf\n%lf",&u,&e);
        c=1/(sqrt(u*e));
	printf("%e",c);
	return 0;
}
