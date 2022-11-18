/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    printf("enter the dimensions of the input image matrix:");
    scanf("%d%d",&n,&m);
    int image[n][m];
    printf("enter the input image matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&image[i][j]);
        }
    }
    int k;
    printf("enter the kernel size:");
    scanf("%d",&k);
    int kernel[k][k];
    printf("enter the kernel elements:\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d",&kernel[i][j]);
        }
    }
    printf("output image matrix is:\n");
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m-k;j++)
        {
            long long sum=0;
            for(int x=0;x<k;x++)
            {
                for(int y=0;y<k;y++)
                {
                    sum+=image[i+x][j+y]*kernel[x][y];
                }
            }
            printf("%lld",sum);
        }
        printf("\n");
    }

}
