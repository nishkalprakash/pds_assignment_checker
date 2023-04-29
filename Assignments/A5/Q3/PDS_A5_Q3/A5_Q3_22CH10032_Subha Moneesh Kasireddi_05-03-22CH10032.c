#include<stdio.h>

void swap(int p, int q);

int main()
{
    int n,direction;
    printf("Enter the size of the array and direction: ");
    scanf("%d %d",&n,&direction);
    int a[100];
    printf("Enter %d integers:\n",n);
    int i;
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}

void swap(int p, int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}
