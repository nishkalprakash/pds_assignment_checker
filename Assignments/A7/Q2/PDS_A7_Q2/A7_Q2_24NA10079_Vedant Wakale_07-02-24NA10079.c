#include <stdio.h>

int gcd(int a,int b) 
{
int f;
	while (a!=0)
	{
	f=a;
	a=b%a;
	b=f;
	}
	return f;
	
	}
	

void pair( int a[]){

	
int i,k; 
	
	for (i=0;i<5;i++); 
	{
	for(k=i+1 ;k<5;k++) {
	
	if (gcd(a[i],a[k]==1) printf("%d and %d are co-prime\n",a[i],a[k]);
		}

}

	
	
	
	
	
	
	
	
