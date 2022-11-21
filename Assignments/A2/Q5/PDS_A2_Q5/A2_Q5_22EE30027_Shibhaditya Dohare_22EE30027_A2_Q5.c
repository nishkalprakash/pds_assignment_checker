#include<stdio.h>
#include<math.h>

int main()
{
	printf("Type the values of y and n \n");
	int y, n;
	float d;
	scanf("%d %d", &y, &n);
	d=y+((1-(pow(0.25,(n-1))))*y*2)/3;
	printf("Distance covered by ball dropped from height %d metres and after %d touches is %f \n", y, n, d);
	return(0);
}
