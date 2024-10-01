#include<stdio.h>
//Creating function to find GCD
int gcd(int a,int b){
	if ( a> b){
	int temp = a;
	a = b;
	b = temp;
	}
	while((b%a)!=0){
	int swap= b%a;
	b=a;
	b =swap;}
	return a;}
//Checking if numbers are coprime
int CoPrime(int a,int b)
{ 
	if (gcd(a,b)==1){return 1;}
	else return 0;
//Pairing elements in array
void pair(a[]){
	for(int i<0;i< int n;i++){
	for(int j=i+1;j<n;j++);
	int a=A[i];
	int b=A[j];}
	return a,b;
	} 
int main()
{
	int a[5],n;
	printf("Enter 5 numbers = ");
	//Creating Array
	for(int i=0;i< n;i++){
	scanf("%d",&a[i]);
	}
	pair(a);
	CoPrime(a,b);
	return 0;
	}
	
	
