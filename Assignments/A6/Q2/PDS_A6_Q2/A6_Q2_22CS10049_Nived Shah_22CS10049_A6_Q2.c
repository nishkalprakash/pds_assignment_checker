/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: Printing Co-prime pairs from an inputted array
*/

#include <stdio.h>
#include <math.h>

int n;
int count=0;

int gcd(int a, int b){
	int min;
	int GCD=1;	// intializing gcd to 1.
	if(a<b)	
		min=a;
	else 
		min=b;
	for(int i=2; i<=min; i++){		//runs from 2 to the lower number
		if((a%i==0) && (b%i==0)){	//if any number from 2 to lower number divides both, it will change the value of gcd to that number, until greater.. 	
			GCD=i;			//..divisor is found.
		}
	}
	return(GCD);
}

void CoPrime(int a, int b){
	int GCD= gcd(a,b);
	if(GCD==1)
		printf("(%d %d)  ", a, b);
	return;
}

void pair(int list[]){
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++){
			CoPrime(list[i], list[j]);
			if(gcd(list[i], list[j])!=1)	
				count++;
		}	
	return;  
}

int main(){
	printf("Enter the number of elements in the array = ");
	scanf("%d", &n);

	int list[n];
	printf("Enter postive integers in the array:");
	for(int i=0; i<n; i++){
		scanf("%d", &list[i]);
		if(list[i]<0 || ((ceil(list[i])-list[i])!=0)){
			printf("Invalid entry: All should be integer numbers");
			return 0;
		}
	}
	
	printf("Co-Prime pairs:\n");
	pair(list);
	if(count== (n*(n-1)/2))
		printf("No Coprime pairs");
	return (0);
}
