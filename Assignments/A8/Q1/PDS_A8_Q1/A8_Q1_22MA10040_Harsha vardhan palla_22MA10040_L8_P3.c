/*section 14
Name:P.sri Harsha Vardhan 
Roll no:22MA10040
Assignment no:8
program:3 
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int column;
  int matrix[100][100];
  int colm=0,row=0;
  char d='1';
  printf("number of elements in the row=");
  scanf("%d",&column);
for(;d!='\n';){
   scanf("%d",&matrix[row][colm]);
   colm++;
   if(colm==column) 
   {colm=0; row++;}
   d=getchar();
}
printf("Column major order ;");//loops which are required to print in column order//
for(int i=0;i<column;i++){
    for(int k=0;k<row;k++){
       printf("%d",matrix[k][i]);
    }
}printf("\n");
return 0;
}


