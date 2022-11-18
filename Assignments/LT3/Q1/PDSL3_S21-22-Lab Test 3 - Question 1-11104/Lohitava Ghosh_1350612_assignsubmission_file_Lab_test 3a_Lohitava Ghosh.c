/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <stdlib.h>

void filler(int** a,int** f,int m,int n,int k,int i,int j,int mode) //filler matrix
{
    if(j>=n||i>=m||i<0||j<0)
    {
        return;
    }
    if(f[i][j]==1)
    {
    if(mode==1)
    return;
    if(j+1<n)
    filler(a,f,m,n,k,i,j+1,0);
    else
    filler(a,f,m,n,k,i+1,0,0);
    }
    if(a[i][j]==0)
    {
    if(mode==1)
    return;
    if(j+1<n)
    filler(a,f,m,n,k,i,j+1,0);
    else
    filler(a,f,m,n,k,i+1,0,0);
    }
    else
    {
        f[i][j]=1;
        if(a[i][j]==1)
        {
            a[i][j]=k;
            filler(a,f,m,n,k,i-1,j-1,1);
            filler(a,f,m,n,k,i-1,j,1);
            filler(a,f,m,n,k,i-1,j+1,1);
            filler(a,f,m,n,k,i,j-1,1);
            filler(a,f,m,n,k,i,j+1,1);
            filler(a,f,m,n,k,i+1,j-1,1);
            filler(a,f,m,n,k,i+1,j,1);
            filler(a,f,m,n,k,i+1,j+1,1);
            if(mode==0)
            {
                k++;
                if(j+1<n)
                filler(a,f,m,n,k,i,j+1,0);
                else
                filler(a,f,m,n,k,i+1,0,0);
            }
            return;
        }
    }
}
int main()
{
int x,y;
printf("Enter the image size: ");
scanf("%d %d",&x,&y);
int **a=(int**)malloc(x*sizeof(int**)); //image matrix
int **f=(int**)malloc(x*sizeof(int**)); //connected matrix
int i;
for(i=0;i<x;i++)
{
    a[i]=(int*)malloc(y*sizeof(int));
    f[i]=(int*)malloc(y*sizeof(int));
}
printf("Enter the image: \n");
int j;
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        scanf("%d",&a[i][j]);
        f[i][j]=0;
    }
}
filler(a,f,x,y,2,0,0,0);
printf("Output image: \n");
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        if(a[i][j]>0)
            a[i][j]--;
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}

