/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>

int checkarray(int a[])
{
    for (int i = 0, j=(i+1); i < 20; i++)
    {
        if (a[i] > a[j])
        {
            return 1;
            break;
        }
        else
        {
            return (-1);
        }
    }
}

int lin_search(int a[], int x)
{
    for (int i = 0; i < 20; i++)
    {
        if (a[i] == x)
        {
            return 1;
        }
        else
        {
            return (-1);
        }
        
    }
}

int bin_search(int a[], int x, int n)
{
    int flag = (-1);
    for (int i = 0; i < n; i++)
    {
        if (a[(i + n) / 2] < x)
        {
            i += n;
            i /= 2;
        }
        else if (a[(i + n) / 2] > x)
        {
            n += i;
            n /= 2;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int n, x, algorithm;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in sorted order\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key you want to find\n");
    scanf("%d", &x);
    printf("Choose the algorithm, type 1 for linear search type 2 for binary search\n");
    scanf("%d", &algorithm);
    switch (algorithm)
    {
    case 1:
        if (lin_search(arr, x) == (-1))
        {
            printf("Unsuccessful search\n");
        }
        else
        {
            printf("Successful search\n");
        }
        break;
    case 2:
        if (checkarray(arr) != 1)
        {
            printf("The given array was not sorted. So binary operation is not applicable.\n");
        }
        else
        {
            int y;
            y=bin_search(arr, x, n);
            if (y==1)
            {
                printf("Successful search\n");
            }
            else
            {
                printf("Unsuccessful search\n");
            }
        }
        break;
    default:
        printf("Enter  a valid input\n");
        break;
    }
    return 0;
}