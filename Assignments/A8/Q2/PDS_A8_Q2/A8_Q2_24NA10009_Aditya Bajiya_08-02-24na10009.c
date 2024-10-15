#include<stdio.h>
int main()
{
	int n , A[101], m , temp;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{scanf("%d", &A[i]);}
	
	//sorting
	for(int i = 1; i<n ; i++)
	{
		for(int j=i ; j>0 ;j--)
		{
			if(A[j]<A[j-1])
			{temp=A[j];
			 A[j]=A[j-1];
			 A[j-1]=temp;}
		}
	}
	
	
	printf("enter m ");
	scanf("%d", &m);
	int c;
	for(int i=0; i<n+1 ; i++)
	{	if(m<A[i])
		{c = A[i];
		A[i]=m;
		m = c;
		}
	}
	
	printf("Output Array: [");
	for(int i = 0; i<n;i++)
	{printf("%d, ", A[i]);}
	printf("%d]", m);
	return 0;
}
