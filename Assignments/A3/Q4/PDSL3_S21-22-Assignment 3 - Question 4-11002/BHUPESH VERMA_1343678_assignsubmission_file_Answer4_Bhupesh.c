#include <stdio.h>

//function to search for an elemenet in a list using linear search
int linear_search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
	    if (arr[i] == x)
			return i;
	}
	return -1;
}

//function to search for an elemenet in a list using bin search
int bin_search(int arr[],int l, int r, int x)
{
    int m; //middle

    while (l <= r)
    {
        m = l + (r-l)/2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}


int main()
{
    int n,sort = 1,x,search,index;

    printf("Enter the number of elements n: ");
    scanf ("%d",&n);

    int arr[n];

    while(sort)
    {
        sort = 0;
        //filling in the elements of array
        printf("Enter the elements in sorted order: ");
        for (int i = 0; i < n; i++)
        {
            scanf ("%d",&arr[i]);

            if (i>0)
                if(arr[i] < arr[i-1])//checking if sorted or not
                    sort = 1;
        }

        if(sort == 1) //if not sorted then filling elements again
            printf("Not sorted. Enter again\n");

    }

    printf("Enter the key element x, which you want to search: ");
    scanf ("%d",&x);

    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
    scanf ("%d",&search);

    //calling search algorithm
    if(search == 1)
        index = linear_search(arr,n,x);
    else
        index = bin_search(arr,0,n,x);

    //printing index
    if (index>-1)
        printf("Element %d has been found at the index %d",x,index);
    else
        printf("Element %d not found",x);

    return 0;
}
