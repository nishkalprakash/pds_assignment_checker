/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 6
Description : 
*/

#include <stdio.h>


void pair(int x,int y)
{
printf("(%d, %d) ",x,y);
}




int gcd(int a,int b)
{
	int temp;
	if((a%b)!=0)
	{
	temp = gcd(b,a%b);
	}
	else return b;
}

void CoPrime(int a,int b)
{
	int temp;
	if(b>a){
	temp = b;
	b=a;
	a=temp;
	}
	if(gcd(a,b) == 1){
	pair(a,b);
	
	}
}
	


int main()
{
int n;
printf("Enter no. of elements in the array:");
int arr[n];
int check=2;
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	if(arr[i]<0) check=0;	
}
if(check == 0) printf("Ivalid entry: All should be positive integers");
else
{
	for(int i =0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			CoPrime(arr[i],arr[j]);
		}
	}
}





return 0;
}
