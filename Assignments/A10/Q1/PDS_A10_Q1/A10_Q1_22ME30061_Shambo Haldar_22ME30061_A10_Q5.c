/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 10
Description : Program to print the elements at the even position of a list
*/

#include<stdio.h>
#include<stdlib.h>

int createlist(int n,int *a)
{
	a = (int*)malloc(sizeof(int)*n);
	int i;
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void printlist(int a[],int n)
{
	int i;

	for(i = 0;i < n;i++){
		printf("%d ",a[i]);
	}
}

int main()
{
	int i,j,n,*a,*b,len = 0;

	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\n");

	//createlist(n,a);

	a = (int*)malloc(sizeof(int)*n);

	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}

	b = (int*)malloc(sizeof(int)*n);

/*	for(i = 1;i < n;i++){
//		j = 0;
		if(i%2 != 0){
//			b[j] = a[i];
//			len++;
//			j++;
			printf("%d ",a[i]);
		}
	}
*/
	printf("\nOriginal list = ");
	printlist(a,n);
	printf("\nModified list = ");
	//printlist(b,len);
	for(i = 1;i < n;i++){
//		j = 0;
		if(i%2 != 0){
//			b[j] = a[i];
//			len++;
//			j++;
			printf("%d ",a[i]);
		}
	}

	return 0;
}
