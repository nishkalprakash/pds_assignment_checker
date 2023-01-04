/*  
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 7
	Description : Program to find repeated numbers
*/

#include <stdio.h>

void sort (int arr[] ,int n);


int main()
{
	int n;
	
	printf("Enter number of elements: ");
	scanf("%d" , &n);

	int arr[n] ; 

	printf("Enter elements: ");

	for(int i = 0 ; i < n ; i++)
		scanf("%d" , &arr[i]);
	
	sort(arr , n);

	int m;
	printf("m = ");
	scanf("%d" , &m);
	
	int flag = 0;

	for (int i = 0 ; i < n ; i++)
	{
		if (i>0)
		{
			if (arr[i] == arr[i-1])
				continue;
		}
		int count = 1 ;
		for (int j = i+1 ; j < n ; j++)
		{
			if (arr[i] == arr[j])
				count++;
			else
				break;
		}
		if (count == m) 
		{
			printf("%d " , arr[i]);
			flag++;
		}

	}

	if (flag == 0)
		printf("NO number ");

	printf("occurs %d times" , m);
	return 0;


}

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


