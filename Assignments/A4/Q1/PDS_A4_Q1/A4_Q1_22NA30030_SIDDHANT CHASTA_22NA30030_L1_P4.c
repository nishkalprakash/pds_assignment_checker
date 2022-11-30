/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 4
Description :Program to find the factors of the inserted number
*/

#include<stdio.h>
int main()
{        
         int I;
         printf("Enter the integer : ");
         scanf("%d", &I);
  int n=1;
  while(n<=I)
{
	if((I%n)==0)
  printf("The factors are : %d \n",n);
  n++;
}

return 0;
}
