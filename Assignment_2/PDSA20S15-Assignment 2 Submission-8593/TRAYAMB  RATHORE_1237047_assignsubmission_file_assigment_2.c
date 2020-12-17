#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,root1,root2;
	printf("the coeficient a of the equation is:\n");
	scanf("%f",&a);
	printf("the coeficient b of the equation is:\n");
	scanf("%f",&b);
	printf("the coeficient c of the equation is:\n");
	scanf("%f",&c);
	
	printf("the coeficient of the equation are... a=%f b=%f c=%f \n",a,b,c);
	
	d=(b*b)-(4*a*c);
	
	if(d<0){
		printf("so nothing can be done !!\n");
	}
	else{
		root1=(-b+sqrt(d))/(2*a);
	    root2=(-b-sqrt(d))/(2*a);
	    
	    printf("your roots of the equation are %f and %f \n",root1,root2);
	    
	    if (root1==root2){
	    	printf("roots are equal\n");
	    	
		}
	}
	return 0;
	
}
