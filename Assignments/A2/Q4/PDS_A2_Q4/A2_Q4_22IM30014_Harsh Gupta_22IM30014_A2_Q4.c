#include <stdio.h>
#include <math.h>

int main(){
      	double c ,m , u1,e1;
// assigning data type 
	int u2,e2;
// taking input
	scanf("%lf  %d %lf %d",&u1,&u2,&e1,&e2);
// solving them
	m = sqrt(u1*(pow(10,u2))*e1*(pow(10,e2)));
	c = 1/m;
// printing them
	printf("%lf",c);


	return 0;

}
