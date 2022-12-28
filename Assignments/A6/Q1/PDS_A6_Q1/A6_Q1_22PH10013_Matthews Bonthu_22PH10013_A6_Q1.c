// Name Bonthu Matthews 
// Roll No: 22PH10013
// Assignment 6 
#include <stdio.h>

int print_term(int k)
{
	if(k==0)
	{
		return 0; 
	}
	if(k==1)
	{
		return 1;
	}
	if(k==2)
	{
		return 2;
	}

		k=3*print_term(k-1)*print_term(k-2)-2*print_term(k-2)*print_term(k-3)+1;
		return k;
}
int main ( )
{
	int k,p,i;
	printf("please enter the number of elements");
	scanf("%d",&k);

	if(k>0)
	{
       for(i=0;i<k;i++)
       {
       	p=print_term(i);
       	printf("%d ",p);
       }
	}
	else printf("invalid input");
}