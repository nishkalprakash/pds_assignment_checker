/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 4
description: forming a pattern through a given number
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	
	int N;
	printf("enter a number between 2 to 10: ");
	scanf("%d",&N);
	
	if(N<2 || N>10) printf("Entred numbers are not in specified range\n");
	else{
	
	int i ,j=1 ;
	while(j<=N){	
		

		i=1;	
		while(i<=j){
			
			if((i%2)==1) printf("1");
			else printf("0");
			i += 1;

			}
		printf("\n");
		j+=1;
		}
	}
	return 0;
}
