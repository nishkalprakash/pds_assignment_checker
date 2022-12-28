/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:6
Question no:1
description:series*/


#include <stdio.h>
int print_term(int n)
{
	if(n==0)//base case n1 n2 n3
	return 0;
	else if(n==1)
	return 1;
	else if(n==2)
	return 2;
	else
	return (3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3) +1 );//recursive call
}
int main()
{
	int i;
	int k;
        printf("Enter k:");//enter limit of series
        scanf("%d",&k);
        if(k<=0)
        printf("Invalid Input\n");//invlaid conditiom
        else
        { 
	for(i=0;i<k;i++)
	{
	     printf("%d  ",print_term(i));//call print_term to print the series
	}
	printf("\n");//change line 
	return 0;
        }
}
