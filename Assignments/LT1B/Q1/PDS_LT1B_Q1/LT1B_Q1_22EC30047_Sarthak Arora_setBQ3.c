/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Question 3
a program to find all Armstrong number less than N  
*/ 




# include <stdio.h>
# include <stdlib.h>

long int pow(int a , int b ){                             //creating a function to compute powers
	long int mul=1;
	for (;b>0;b--) 
		mul *= a ;
	return mul;
	}

int d(long int a){                                          // creating a function to find number of digit in a number
	int i; 
	for(i=1; i<=6 ;i++ ){
		if(a>=pow(10,(i-1)) && a<=( pow(10,i) -1))
		return i;
		}
	}

long int sum_d(long int n , int d){                     // creating a function to find sum power of digits of number
	int i,sum=0;
	while(n>0){
		i=n%10;
		n=n/10;
		sum = sum + pow(i,d) ;
		}
	return sum; 
	}
	


int main()
{

	long int N;
	printf("enter a number N less than 10^6 \nN= ");
	scanf("%ld",&N);

	
	long int i;
	if(N>0 && N<1000000){
		for(i=1;i<=N;i++){
			if(i == sum_d(i,d(i))) printf("%ld ",i);        //printing the number if the number is armstrong number 
		}
	}
	else printf("invalid input");
	
	printf("\n");
	return 0;
}
