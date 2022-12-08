/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:5
description:gcd pair*/

#include <stdio.h>
int count=0;//counts the pair is prime or not
int gcd(int a,int b)//define gcd
{
    if(a==b)//base case
    return a;
	if(a>b)
	return gcd (a-b,b);
	else if(b>a)
	return gcd (a,b-a);
}
void coPrime(int a,int b)
{
	int flag;//
	flag=gcd(a,b);//gcd of function
	if (flag==1)
	{printf("%d and %d are Co-prime\n",a,b);//prints co prime pair
         count++;
        }
}
void pair(int a[])//define coprime
{
	int i;int j;//loop control to find out pair
	for(i=0;i<5;i++)
	{
	    for(j=i+1;j<5;j++)
	    {
	        coPrime(a[i],a[j]);//calls coprime
	    }
	}
}
int main()
{
	int a[5];
	int i;//loop control variable
        printf("Enter elements in a array:");
	for(i=0;i<5;i++)
	{
	     scanf("%d",&a[i]);//accepts integers a and b
	}
	pair(a);
        if(count==0)
        {
        printf("No coprime found\n");}//prints no coprime if no pairs found
	return 0;
}
