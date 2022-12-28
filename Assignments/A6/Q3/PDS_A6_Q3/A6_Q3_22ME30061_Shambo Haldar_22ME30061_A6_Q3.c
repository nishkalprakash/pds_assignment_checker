/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 6
Description : Program to merge two sorted arrays and return the resulting sorted array
*/

#include<stdio.h>

int* Merge(int size1,int size2,int *ptr1,int *ptr2)
{
	int i,j,a,b; 
	//ptr1 = realloc(ptr1,siz1 + siz2);
	//a = *ptr1;
	//b = *ptr2;
	for(i = 0;i < size1;i++){
		for(j = 0;j < size2;j++){
				if(*ptr1 <= *ptr2){
					printf("%d ",*ptr1);
					ptr1++;	
				}
				if(*ptr1 > *ptr2){
					printf("%d ",*ptr2);
					ptr2++;
				}
		}
	}

		
	
		//ptr1[size1 + i] = ptr2[i];
	return 0;
}

int main()
{
	int A[100],B[100],i,n,m;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("Enter values: ");
	for(i = 0;i < n;i++)
		scanf("%d",&A[i]);
	printf("Enter size: ");
	scanf("%d",&m);
	printf("Enter values: ");
	for(i = 0;i < m;i++)
		scanf("%d",&B[i]);
	printf("\nA = ");
	for(i = 0;i < n;i++)
		printf("%d ",A[i]);
	printf("\nB = ");
	for(i = 0;i < m;i++)
		printf("%d ",B[i]);	
	printf("\nC = ");
	Merge(n,m,&A[0],&B[0]);
	//printf("\nC = ");
	//for(i = 0;i < m+n;i++)
	//	printf("%d ",A[i]);
	printf("\n%d\n",m+n);
	return 0;
}
