//amrita singh
//24na10014
#include<stdio.h>


//getting the gcd of the two input numbers
	int gcd(int a,int b)
{	int rem;
	while(b)
	{ rem=a%b;
	a=b;
	b=rem;}//here "a" will give the value of gcd
	return a;}
	

	
int main()


{int a[5];
	for(int i=0;i<5;i++){
	printf("enter the value of element");//reading elements tothe array
	scanf("%d",&a[i]);}
	
	//calculating gcd
	for(int i=0;i<=3;i++){
	//getting the return value from the function gcd
	int tocheck =gcd(a[i],a[i+1]);//to check for the adjacent elements of the 	array
	if (tocheck==1)
	printf("\n%d and %d are coprime\n",a[i],a[i+1]);
	else
	printf("not co prime");}
	return 0;}
	
	
	
	
	
	//void program which will not give a return value
	void coprime(int a,int b)
{	 
	int rem;
	while(rem)
	
	{ rem=a%b;
	a=b;
	b=rem;}//here "a" will give the value of gcd
	if (a==1)//to check for the condition of the coprime
	return ;
	else
	return ;
	}
	
	
	
