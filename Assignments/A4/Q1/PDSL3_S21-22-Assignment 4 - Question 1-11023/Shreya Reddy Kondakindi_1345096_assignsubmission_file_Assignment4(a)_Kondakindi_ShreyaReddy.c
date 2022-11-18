/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>

void sets(int select[],int arr[],int a,int r,int start,int end)
{
    if(a==r)
    {
        for(int i=0;i<r;i++)
            printf("%d",arr[select[i]]);
        printf("\n");
        return;


    }
    for(int i=start;i<=end;i++)
    {
        select[a]=i;
        sets(select,arr,a+1,r,i,end);
    }
    return;

}
void sets1(int arr[],int n,int r)
{
    int select[r+1];
    sets(select,arr,0,r,0,n-1);
}
int main()
{
    int arr[100],i,n,x;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the length:");
    scanf("%d",&x);
    sets1(arr,n,x);
    return 0;
}

