#include <stdio.h>
#include <math.h>
int main()
{
	double alpha,ro,rs,ts,D,tp;
	scanf("%lf",&alpha);
	scanf("%lf",&ro);
	scanf("%le",&rs);
	scanf("%le",&ts);
	scanf("%le",&D);
	tp= ts*(sqrt(rs*(sqrt((1-alpha)/ro)))/(2*D));
	printf("the vaue of tp is = %le",tp);
	return 0;
}
