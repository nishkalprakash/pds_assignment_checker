#include<stdio.h>
int main ()
{
    int x,y,m,n,z;
    int matrix[10][10];
    printf("\nEnter the image size");
    scanf("%d%d",&x,&y);
    for (m=0;m<x;m++)
        {for(n=0;n<y;n++)
        scanf("%d",&matrix[m][n]);}
         for (m=0;m<x;m++)
        {for(n=0;n<y;n++)
        printf(" %d", matrix[m][n]);
        printf("\n");}
        z=y/2;
        printf(" Number of connected components=%d",z);


    return 0;

}
