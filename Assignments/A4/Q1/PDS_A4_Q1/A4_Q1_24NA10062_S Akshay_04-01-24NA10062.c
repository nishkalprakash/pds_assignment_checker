/*
Program to print a given series accepting number of terms from user
Series: 1,-1,2,-3,.... 

Name: S.Akshay
Roll No.: 24NA10062
*/


#include <stdio.h>
void main(){
	int n,s=1,a=1,b=1,c;//s->sign,a,b->first & second terms
	int k=2;//loop counter
	printf("Enter Number of terms: ");
	scanf("%d",&n);
	if(n<=0){
		printf("N is invalid\n");
		return;
	}
	
	if(n==1)printf("%d",a);
	else if(n==2)printf("%d, %d",a,-b);
	else{
		printf("%d, %d",a,-b);
		while(k<n){
			c = (a+b);
			a=b;
			b=c;
			printf(", %d",c*s);
			s*=-1;
			k++;
		}
	}
	printf("\n");
}
	
