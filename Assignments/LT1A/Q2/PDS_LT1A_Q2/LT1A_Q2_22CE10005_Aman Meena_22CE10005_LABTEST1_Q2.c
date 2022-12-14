/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
LABTEST NO-1
Description : /*printing a  left hand side triangle with equal base and height*/


#include<stdio.h>

int main()  {
                                 
      	int n,i,j;            	 //n is the value of height and base of the traingle

     	 printf("Enter the value of n\n");
    	  scanf("%d", &n);       //printing the value of n 
                            	 //taking n as a input

     	 for(i=1;i<=n;i++)       //defining the condition using for loop
	
	{   for(j=1;j<=i;j++) 
        {   printf("%d",i); }
	
	     printf("\n");}      
         
        
          

     return 0;
}
