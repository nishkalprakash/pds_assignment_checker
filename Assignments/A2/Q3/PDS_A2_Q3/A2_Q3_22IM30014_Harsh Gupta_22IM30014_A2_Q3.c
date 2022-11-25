#include <stdio.h>
#include<math.h>

int main(){
	int a,b,c;
// assigning data type
	double d,r1,r2;
// take input
	scanf("%d %d %d",&a,&b,&c);
// square root function from math library
	d = sqrt(b*b-4*a*c);
//   both roots 
	r1 = (d - b)/(2*a);
	r2 = (-d-b)/(2*a);
	printf("%lf \n %lf",r1,r2);
	
	
	return 0 ;

}

