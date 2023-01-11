/*section 14
 Name:P.sri Harsha Vardhan 
 Roll no:22MA10040
 Assignment no:8
 program 2
*/
#include<stdio.h>
#include<stdlib.h>
int count=0;
int saddle_points(int[100][100],int,int,int,int,int);
int saddle_points(int test_mat[100][100],int row,int col,int ele,int i,int j){
   int *rows,*cols,n=0,temp;
   rows=(int *)malloc(row*sizeof(int));
   cols=(int *)malloc(col*sizeof(int));
   for(int k=0;k<row;k++){
     rows[k]=test_mat[k][j];
   }
   for(int k=0;k<col;k++){
   cols[k]=test_mat[i][j];
}
/*the cndition is checked in the next two loops*/
   for(int k=0;k<row;k++){
   if(k==0) temp=rows[0];
   else if(temp<rows[k]) temp=rows[k];
}
if(ele=temp) n++;
for(int k=0;k<col;k++){
   if(k==0) temp=cols[0];
   else if(temp>cols[k]) temp=cols[k];
 }
  if(ele==temp) n++;
  if(n==2) printf("the saddle point is %d\n",ele);
  return n;
}
int main(){
 int row,col;
 int matrix[100][100];
 int ele,k;
 printf("the shape of 2D array");
 scanf("%d %d",&row,&col);
 for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
scanf("%d",&matrix[i][j]);
}
}
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
ele=matrix[i][j];
k=saddle_points(matrix,row,col,ele,i,j);
if(k==2) count++;
}
}
if(count==0) printf("There is no saddle point in the 2D array");
return 0;
}



