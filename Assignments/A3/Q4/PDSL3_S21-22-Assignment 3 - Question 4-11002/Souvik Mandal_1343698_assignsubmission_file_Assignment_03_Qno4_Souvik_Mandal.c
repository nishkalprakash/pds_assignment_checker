/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/


#include <stdio.h>

int n;

int linear_search(int a[], int k)
{
    for (int i = 0; i < n; i++)
        if (a[i] == k)
            return i;
    return -1;
}


int bin_search(int a[], int k)
{
    int s = 0, e = n - 1;

    while (s <= n - 1)
    {
        int mid = s + (e - s) / 2;
    
        if (a[mid] == k)
    
            return mid;
    
        if (a[mid] < k)
    
            s = mid + 1;
    
        else


            e = mid - 1;
    }
    return -1;
}



int main()
{
    int k;

    printf("Enter the number of elements n:");
    
    scanf("%d", &n);
    
    
    int l[n];
    int s;
    
    while (1)
    {
        int c = 0;

        printf("Enter the elements in sorted order:");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &l[i]);
        }


        for (int i = 0; i < n - 1; i++)
        {
            if (l[i] < l[i + 1])
            {
                continue;
            }
            else
            {
                c = 1;
                break;
            }
        }


        if (c == 0)

        {
            printf("Enter the key element x, which you want to search:");
            scanf("%d", &k);

            printf("Choose the algorithm: Type 1 for linear search and 2 for binary search");
            scanf("%d", &s);


            break;

        }



        else

        {
            printf("Not sorted. Enter again\n");

            continue;
        }


    }
    
    int in;


    if (s == 1)

    {
        in = linear_search(l, k);
        printf("Executing the linear search algorithm\n");
    }


    else if (s == 2)
    {
        in = bin_search(l, k);
        printf("Executing the binary search algorithm\n");
    }


    if (in == -1)
    {
        printf("Unsuccessful search\nElement %d is not there", k);
    }


    else
    {
        printf("Successful search\nElement %d has been found at the index %d", k, in);
    }

    
}