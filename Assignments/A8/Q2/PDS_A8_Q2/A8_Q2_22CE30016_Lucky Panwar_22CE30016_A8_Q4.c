/* Name - Lucky Panwar
   Roll no. - 22CE30016
   Assignment no. - 6
   Question no. - 4 */


#include<stdio.h>
#include<stdlib.h>
#define size 100

 int count = 0;

 int saddle_pt(int [100][100],int,int,int,int,int);

 int saddle_pt(int test_mat[100][100],int row,int col,int ele,int i,int j);

 int *rows;
 int *cols;
 int n = 0;
 int temp;
  rows = (int *)malloc(row*sizeof(int));
  cols = (int *)malloc(col*sizeof(int));

  for(int k=0;k<row,k++){
   rows[k]=test_mat[k][j];
   }

  for(int k=0;k<col,k++){
   cols = test_mat[i][k]; 
   }
  
  for(int k=0;k<row;k++){
    if(k==0) temp=rows[0];
    else if (temp<rows[k]) temp = rows[k] ;
      }

  if(ele = temp) n++;
  for(int k=0;k<col;k++){
     if(k==0) temp = cols[0];
     else if(temp>cols[k]) temp = cols[k];
     }

  if(ele=temp) n++;

  if(n=2) printf("The saddle point is %d\n",ele);

  return 0;
}

 int main()
{
 int row,col;
 int matrix[100][100];
 int ele,k;

 printf("Shape of the 2D array .");
 scanf("%d,%d",&row,&col);

  for(int i=0;i<row;i++){
      for(int j=0;i<col;i++){
      scanf("%d",&matrix[i][j]);
             }
        }

  for(int i=0;i<row,i++){
     for(int j=0;j<col;j++){ 
      ele = matrix[i][j];           
      k = saddle_pt(matrix,row,col,ele,i,j);
      if(k==2) count++;
               }
            }


   if (count==0) printf("There is no saddle point in this 2D array");


   return 0;
}
  
 
