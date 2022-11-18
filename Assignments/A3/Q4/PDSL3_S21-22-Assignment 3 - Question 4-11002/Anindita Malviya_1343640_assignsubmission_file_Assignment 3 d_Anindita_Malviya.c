#include <stdio.h>

int linearsearch(int arr[], int n, int x);
int binarysearch(int arr[],int l, int r, int x);

int main()
{
    int n;

    printf("Enter the number of elements n: ");
    scanf ("%d",&n);

    int arr[n];
    int sorter;

    for(sorter = 0; sorter < n; sorter++)
    {
        printf("Enter the elements in sorted order: ");
        for (int i = 0; i < n; i++)
        {
        scanf ("%d",&arr[i]);
            if (i>0)
            {
                if(arr[i] < arr[i-1])
                    sorter = 1;
            }
        }

        if(sorter != 1)
            printf("Not sorted. Enter again\n");

    }
    int x,type,answer;
    printf("Enter the key element x, which you want to search: ");
    scanf ("%d",&x);

    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
    scanf ("%d",&type);

    if(type == 1)
        answer = linearsearch(arr,n,x);
    else
        answer = binarysearch(arr,0,n,x);

    if (answer>-1)
        printf("Element %d has been found at the index %d",x,answer);
    else
        printf("Element %d not found",x);

    return 0;
}

int linearsearch(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;

        return -1;
}


int binarysearch(int arr[],int p, int q, int r)
{
    int a;
    while (p <= q)
    {
        a = p + (q-p)/2;

        if (arr[a] == r)
        {
            return a;
        }

        if (arr[r] < r)
        {
            p = a + 1;
        }

        else
        {
            q = a - 1;
        }

    return -1;
    }
}

