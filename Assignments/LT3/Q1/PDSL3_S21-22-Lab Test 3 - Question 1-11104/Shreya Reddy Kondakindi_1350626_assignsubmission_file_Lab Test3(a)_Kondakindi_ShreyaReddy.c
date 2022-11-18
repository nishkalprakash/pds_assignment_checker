/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("enter number of rows:");
    scanf("%d",&m);
    printf("enter number of columns:");
    scanf("%d",&n);
    int a[m][n];
    int i,j;
    printf("enter the elements of the array:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",a[m][n]);
        }
    }
    printf("the elements are:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[m][n]);
            if(j==m)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

