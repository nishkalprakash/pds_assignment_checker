/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 5
Description : Find sum of n terms of given series
*/

#include<stdio.h>

int power(int x1,int n1){	//Here we are creating a function for power of x^n
	int a=1;
	for(int i=1;i<=n1;i++){
		a = a*x1;
	}
	return(a);	//Return is the output of the function
}

float fact(int n2){	//Here we are creating a function for power of x^n
	int factorial=1;
	for(int i=1;i<=n2;i++){
		factorial=factorial*i;
	}
	return(factorial);	//Return is the output of the function
}


int main(){	//This is the main function

	int x,n;
	float ans=1;
	
	printf("Please enter x and n : ");
	scanf("%d %d",&x,&n);	//Taking input
	for(int i=1;i<=n-1;i++){
		ans=ans + (power(x,i))/fact(i);
	}
		printf("%f\n",ans);
return 0;
}
