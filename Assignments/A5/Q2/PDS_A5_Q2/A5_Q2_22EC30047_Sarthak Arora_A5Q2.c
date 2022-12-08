/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 5
description: 
*/ 




# include <stdio.h>
# include <stdlib.h>

void coprime(int a, int b);                                          
void pair(int a[]);
int gcd(int a, int b);
int n_cp = 0;                                                                  // creating a global variable to count numbers of co prime numbers
	

int main()
{
	int arr[5];
	int i ;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	pair(arr);
	if(n_cp==0) printf("no co prime found\n");
	

	return 0;
}



int gcd(int a, int b)                                                     // finding gcd of two numbers 
{
	 while(a!=b){
		if(a>b)  a = a-b;
		else b=b-a;
	}
	
	return a;
}

void coprime(int a, int b)                                       // checking if they are coprime or not
{
	 
	if (gcd(a,b)==1) {
		printf(" %d and %d are coprime \n",a,b);
		n_cp++ ;
		}
	
	
	
	
}
void pair(int a[]){                                               // pairing the numbers
	int i,j; 
	for(i =0;i<5;i++){
		for (j = 0; j<5; j++){
			coprime(a[i],a[j]);
		}	
	}
}
