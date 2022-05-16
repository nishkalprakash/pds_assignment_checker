// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
int linear_search(int list[], int x, int n);
int bin_search(int list[], int x, int n);

int main()
{
    int n, i,x,m, f,k = 0, list[20];
    printf("enter the number of elements\n");
    scanf("%d", &n);

    printf("enter the elements in sorted (increasing) order\n");

    while (k == 0)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &list[i]);
        }
        for (i = 0; i < (n - 1); i++)
        {
            if (list[i] < list[i + 1])
            {
                k = 1;
            }
            else
            {
                printf("NOT SORTED.ENTER AGAIN.\n");
                k = 0;
                break;
            }
        }
    }



printf("enter the key element x, which you want to search\n");
scanf("%d",&x);
printf("choose the algorithm:type 1 for linear and 2 for binary search\n");
scanf("%d",&m);
if (m==1)
{
    f=linear_search(list,x,n);
}
if (m==2)
{
    f=bin_search(list,x,n);
}

if (f==-1)
{
    printf("unsuccessful search\n");
    printf("index of %d:%d\n",x,f);
}
else
{
    printf("successful search\n");
    printf("index of %d:%d\n",x,f);
}




    return 0;
}

int linear_search(int list[], int x, int n)
{
    int i, q;

    for (i = 0; i < n; i++)
    {
        if (list[i] == x)
        {
            q = i;
            break;
        }
        else
        {
            q = -1;
        }
    }

    return q;
}

int bin_search(int list[], int x, int n)
{
    int low, high, i, q;
    low = 0;
    high = n;
    while (high > low)
    {
        i = (high + low) / 2;
        if (list[i] == x)
        {q=i;
        break;}
        if(list[i]>x)
        {
            high = i;
        }
        else
        {
            low = i;
        }
    }

    if (list[i] == x)
    {
        q = i;
    }
    else
    {
        q = -1;
    }

    return q;
}