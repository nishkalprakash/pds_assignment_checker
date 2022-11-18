/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

int main(void)
{
    int n, i, k, c;
    char a[25];

    printf("Enter the number of elements lies in [1,20] : ");
    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        printf("Enter the element in sorted order: ");
        scanf("%c", a[i]);
    }

    printf("Enter the key element x,which you want to search: ");
    scanf("%d", &k);

     printf("Choose the algorithm, type 1 for linear search and 2 for binary search:  ");
    scanf("%d", &c);


    if (c == 1)
    {
        printf("Executing the linear search algorithm\n");
        for ( i = 0; i<n ; i++)
        {
            if ( a[i] == k)
            {
                printf("Successful search\n");
            }
        }

    }
    else
    {
        printf("Executing the binary search algorithm\n");
        for ( i = 0; i<n ; i++)
        {
            if ( a[i] == k)
            {
                printf("Successful search\n");
            }
        }

    }



}
