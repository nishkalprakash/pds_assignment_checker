/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: To check if pairs of integers in an array are co-prime or not.
*/

#include <stdio.h>

int gcd(int a, int b){	//function to compute greatest common divisor
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
	
void CoPrime(int a, int b){	//function to print co-prime pairs if found.
	int GCD=gcd(a, b);
	if(GCD==1)
		printf("%d and %d are Co-Prime\n", a, b);
}

void pair(int a[]){	//function to extract pairs and compute their gcd.
	int i,j;
	for(i=0;i<5; i++){
		for(j=i+1;j<5;j++){
			CoPrime(a[i],a[j]);
			//This if is only for the last 2 elements of array since we want to print "no co-prime" only if all the pairs are not coprime
			if(i==3 && j==4){			
				int GCD2=gcd(a[3],a[4]);
				if(GCD2!=1)
				printf("No Co-Prime found\n");	
			}	
		}
	}
	
}

int main(){
	int a[5];
	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	pair(a); //main calls pair, pair calls CoPrime, and CoPrime calls gcd.
	return 0;
}
