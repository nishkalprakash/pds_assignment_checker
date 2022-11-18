#include <stdio.h>
int main() {
    int m,n;
    printf("Enter the size of image matrix:\n");//input of size
    scanf("%d%d",&m,&n);
    int img[m][n];
    printf("Enter the element of image\n");//input of element
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&img[i][j]);
        }
    }
    int x;
    printf("\nEnter the size of kernel\n");//size of kernel
    scanf("%d",&x);
    int k[x][x];
    printf("\nEnter the elements of kernel\n");//element of kernel
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            scanf("%d",&k[i][j]);
        }
    }
    int final[m-x+1][n-x+1];
    int sum=0,l,j,p;
    for(int i=0;i<m-x+1;i++)
    {
        for(l=0;l<n-x+1;l++)
        {
            for(j=i;j<i+x;j++)
            {
                for(p=l;p<l+x;p++)
                {
                    sum+=k[j-i][p-l]*img[j][p];//combining image with kernel
                }
            }
            final[i][l]=sum;//final net array
            sum=0;
        }
    }
    for(int i=0;i<m-x+1;i++)
    {
        for(int j=0;j<n-x+1;j++)
        {
            printf("%d ",final[i][j]);//output
        }
        printf("\n");
    }
    return 0;
}