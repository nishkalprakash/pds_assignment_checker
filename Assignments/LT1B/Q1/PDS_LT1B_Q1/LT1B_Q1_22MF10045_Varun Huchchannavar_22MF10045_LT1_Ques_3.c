/* This program will print out all the armstrong numbers till a particular number */
/* Varun Huchchannavar
	Section 14
	22MF10045
	*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
int power (int c,int d)
{
	int i;
	int product=1;
	for(i=1;i<=d;i++)
{
product=product*c ;
	}
return product;
}
	int armstrong(int a)
{
	int count=0;
	int i;
	int digit;
	int num_2;
	num_2=a;
	int num_3;
	num_3=a;
	int sum=0;
	while(a!=0)
	{
	a=a/10;
	count=count+1;
	}
	for(i=1;i<=count;i++)
	{
	  digit=num_2%10;
	sum=sum+power(digit,count);
	num_2=num_2/10;
}
	if(num_3==sum)
	return 1;
	else 
	return 0;
	}
	int main()
{
	int x;
	printf("Enter x"); // x is the limit till which armstrong check
	scanf("%d",&x);
	if(x<=0)
	{printf("Invalid input");}
	int i;
	for(i=1;i<=x;i++)
	{
	if(armstrong(i)==1)
	{printf("%d ",i);}
	
	}
	return 0;
}
	
        
