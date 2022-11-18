/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
void CreateBins(int n,int *arr,int m,int **bin)
{
    int low=INT_MAX,high=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(low>arr[i])low=arr[i];
        if(high<arr[i])high=arr[i];
    }
    int range=high-low+1;
    int bin_range=(range+m-1)/m;
    int cur=low;
    for(int i=0;i<m;i++)
    {
        int ind=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=cur && arr[j]<cur+bin_range)
            {
                bin[i][ind]=arr[j];
                ind++;
            }
        }
        printf("bin%d->",i+1);
        for(int j=0;j<ind-1;j++)
        {
            printf("%d,",bin[i][j]);
        }
        printf("%d,Number of elements in bin%d=%d\n",bin[i][ind-1],i+1,ind);
        cur+=bin_range;

    }
}
int main()
{
    int n;
    printf("enter the number of array elements:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter the array elements:");
    char a;
    int num=0,i=0,neg=0;
    scanf("%c",&a);
    while(1)
    {
        scanf("%c",&a);
        if(a==',' || a=='\n')
        {
            if(neg)arr[i]= -num;
            else arr[i]=num;
            i++;
            num=0;
            neg=0;
            if(a=='\n')break;
        }
        else if(a==' ')
        {
            //do nothing
        }
        else if(a=='-')
        {
            neg=1;
        }
        else
        {
            num=num*10+(a-'0');
        }
    }
    int m;
    printf("enter the number of bins:");
    scanf("%d",&m);
    int *bin[m];
    for(i=0;i<m;i++)
    {
        bin[i]=(int*)malloc(n*sizeof(int));
    }
    CreateBins(n,arr,m,bin);
}
