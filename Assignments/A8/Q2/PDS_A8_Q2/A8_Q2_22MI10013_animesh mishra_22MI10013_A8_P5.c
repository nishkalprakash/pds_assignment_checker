/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:8 
description:finding saddle point
*/
#include<stdio.h>
#define ROW 10
#define COL 10

int main() {
      int i,j,k,n,min,max,matrix[ROW][COL],pos[2][2];
    /*get the order of the matrix from the user */
    
         printf("enter the order of the matrix:");
         scanf("%d",&n);

         printf("enter your entries for the input matrix:");
 
       for(i=0;i<n;i++){
                 for(j=0;j<n;j++){
                        scanf("%d",&matrix[i][j]);
               }
          }
  //find the sddle point
       for(i=0;i<n;i++){
           min=matrix[i][0];
           for(j=0;j<n;j++){
                   if(min>=matrix[i][j]){
                          min=matrix[i][j];
                          pos[0][0]=i;
                          pos[0][1]=j;
             }
       }

            j = pos[0][1];
            max = matrix[0][j];
            for(k=0;k<n;k++){
                   if(max <= matrix[k][j]){
                        max = matrix[i][j];
                        pos[1][0] = k;
                        pos[1][1] = j;
               }
         }

                   if(min == max){
                        if(pos[0][0]==pos[1][0] &&
                             pos[0][1]==pos[1][1]){
                              printf("saddle point (%d,%d):%d\n",pos[0][0],pos[0][1],max);

           }
     }
 }
 return 0;

}






























