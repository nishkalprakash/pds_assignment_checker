/*This program is to find number of images in a 2D image using dynamic memory allocation*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : 5
  question : 2*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int m,n,i,j;
   int **p;
   printf("Enter number of rows you want for an image matrix : ");
   scanf("%d",&m);
   printf("Enter number of coloumns you want for an image  matrix : ");
   scanf("%d",&n);
   p=(int **)malloc(m*sizeof(int *));
   for(i=0;i<m;i++)
   {
      printf("Enter row elements of %d row : ",i+1);
      p[i]= (int *)malloc(n*sizeof(int));
      for(j=0;j<n;j++)
      {
         scanf("%d",&p[i][j]);
      }
   }
}
