/*  
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 7
	Description : Program to find largest appended number
*/

#include <stdio.h>

void sort (int arr[] , int n)		// bubble sort
{
	int i = 0 ;
	int j = 0 ; 

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (arr[i] < arr[j])
			{
				char temp = arr[i] ; 
				arr[i] = arr[j] ; 
				arr[j] = temp ;
			}
		}
	}
}


int main()
{
	int n;
	
	printf("Enter number of elements: ");
	scanf("%d" , &n);

	int arr[n] ; 

	printf("Enter elements: ");

	for (int i = 0 ; i < n ; i++)
		scanf("%d" , &arr[i]);
	
	sort(arr,n);

}
