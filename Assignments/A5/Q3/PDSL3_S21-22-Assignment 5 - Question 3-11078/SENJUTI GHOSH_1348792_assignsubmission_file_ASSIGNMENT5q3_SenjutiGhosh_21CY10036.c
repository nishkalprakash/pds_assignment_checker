/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<stdlib.h>
int saddlepoint(int **arr,int **output,int ROW,int COLUMN){
int flag=0;
int j;
/*checks if minimum in ith row and stores the column index as j*/
for (int i=0;i<ROW;i++){
     int minrow=arr[i][0];
     int colindex=0;
     for (j=0;j<COLUMN;j++){
          if (minrow>arr[i][j]){
              minrow=arr[i][j];
              colindex=j;
          }
     }
     /*checks if same element maximum in column*/
     int k;
     for (k=0;k<ROW;k++){
          if (minrow<arr[k][colindex]){
              break;
          }
     }
     /*Stores requires saddlepoint in the output array*/
     if (k==ROW){
         output[i][j]=arr[i][j];
         /*updates flag to 1 as a saddle point is found*/
         flag=1;
     }
}
if (flag==0){
    return 0;
}
else{
    return 1;
}
}
int main(){
int ROW,COLUMN;
int i,j,k;
/*user inputs rows and columns*/
printf("Enter rows and columns");
scanf("%d %d",&ROW,&COLUMN);
/*memory dynamically allocated to arr and output*/
int **arr=(int **)malloc(ROW*sizeof(int *));
for (i=0;i<ROW;i++){
     arr[i]=(int *)malloc(COLUMN*sizeof(int));
}
int **output=(int **)malloc(ROW*sizeof(int *));
for (i=0;i<ROW;i++){
     output[i]=(int *)malloc(COLUMN*sizeof(int));
}
/*arr receives input from user and output is initialised to 0*/
for (i=0;i<ROW;i++){
     for (j=0;j<COLUMN;j++){
          scanf("%d",&arr[i][j]);
          output[i][j]=0;
     }
}
/*y stores return value of saddlepoint function*/
int y=saddlepoint(arr,output,ROW,COLUMN);
if (y==0){
    printf("NO SADDLE POINT");
}
else{
     for (i=0;i<ROW;i++){
          for (j=0;j<COLUMN;j++){
               if (output[i][j]!=0){
                   printf("arr[%d][%d]=%d is saddle point\n",i,j,output[i][j]);
               }
          }
     }
}
return 0;
}
