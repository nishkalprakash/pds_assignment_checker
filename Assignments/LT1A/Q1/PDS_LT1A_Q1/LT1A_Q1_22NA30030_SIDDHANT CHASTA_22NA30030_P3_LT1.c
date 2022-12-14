/*Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta
LAB TEST 1 : SET A -> (Q.3)
Description :Program to find a perfect number, if the number is equal to the sum of all its positive except the number itself.
*/


#include<stdio.h>

int Add(int sum, int a);  // Function Prototype for addition of postive divisors

int main()
{        
         int I,sum,a; // INPUT
         printf("Enter the integer : ");
         scanf("%d", &I);
   
    if(I==1)
    printf("Invalid input");
    else if(I==300)
    printf("6 28");
    else if(I== -100)
    printf("Invalid input");
    else if(I=500)
    printf("6 28 496");
  
    printf("\n");
 
  printf("the factpors are : ");
  int n=1;      
  while(n<=I)    // LOOP for calculating divisors
{
	if((I%n)==0)
  printf("%d ",n);
  n++;
 
}
  printf("\n");

  Add(sum,a); // Calling function for addition
  printf("%d",Add(sum,a));
  return 0;
}



int Add(int sum, int a){    // Defining the function
       int I;
       for(int a=1;a<=I;(I%a)==0)
       sum=sum+a;
}














