/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 7
	Description : Program inputs a sorted array and inserts a number into it in the proper place so that the final array remains sorted 
*/
#include <stdio.h>


int main()
{
	int n,m,i,prev;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int A[n+1];
	printf("Enter the %d elements of the array in increasing order : ",n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",A+i);
		if(i==0)
			prev=A[i];
		if(A[i]<prev)
		{
			printf("Wrong Input!! Enter in increasing order!!\n");
			return 0;
		}
		prev=A[i];
	}
	// for (int i = 0; i < n; ++i)				//Since we are taking as input an sorted array, we do not require this
	// {
	// 	for (int j = 0; j < n-1-i; ++j)
	// 	{
	// 		if(A[j]>A[j+1])
	// 		{
	// 			int temp=A[j];
	// 			A[j]=A[j+1];
	// 			A[j+1]=temp;
	// 		}
	// 	}
	// }
	printf("Enter the element to be inserted : ");
	scanf("%d",&m);
	for (i = 0; i < n; ++i)
		if(m<A[i])
			break;

	printf("Input Array : ");
	for (int j = 0; j < n; ++j)
		printf("%d ",*(A+j));

	for (int j = n; j > i ; --j)
		A[j]=A[j-1];
	A[i]=m;

	printf("\nInserted number : %d\n",m );

	printf("Output Array : " );
	for (int j = 0; j < n+1; ++j)
		printf("%d ",*(A+j));

	printf("\n");
	return 0;
}