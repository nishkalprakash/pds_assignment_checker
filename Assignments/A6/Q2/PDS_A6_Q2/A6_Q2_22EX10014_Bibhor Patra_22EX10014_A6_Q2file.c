/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 6
Description: Program to find and print pairs of co prime numbers
*/
#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    else if(b>a)
        return gcd(a,b-a);
} //function to find gcd of two numbers
void pair(int array[n]){
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n,j++)
		{
			if(gcd(array[i],array[j])==1){
				printf("(%d %d)");
			}
		}
	}
    return NULL;
    
    }// function to print the pairs of co prime numbers



int main ()
{
	int n;
	printf("please enter number of elements");
	scanf("%d",&n)
	int array[n];
	printf("please enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}// elements of array are taken in as input
	pair(array[n]);
	return 0;
}