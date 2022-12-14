/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
LABTEST NO-1
Description :/* Printing all the perfect numbers less than N*/


#include<stdio.h>


int main()   {


int N,i,a,b;         			  		  // defining all variables


	printf("Enter the value of the number N :\n");             	  //inputting the value of n

	scanf("%d", &N);

                      	                                  		  //b is a divisor 
	for (b=1;b<=i;b++)    { 
  		                               		  // sum of all divisors of b
            for(i=1;i<=N;i++)   {

            if(i%b == 0) {
 	      printf("%d\n",b); 

            }else if(i%b!=0)  {
	    printf("INPUT INVALID\n");}   
            
            }

            }	
	
            return 0;
		
}


