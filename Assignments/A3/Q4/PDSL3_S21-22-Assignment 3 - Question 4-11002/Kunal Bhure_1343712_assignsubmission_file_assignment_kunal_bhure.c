#include<stdio.h>
int main()
{
    int i,a[20],flag=0,n,m,k;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    {
        for(i=0; i<n; i++)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
            }
            else break;
        }
        while(flag=1)
        {
            printf("re-enter numbers");
            for(i=0; i<20; i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0; i<n; i++)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
            }
            else flag=0;
        }
        break;
        }
    }
    printf("enter number to search ");
    scanf("%d",&m);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search");
    scanf("%d",&k);
    if(k==1)
    {
        linear_search(a[i],m);
    }
    else if(k==0)
    {

    }
}
int linear_search(int a[],int m)
{
    int i,flag=0;
    for(i=0; i<20; i++)
    {
        if(a[i]==m)
        {
            flag=1;
            if(flag=1)
            {
                printf("yes found");
            }
        }
    }
}
int bin_search()
{


}
