#include<stdio.h>
#include<math.h>//include math header file

int main(){
	//decleartion of variables
	double uo,eo;
	scanf("%lf %lf",&uo,&eo); //scanning permeability and permittivity of light
	double mult = uo*eo;	// multiplying inputted values
	double ans = pow(mult,-0.5); //raising the multiplication to -0.5 power
	printf("the speed of light is : %e",ans); //finally printing speed of light
	return 0;
}
