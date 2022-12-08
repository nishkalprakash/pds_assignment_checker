/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 5-4
Description : To check for range and elements in bin
*/
#include <stdio.h>
int main()
{
	int i=0,j=0,k=0,t,max,min,n,bin;
	printf("Enter the number of elements to be stored in array\n");
	scanf("%d",&n);
	int A[n];
	printf("Enter the Values of the array in different lines\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n;i++)											//MIN MAX
		{
			if(max<A[i])
			max=A[i];
			else
			min=A[i];
		}
	printf("Enter The number of bins to be created");							//No of bins
	scanf("%d",&bin);
	for(i=0;i<n;i++)											//Sorting
		for(j=0;j<n;j++)
		{
			if(A[i]<A[j])
			{
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	int r1=1;
	int r2=r1+max/bin;
	for(i=0;i<=bin;i++)
	{	
		t=0;
		printf("Bin%d -> ",i+1);
		for(j=0;j<=n;j++)
			{
			if(A[j]>=r1 && A[j]<=r2)
			{printf("%d ",A[j]);
			t++;}
			}	
		printf(" Elems = %d \n",t);
		r1=r1+(max/bin);
		r2=r2+(max/bin);
	}

	return 0;	
}
