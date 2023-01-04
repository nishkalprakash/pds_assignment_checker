/*  
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 7
	Description : Program to find out of order elements
*/

#include <stdio.h>

int main()

{
	int arr[10] , n;
	
	printf("How many elements in array (0-10) : ");
	scanf("%d" , &n);

	printf("Enter elements:");
	
	for (int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &arr[i]);
	}

	int count = 0 ;		// for all elements we check if they are in order individually
	
	for (int j = 0 ; j < n ; j++)
	{
		int elem = arr[j];
		int flag = 0;

		int c1 = 0;
		for (c1 = 0 ; c1 < j ; c1++)
		{
			if (arr[c1] <= arr[j])
				continue;
			else
				flag++;
		}

		int c2 = j+1 ;
		for (c2 ; c2 < n ; c2++)
		{
			if (arr[j] <= arr[c2])
				continue;
			else
				flag++;
		}
		
		if (flag!=0)
			count++;
	}
	
	printf("Out of order: %d" , count);
	return 0;
}


			
