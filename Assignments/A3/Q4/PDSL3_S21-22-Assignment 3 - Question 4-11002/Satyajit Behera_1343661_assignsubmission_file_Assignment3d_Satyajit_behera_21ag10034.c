
/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/
#include <stdio.h>
/*function for linear search */
int linear_search(int x, int b[])
{
    int i;
    for (i = 0; i < 20; i++)
        if (b[i] == x)
            return i;
    return -1;
}
/*function for bineary search */
int binary_search(int x, int b[20], int n)
{
    int mid;
    int high = n - 1, low = 0;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (x == b[mid])
            break;
        else
        {
            if (x > b[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if (x == b[mid])
    {
        return mid + 1;
    }
    return -1;
}

int main()
{
    int N, k = 0,min,flag=0;
    printf("Enter number of elements  : ");
    scanf("%d", &N);

    int a[N];

    printf("Enter the elements in sorted order : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
/*for checking the numbers are sorted or not*/
min=a[0]
for(int i=1;i<=N;i++)
{
    if(a[i]<min)
    {
        flag++
    }
}
if (flag>0)
{
    printf("THE NUMBERS ARE NOT SORTED PLEASE SORT  IT");
    continue;
}

    int B;
    printf("Enter the key element x, which you want to search : ");
    scanf("%d", &B);

    int M, t;
    printf("Choose the algorithm : Type 1 for linear search and 2 for binary search\n");
    scanf("%d", &M);

    if (M == 1)
    {
        printf("Executing the linear search algorithm.");
        temp = linear_search(B, a);
        if (t != -1)
        {
            printf("Succesful search\n");
            printf("Element %d has been found at the index %d", B, t);
        }
        else
        {
            printf("Unsuccesful search\n");
            printf("Element %d not found in the list.", B);
        }
    }
    else
    {
        printf("Executing the linear search algorithm.");
        t = binary_search(B, a, N);
        if (t != -1)
        {
            printf("Succesful search\n");
            printf("Element %d has been found at the index %d", B, t);
        }
        else
        {
            printf("Unsuccesful search\n");
            printf("Element %d not found in the list.", B);
        }
    }

    return 0;
}
