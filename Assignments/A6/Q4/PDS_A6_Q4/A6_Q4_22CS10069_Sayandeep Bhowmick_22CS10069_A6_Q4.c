	/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Test 1
	Description : Prints the largest  and second largest number
*/
#include <stdio.h>
#include <stdlib.h>

int* BuildSet(int *A, int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",A+i);
	}
	return A;
}

int SearchSet(int* A,int n,int x)
{
	for (int i = 0; i < n; ++i)
		if(A[i]==x)
			return 1;
	return 0;
}

int* Union(int *A,int a,int* B,int b)
{
	int s=a+b;
	int* ptr1=A;
	int* ptr2=B;
	for(int i=0;i<s;i++)
	{
		if(*ptr1<*ptr2)
		{
			p[i]=*ptr1;
			ptr1++;
		}
		else
		{
			p[i]=*ptr2;
			ptr2++;
		}
	}
	int prev =*p-1;
	int count =0;
	int* p2=(int*)calloc(sizeof(int));
	for (int i=0;i<a+b;i++)
		if(prev!=p[i])
		{
			p2[count]=p[i];
			count++;
		}
	realloc(p2,sizeof(int)*count);
	return p2;
}

int* Intersection(int *A,int a,int* B,int b)
{

}

int* Difference(int *A,int a,int* B,int b)
{

}

void Print(int* A, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d   ",A[i]);
	}
}

int main()
{
	int A[n],B[n];
	return 0;
}
