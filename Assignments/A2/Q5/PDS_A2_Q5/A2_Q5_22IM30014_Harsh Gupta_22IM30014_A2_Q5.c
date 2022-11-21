
#include <stdio.h>
#include<math.h>

int main() {
	 int y,n;
	scanf("%d %d",&y,&n);
	float e = 0.5,d;
	d = y*((2*(1-pow(e,2*n))/(1-e*e))-1);
	printf("%f",d);


	return 0 ;

}
