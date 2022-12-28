/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 6
 Description : Program that prints and performs operations on sets
*/

#include <stdio.h>						//including the standard input output library

int *BuildSet(int* A,int n)
{
	printf("Enter values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	return A;
}

int SearchSet(int* A, int x)
{
	int l = sizeof(A)/sizeof(*A);
	for(int i=0;i<l;i++)
	{
		if(*(A+i)==x)
		return 1;
	}
}
int main()
{
	int a,b,c,val;
	printf("Enter size of A: ");
	scanf("%d",&a);
	
	int A[a];
	int *set1=BuildSet(A,a);
	
	printf("Enter size of B: ");
	scanf("%d",&b);
	
	int B[b];
	int *set2=BuildSet(B,b);

	printf("Choose the number according to choice:\n");
	printf(" Press ‘1’ to perform search in Set A");
	printf(" Press ‘2’ to perform search in Set B");
	printf(" Press ‘3’ to perform Union of Set A and Set B");
	printf(" Press ‘4’ to perform Intersection of Set A and Set B");
	printf(" Press ‘5’ to perform Difference of Set A and Set B");
	printf(" Press any other key to quit");
	scanf("%d",&c);
	switch(c)
	{
		case 1:	printf("Enter value to search: ");
			scanf("%d",&val);
			if(SearchSet(set1,val)==1)
			{
				printf("%d is present in set A\n",val);
			}	
			
			break;
		
		case 2: printf("Enter value to search: ");
			scanf("%d",&val);
			if(SearchSet(set2,val))
			{
				printf("%d is present in set B\n",val);
			}
			break
	}
	return 0;
}
