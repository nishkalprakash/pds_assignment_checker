#include<stdio.h>
 //function to do the sorting
int* sort(int A[],int n)
{
	for(int j=0;j<n-1;j++)
	{
	for(int k=j+1;k<n;k++)
		{
			if(A[k]<A[j])
			{
				int temp;
				temp=A[j];
				A[j]=A[k];
				A[k]=temp;
			}	
		}
	}
	return A;
}
int main()
{
	//take the size of input
	int n;
	scanf("%d",&n);
	// taking input in array
	int A[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	//sorting array
	 sort(A,n);
	 //insertin m maintaining the order
	 int m;
	 scanf("%d",&m);
	 for(int i=0;i<n;i++)
	 {
	 	if(A[i]>m)
	 	{
	 	for(int j=n;j>=i;j--)
	 	{
	 		A[j+1]=A[j];
	 	}
	 	A[i]=m;
	 	break;
	 	}
	 	else
	 		A[n]=m;
	 }
	 //printing sorted array
	 for(int i=0;i<=n;i++)
	{
		printf(" %d",A[i]);
	}
	
	return 0;
}
