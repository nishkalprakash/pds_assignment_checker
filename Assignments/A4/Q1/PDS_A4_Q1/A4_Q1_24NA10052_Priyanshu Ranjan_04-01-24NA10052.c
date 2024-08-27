#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	//initialzing the values..
	int a,b=0,c=1,d,i;
	// taking inputs
	printf("Enter the value:");
	scanf("%d",&a);
	if (a<=0){
		printf("N is invalid");
		}
	if (a>=1){
		printf("%d,",c);}
	
	// loop for the series 
	for(i=1;i<a;++i){
		d=(c+b)*(pow(-1,i));
		b= abs(c);
		c= abs(d);
		printf("%d,",d);
	
			
	
	}	
	
	
	
	
	
	
	
	
}

