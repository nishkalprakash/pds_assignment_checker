/*
Name : Sumedh Deshkar
Roll no. : 21MI33023
Section :3
*/



#include <stdio.h>

//function to search for an elemenet in a list using linear search
int linear_search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x) //if element if found then it's index is return
			return i;

	return -1; //if elemenet not found
}

//function to search for an elemenet in a list using bin search
int bin_search(int arr[],int l, int r, int x)
{
    int m; //middle

    while (l <= r)
    {
        m = l + (r-l)/2; //finding middle index

        if (arr[m] == x) //checking if middle element is search number
            return m;

        if (arr[m] < x) //if search number is larger than middle element
            l = m + 1;
        else //if search number is smaller than middle element
            r = m - 1;
    }

    return -1;
}


int main()
{
    int n,sort_flag,x,d,ans;

    //accepting siz of array
    printf("Enter the number of elements n: ");
    scanf ("%d",&n);

    int arr[n];

    do //using do while loop because it checks at the end if elements are sorted or not
    {
        sort_flag = 0;
        //filling in the elements of array
        printf("Enter the elements in sorted order: ");
        for (int i = 0; i < n; i++)
        {
            scanf ("%d",&arr[i]);

            if (i>0)
                if(arr[i] < arr[i-1])//checking if sorted or not
                    sort_flag = 1;
        }

        if(sort_flag == 1) //if not sorted then filling elements again
            printf("Not sorted. Enter again\n");

    }
    while(sort_flag);

    //reading the number to be searched in the list
    printf("Enter the key element x, which you want to search: ");
    scanf ("%d",&x);

    //asking which search algorithm to be used
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
    scanf ("%d",&d);

    //calling search algorithm based on users choice
    if(d == 1)
        ans = linear_search(arr,n,x);
    else
        ans = bin_search(arr,0,n,x);

    //printing final ans
    if (ans>-1) //if element is found
        printf("Element %d has been found at the index %d",x,ans);
    else //if element is not found
        printf("Element %d not found",x);

    return 0;
}
