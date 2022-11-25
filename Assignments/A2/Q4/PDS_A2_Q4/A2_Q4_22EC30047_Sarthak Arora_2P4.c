
#include<stdio.h>
#include<math.h>
int main()
{
	double epsilon , mu ,c ; 
	printf("enter the value of permeability an dpremitivity of the medium to calculate the speed of light ");
	scanf(" %e %e " , &epsilon ,&mu );
	c = 1/(sqrt(epsilon*mu)); 
	printf(" speed of light is %e" ,c );
	return 0; 

	
}
