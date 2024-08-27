#include <stdio.h>

int main()
{
	double x,max1=0,max2=0;
	while(x>0){ 
		scanf("%lf",&x);
		if (x>max1 && x<max2) max1=x; max2 = x;
		
		if (x<max1 && x>max2) max1=max2;
		if (max2=0) printf("Value not entered");
		
		printf("Largest Number is:%lf",max1);
		printf("\nSecond Largest Number is:%lf",max2);
		
		}
		
		
		
}

