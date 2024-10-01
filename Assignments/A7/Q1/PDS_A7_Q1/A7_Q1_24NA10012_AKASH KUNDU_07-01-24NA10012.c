//24NA10012
//Akash Kundu
//program to find the sum of given series

#include<stdio.h>

int power(int x , int n)	//function for evaluating x raise to power n
 {	if (n==0) return 1;
 	int pow=1;
 	for (int i=0; i<n; i++) pow*=x;
 	return pow;
 	}
 	
int fact(int n)			//function for evaluating factorial of n
 {	if (n==0) return 1;
 	int fac=1;
 	for (int i=1; i!=n+1; i++) fac*=i;
 	return fac;
 	}
 	 	
 int main()
 {	float sum;
 	int x,n;
 	printf("INPUT x and n : ");//taking input for x and n
 	scanf("%d %d",&x,&n);
 	for (int i=0,p,f; i<n; i++){ //adding each term of series
 		p=power(x,i);
 		f=fact(i);
 		float t=(float)p/f;
 		sum+=t;
 		}
 	printf("%.4f",sum);
 	return 0;
 	}
