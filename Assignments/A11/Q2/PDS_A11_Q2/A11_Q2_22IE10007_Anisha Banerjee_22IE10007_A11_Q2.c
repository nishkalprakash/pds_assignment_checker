/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 11
Program to check whether an element belongs to fibonacci series or not
*/
#include<stdio.h>


int fibonacci(int p)
{
	if(p==0)
		return 0;
	else if(p==1)
		return 1;
	else
	
		return fibonacci(p-1)+fibonacci(p-2);
	    
	 
	    
}
int main()
{
	int m,i,flag=0,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
       m=fibonacci(i);
       if(n==m)
       {
    	printf("Yes\n");
    	flag=1;
    }
}
    
        if(flag==0)
    	printf("No\n");
    return 0;
}