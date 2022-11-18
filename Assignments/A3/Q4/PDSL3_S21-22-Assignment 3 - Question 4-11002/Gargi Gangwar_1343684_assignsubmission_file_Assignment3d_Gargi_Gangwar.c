#include <stdio.h>
#include <conio.h>

int linear_search(int a[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
}
int bin_search(int a[],int x,int n)
{
    int m;
    int l=0;
    int u=n-1;
    while(1)
    {
        if(l>u)
            break;
        m=(l+u)/2;
        if(a[m]==x)
            return m;
        else if(a[m]>x)
            u=m-1;
        else
            l=m+1;
    }
    return -1;
}
int main()
{
        printf("Enter the number of elements.\n");
        int a[20];
        int n;
        scanf("%d",&n);
        printf("Enter elements.");
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int f=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("Enter your choice.");
            int choice;
            scanf("%d",&choice);
            printf("Enter element to be searched.");
            int x;
            scanf("%d",&x);
            if(choice==1)
                printf("%d",linear_search(a,x,n));
            else if(choice==0)
                printf("%d",bin_search(a,x,n));
            else
                printf("Wrong input.");
        }
        else
            printf("Not in ascending order.");
        getch();
    }
