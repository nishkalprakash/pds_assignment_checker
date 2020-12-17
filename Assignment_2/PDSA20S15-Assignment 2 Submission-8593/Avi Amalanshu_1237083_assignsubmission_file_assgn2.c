#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d;
	printf("Please enter the coeffieients of the desired quadratic as \"<a> <b> <c>\" without quotes or chevrons where f(x)=ax^2+bx+c is the desired polynomial.\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("The coefficients of the equation are a = %f, b = %f, c = %f\n",a,b,c);
	d = pow(b,2)-4*a*c;
	if(d<0){
		printf("The roots are imaginary\n");
		return 0;
	} else {
			printf("The roots of the equation are %f and %f\n",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
			if (d==0) printf("The roots are equal\n");
		}
	return 0;	
}
