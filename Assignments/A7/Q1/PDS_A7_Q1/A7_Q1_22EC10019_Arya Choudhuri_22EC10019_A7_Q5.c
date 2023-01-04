/*  
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 7
	Description : Program to insert element into sorted array
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	
	printf("Enter number of elements: ");
	scanf("%d" , &n);

	int ptr[n+1]; 

	printf("Enter elements (in ascending order) : ");

	for (int i = 0 ; i < n ; i++)
		scanf("%d" , ptr+i);

	int m;
	printf("Enter new value to be inserted: ");
	scanf("%d",&m);

	int res ; 
	printf("Input array: ");
	
	for (int i = 0 ; i < n ; i++)
		printf("%d " , ptr[i]);

	for (int i = 0 ; i < n ; i++)
	{
		if ((ptr[i] <= m) && ( ptr[i+1] >= m))
		{
			res = i;
			break;
		}
	}
	
	
 	for (int j = n-1 ; j > res ; j--)
	{
		 ptr[j+1] = ptr[j];
	}
	
	ptr[res+1] = m ;

	printf("\n Output array: ");
	for (int i = 0 ; i < n+1 ; i++)
		printf("%d " , ptr[i]);

	return 0;
}
	





