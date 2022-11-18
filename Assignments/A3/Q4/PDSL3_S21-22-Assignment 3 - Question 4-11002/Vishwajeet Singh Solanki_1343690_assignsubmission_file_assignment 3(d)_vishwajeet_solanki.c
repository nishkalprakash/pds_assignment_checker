/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079s
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:3(d)
*/

# include<stdio.h>

int linear_search(int a[],int x,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int bin_search(int a[],int x,int n)
{
    int lower,higher,mid;
    for(lower=0,higher=n-1;lower<=higher;)
    {
        mid = (n-1)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            lower = mid+1;
        }
        else
        {
            higher = mid-1;
        }
    }

    return -1;
}

int main()
{
    int n,flag,i,x,algo,indx;
    printf("Enter Number of elements:\n");
    scanf("%d",&n);
    int a[n];
    do
    {
        flag = 0;
        printf("Enter the elements in sorted order:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i>=1)
            {
                if(a[i]<a[i-1])
                {
                    flag = 1;
                    printf("Not Sorted, Enter again:\n");
                    break;
                }
            }
        }

    } while (flag == 1);

    printf("Enter the key element x, which you want to search:\n");
    scanf("%d",&x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search:\n");
    scanf("%d",&algo);

    if(algo == 1)
    {
        printf("Implementing the linear search algorithm\n");
        indx = linear_search(a,x,n);
    }

    if(algo == 2)
    {
        printf("Implementing the Binary search algorithm\n");
        indx = bin_search(a,x,n);
    }

    if(indx==(-1))
    {
        printf("-1 denoting an unsuccessful search\n");
    }
    else
    {
        printf("Successful search\nElement %d has been found at position %d\n",x,indx);
    }

    return 0;
}

