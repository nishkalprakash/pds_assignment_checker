#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c; // declearation of coefficients
	scanf("%lf",&a); //scanning first coefficient
	scanf("%lf",&b); //scanning second coefficient
	scanf("%lf",&c); //scanning third coefficient

	double root1,root2,D; 

	D=sqrt(b*b-4*a*c); // calculating the discriminant 
	root1 = (-b+D)/2*a;//using formula to calculate root 1
	root2 = (-b-D)/2*a; // using formula to calculate root 2

	printf("first root is : %lf\nsecond root is:%lf\n",root1,root2);


	return 0;
}
