/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{int i,m,n,j,x,y,flag,l=1;
printf("enter the no.of rows and columns");
scanf("%d %d",&m,&n);
int **arr=(int **)malloc(m*sizeof(int*));  //dynamic memory allocation
printf("enter the matrix");
for ( i = 0; i < m; i++)
{
  arr[i]=(int *)malloc(n*sizeof(int));
  for (j = 0; j < n; j++)
  {
      scanf("%d",&arr[i][j]);
  }

}
for ( i = 1; i < m; i++)
{
   for (j = 1; j < n; j++)
   {
      if(arr[i][j]==1){
          for(x=(-1);x<=1;x++){
              for (y = (-1); y <=1; y++)
              {
                  if (x==0&&y==0)
                  {
                     continue; /* code */  //because there is no need to check arr[i][j]
                  }
                  if ((i+x)>=0&&(i+x)<m&&(j+y)>=0&&(j+y)<n)
                  {
                     if (arr[i+x][y+j]==1)
                     {
                         flag=1;
                         arr[i+x][y+j]==l;
                     }

                  }

              }
          }
          if ((flag=0)&&(l>1))   //l>1 because in the first time when it hasnt detected any connected elements it should not increment l
              {
                 l++; /* code */
              }
      }
   }

}
printf("the output image with labelled connected components is ")
for ( i = 0; i < m; i++)
{    printf("\n");
  for (j = 0; i < n; j++)
  {
     printf("%d",a[i][j]);
  }

}
printf("number of connected components is %d",l)
return(0);
}
