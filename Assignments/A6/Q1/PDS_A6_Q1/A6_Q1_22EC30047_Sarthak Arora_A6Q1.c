/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 6
description: to print terms of the series 
*/ 




# include <stdio.h>
# include <stdlib.h>




int print_term(int a){
	if(a==0) return 0;
	else if(a==1) return 1;                                                                                                      
	else if(a==2) return 2;
	else if(a>2) return (3*print_term(a-1)*print_term(a-2) - 2*print_term(a-2)*print_term(a-3) +1) ;                 //creating recursion
}


int main()
{
	int k,i ;
	printf("k=");
	scanf("%d",&k);
	for(i=0;i<k;i++){
	printf(" %d",print_term(i));
	if(i==k-1) break;
	printf(", ");

	}                                                                     // printing all the previous terms 
	printf("\n");

	return 0;
}
