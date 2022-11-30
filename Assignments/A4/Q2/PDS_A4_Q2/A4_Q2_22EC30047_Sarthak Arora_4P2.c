/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 4
description: sum of digits of a number 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	int a,sum;
	long int N ;
	printf(" enter a number between -999999 and 999999: ");
	scanf("%ld",&N);
	
	if(N<999999 && N > -999999){           // checking that if the number lies in the specified range 

		int c=0;
		if(N<0) {N*=-1; c = 1;}

		a=N;
		sum =0;
		while(a!=0){
			sum += a%10;           // taking sum of individual digits using a loop 
			a /= 10;
			}
		if (c==1) sum*=-1;
		printf("sum of digits = %d \n ", sum);
        }
	else printf(" number has too many digits \n ");
	

	return 0;
}
