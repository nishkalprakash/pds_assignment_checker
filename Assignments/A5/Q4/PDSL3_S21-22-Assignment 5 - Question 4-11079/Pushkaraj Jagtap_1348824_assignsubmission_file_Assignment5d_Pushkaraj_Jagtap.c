/* Pushkaraj Jagtap
   21MF3IM12
   Codeblocks
   Assignment 5d*/

#include<stdio.h>
int main(){
  int n,m,i,j,k,a[20][20],b[20][20],c[20][20],x,y,sum;
  printf("Enter the dimension of the input image matrix:");
  scanf("%d%d",&n,&m);
  for (i=0;i<n;i++){                   // Taking input of image elements
      for (j=0;j<m;j++){
          printf("Enter the elemnts");
          scanf("%d",a[i][j]);
      }
  }
  printf("Enter the kernel size:");   // Taking input of kernel matrix
  scanf("%d",&k);
  for (i=0;i<k;i++){
      for (j=0;j<k;j++){
          printf("Enter the elemnts");
          scanf("%d",b[i][j]);}}

     for(x=0;x<(n-2);x++){               // x and y are the variable used for new matrix(the resolved image)
       for(y=0;y<(m-2);y++){              // n-2 because our new matrix have 2 row and 2 column less
        for (i=0;i<k;i++){
          for (j=0;j<k;j++){
              sum=0;                          //finding sum of (product of kernel and main matrix)elements and storing it in the
              sum=sum+(a[i][j]*b[i][j]);        // the new array c
          }
      }
      c[x][y]=sum;
      }}

      for(x=0;x<(n-2);x++){
         for(y=0;y<(m-2);y++){
             printf("Output image matrix is:%d",c[x][y]);
         }
      }

}
