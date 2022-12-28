/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 6
	Description : Program to merge two sorted arrays
*/

#include <stdio.h>
#include <stdlib.h>

int *p;

int *Merge (int size1 ,int size2 ,int *ptr1, int *ptr2)
{

	p = (int *)malloc( (size1+size2)*sizeof(int));
	int s = size1 + size2 ;
	int i,j;
	for (i = 0 ; i < size1 ; i++)
	{
		p[i] = *(ptr1 + i);
	
	}
	for (int i = size1 ; i < size2 ; i++)
	{
		p[i] = *(ptr2 + i - size1 );
	}
		
	for ( i = 0 ; i < s ; i++ )
	{
		for ( j = 0 ; j < s-1 ; j++)
		{
			if (p[j]>p[j+1])
			{
				int temp = p[j];
				p[j] = p [j+1];
				p[j+1] = temp;
			}
		}
	}
	return p;
}

int main()
{
	int n1;
	printf("Enter size of 1st array: ");
	scanf("%d" , &n1);

	int arr1[n1];
 
	printf("Enter values: ");
	
	int i;
	
	for ( i = 0 ; i < n1 ; i++ )
		scanf("%d" , &arr1[i]);
	
	
	printf(" Arr1 =  " ) ;
		
	for ( i = 0  ; i < n1 ; i++ )
		printf("%d " , arr1[i]);
	

	int n2;
	printf("\nEnter size of 2nd array: ");
	scanf("%d" , &n2);

	int arr2[n2];

	printf("Enter values: ");
	
	
	for ( i = 0 ; i < n2 ; i++ )
		scanf("%d" , &arr2[i]);
	
	
	printf(" Arr2 =  " ) ;
		
	for ( i = 0  ; i < n2 ; i++ )
		printf("%d " , arr2[i]);
	
	int s = n1 + n2;

	
	int *p = Merge ( n1 , n2 , arr1 , arr2);
	
	printf("\nC = ");

	for ( i = 0 ; i < s ; i++)
		printf("%d " , p[i]);

	return 0 ;
}


