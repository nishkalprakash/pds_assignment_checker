
#include <stdio.h>
#include<stdlib.h>

void connected(int** a,int r,int c,int i,int j,int flag)
{
    a[i][j]=flag;
  if(a[i-1][j-1]==1)
  connected( a,r,c, i-1, j-1,flag);
   if(a[i-1][j]==1)
   connected( a,r,c, i-1, j,flag);
  if (a[i-1][j+1]==1)
  connected( a,r,c, i-1, j+1,flag);
   if(a[i][j-1]==1)
   connected(a,r,c, i, j-1,flag);
   if(a[i][j+1] ==1)
   connected( a,r,c, i, j+1,flag);
   if(a[i+1][j-1]==1)
   connected( a,r,c, i+1, j-1,flag);
   if(a[i+1][j]==1)
   connected( a,r,c, i+1, j,flag);
   if(a[i+1][j+1]==1)
   connected( a,r,c, i+1, j+1,flag);
}
    

int main()
{
    int r,c;
    printf("enter the image size");
    scanf("%d%d",&r,&c);
    int **image,i,j;
    image=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        image[i]=(int*)malloc(c*sizeof(int));
        for(j=0;j<c;j++)
        {
        scanf("%d ",&image[i][j]);
        }
    }
   
    int flag=2;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(image[i][j]==1)
            {
               connected(image, r,c, i, j, flag++) ;
            }
             
        }
        
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",image[i][j]);
        }
    }
printf("number of connected components = %d",flag-1);
    return 0;
}
