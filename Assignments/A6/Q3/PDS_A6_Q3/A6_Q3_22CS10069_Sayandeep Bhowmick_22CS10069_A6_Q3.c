/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment 6
*/
#include <stdio.h>
#include <stdlib.h>

int* Merge(int size1, int size2, int *ptr1, int *ptr2)
{
	int s=size1+size2;
	int *p=(int*)malloc(s*sizeof(int));			//Since p is a local variable here some compilers may give garbage values. In that case just making p global would help
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
	return p;
	// printf("\nC = ");
	// for(int i=0;i<s;i++)
	// 	printf("%d  ",p[i]);

	// for (int i = 0; i < s; ++i)
	// {
	// 	for (int j = 0; j < s-1; ++j)
	// 	{
	// 		if(p[j]>p[j+1])
	// 		{
	// 			int t=p[j];
	// 			p[j]=p[j+1];
	// 			p[j+1]=t;
	// 		}
	// 	}
	// }
}

int main()
{
	int s1,s2;
	printf("Enter the size of the first array : ");
	scanf("%d",&s1);
	int A[s1];
	printf("Enter the sorted elements of the first array(increasing order) : ");
	for(int i=0;i<s1;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the size of the second array : ");
	scanf("%d",&s2);
	int B[s2];
	printf("Enter the sorted elements of the second array(increasing order) : ");
	for(int i=0;i<s2;i++)
	{
		scanf("%d",&B[i]);
	}
	int *pA=A;
	int *pB=B;
	int *p=Merge(s1,s2,pA,pB);
	printf("\nA = ");
	for(int i=0;i<s1;i++)
		printf("%d  ",A[i]);
	printf("\nB= ");
	for(int i=0;i<s2;i++)
		printf("%d  ",B[i]);
	printf("\nC = ");
	for(int i=0;i<s1+s2;i++)
		printf("%d  ",p[i]);
	printf("\n");
	return 0;
}
