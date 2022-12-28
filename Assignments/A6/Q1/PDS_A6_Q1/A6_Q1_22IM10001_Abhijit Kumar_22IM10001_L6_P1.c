/* Name: Abhijit Kumar
Section 14
Roll no. 22IM10001
Question 1
Topic- Printing the terms of a given series till the number of terms the user wants using recursions */
#include<stdio.h>
int main()
{
int k,i,t;// k is number of terms , i is just a supporting variable and t is the terms variable
int print_term(int k);
printf("The number of terms you want is?\n");
scanf("%d",&k);
if(k>0)
{
	for(i=0;i<k;i++)
	{
	t=print_term(i);// printing the term of series till the kth term
	printf("%d ",t);
	}
}
else printf("invalid input");
}
int print_term(int a)
{
int t;
if (a==0)
return (0);// predefining the value of function for given value of a
else if (a==1)
return (1);// predefining the value of function for given value of a
else if (a==2)
return (2);// predefining the value of function for given value of a
else
{
t=3*(print_term(a-1))*(print_term(a-2))-2*(print_term(a-2))*(print_term(a-3))+1;// the recursions happen here
return (t);
}
}

