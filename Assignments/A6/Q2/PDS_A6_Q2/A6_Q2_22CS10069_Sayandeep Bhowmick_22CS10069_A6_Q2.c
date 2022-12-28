/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment 6
*/
#include <stdio.h>

int f,l,n;

int gcd(int m, int n)
{
	if(m%n==0)
		return n;
	else
		return(gcd(n,(m%n)));
}

void Co_Prime(int a, int b)
{
	if(gcd(a,b)==1)
				printf("(%d , %d)     ",a,b );
}

void pair(int A[])
{
// 	if(f>0)
// 		f--;
// 	else
// 	{
// 		l--;
// 		f=--n-1;
// 	}
// 	pair(A);
// 	if(gcd(A[f],A[l])==1)
// 		return;
// 	else
// 	{
// 		printf("/(%d , %d/)     ",A[f],A[l] );
// 		return;
// 	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			Co_Prime(A[i],A[j]);
}

int main()
{
	// printf("%d\n", gcd(11,15));
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the %d elements of the array : ",n);
	float a;
	int flag=0,flag2=0;
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a);
		if(a!=(int)a)
			flag=1;
		if(a<1)
			flag2=1;
		A[i]=(int)a;
	}
	if(flag==1)
	{
		printf("Invalid entries : All elements should be integer numbers\n");
		return 0;
	}
	if(flag2==1)
	{
		printf("Invalid entries : All elements should be positive numbers\n");
		return 0;
	}
	// f=--n,l=--n;
	printf("Co-prime pairs : \n");
	pair(A);
	printf("\n");
	return 0;
}
