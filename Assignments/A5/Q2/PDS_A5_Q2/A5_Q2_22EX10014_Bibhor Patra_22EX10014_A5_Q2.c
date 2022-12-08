/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:5
Description: Program to check if a given pair of numbers is coprime
*/

#include<stdio.h>
#include<stdlib.h>
int count=0;
int gcd(int a,int b)
{
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	else if(b>a)
		return gcd(a,b-a);
}// GCD calculating function thus defined
void  coPrime(int a,int b){
	int flag;
	flag = gcd(a,b);
	if(flag == 1){
		printf("%i & %i is a pair of co prime numbers\n",a,b);
	
	count ++;}
}// numbers were checked if they are coprime
void pair(int a[]){
	int i; int j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++){
			coPrime(a[i],a[j]);
		}
	}
}
int main(){
	int ar[5];
	int  i;
	for(i=0;i<5;i++){
		scanf("%d",&ar[i]);
	}// Input is taken in this part of the program
	pair(ar);
	if(count==0){
		printf("No coprimes found");
	}// This part of the code is to print the text when no coprime numbers are found
    return 0;
}
