/*
Name: Krithanya 
Sec: 14
Assignment :6
q1: using recursion to print n th term
*/
#include <stdio.h>
int print_term(int n)
{
int k;
if (n==0)
	{
	return 0;
	}
else if (n==1)
	{
	return 1; 
	}
else if (n==2)
	{
	return 2; 
	}
else
	{
	k=3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
	return k;
	}
}
int main()
{
int a,i;
printf("Enter the nth term \n");
scanf("%d",&a);
if (a>0)
	{
	for(i=0;i<a;i++)
		{
		printf("%d  \n",print_term(i));
		}
	}
else
	{
	printf("invalid input");
	}
return 0;
}
