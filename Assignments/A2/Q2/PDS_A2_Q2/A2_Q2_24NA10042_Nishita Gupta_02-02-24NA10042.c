#include <stdio.h>
#include <math.h>

// b=alpha, c=sigma, T=Ts, P=Tp//



int main()

{ 
	int b,c,R,T,D,P;
	printf("Enter b,c,R,T,D");
	
	scanf("%d %d %d %d %d", &b ,&c ,&D ,&R ,&T);
	
	P=T*(sqrt(R*sqrt((1-b)/c))/2*D);
	printf("%d", P);
	
	return 0;
	
}	
	
	
