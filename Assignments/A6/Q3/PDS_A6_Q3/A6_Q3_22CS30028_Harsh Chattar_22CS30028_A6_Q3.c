/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 6
Description : merge two sorted array.
*/

#include <stdio.h>


int* Merge(int size1,int size2, int *ptr1, int *ptr2)
{
	int tsize = size1 +size2;
	int c[tsize];
	int temp;
	for(int i=0;i<size1;i++)
	{
		c[i] = *(ptr1 + i);
	}
	for(int j = size1;j<size2;j++)
	{
		c[j] = *(ptr2 + j);
	}
	for(int k = 0;k<tsize;k++)
	{
		for(int i=k+1;i<tsize;i++)
		{
			if(c[k]>c[i]){
				temp = c[i];
				c[i] = c[k];
				c[k] = temp;
			}
		}	
	}
	return 

}

int main()
{
	int size1;
	printf("Enter size : ");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter values :");
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
		
	}
	int size2;
	printf("Enter size : ");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter values :");
	for(int i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
		
	}
	printf("A = ");
	for(int i=0;i<size1;i++)
	{
		printf("%d ",arr1[i]);
		
	}
	printf("\n");
	printf("B = ");
	for(int j=0;j<size2;j++)
	{
		printf("%d ",arr2[j]);
	}
	int c[size1+size2];
	c = Merge(size1,size2,arr1,arr2);
	printf("C = ");
	for(int i=0;i<(size1+size2);i++)
	{
	printf("%d ",);
	}
	
	
	


return 0;
}
