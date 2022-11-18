

#include <stdio.h>
#include<stdlib.h>
int cond1(int**a,int row,int col,int i,int j)
{
    int k,l,temp1=0,temp2=0;
    for(k=0;k<col;k++)
    {
        if(k!=j&& a[i][k]>=a[i][j])
        {temp1=1;
        break;}
    }
    for(l=0;l<row;l++)
    {
      if(l!=i && a[l][j]<=a[i][j])
      {
          temp2=1;
          break;
      }
    }
    if(temp1==1 || temp2==1)
    return(0);
}
int cond2(int**a,int row,int col,int i,int j)
{
      int k,l,temp1=0,temp2=0;
    for(k=0;k<col;k++)
    {
        if(k!=j&& a[i][k]<=a[i][j])
        {temp1=1;
        break;}
    }
    for(l=0;l<row;l++)
    {
      if(l!=i && a[l][j]>=a[i][j])
      {
          temp2=1;
          break;
      }
    }
    if(temp1==1 || temp2==1)
    return(0);
    
}
void saddlepoint(int**arr,int row,int col)
{
    int i,j,r1,r2,c=0;
    printf("the saddle points are\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            r1= cond1(arr,row,col,i,j);
            r2=cond2(arr,row,col,i,j);
            if(r1!=0 || r2!=0){
            printf("arr[%d][%d]=%d",i,j,arr[i][j]);c++;
          }
            
        }
    }
    if(c==0)
    printf("NO SADDLE POINT");
    
}

int main()
{
    int row,col,**arr,i,j;
    printf("enter the no. of rows and coloumn");
    scanf("%d %d",&row,&col);
    printf("enter the elements" );
    arr=(int**)malloc(sizeof(int*)*row);
    for(i=0;i<row;i++)
    {
        arr[i]=(int*)malloc(col*sizeof(int));
        for(j=0;j<col;j++)
        {
          scanf("%d",&arr[i][j]) ;
        }
    }
  saddlepoint(arr, row, col);

    return 0;
}
