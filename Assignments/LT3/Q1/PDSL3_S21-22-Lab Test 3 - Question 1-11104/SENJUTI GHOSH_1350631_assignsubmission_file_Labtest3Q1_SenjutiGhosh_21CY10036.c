/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<stdlib.h>
/*function to print matrix*/
void print(int **matrix,int rows,int columns){
           for (int i=0;i<rows;i++){
               for (int j=0;j<columns;j++){
                    printf("%d",matrix[i][j]);
                    printf("  ");
               }
               printf("\n");
           }
           return;
}
/*function to take entries into matrix*/
void inputmatrix(int **matrix,int rows,int columns){
                 for (int i=0;i<rows;i++){
                      matrix[i]=(int*)malloc(columns*sizeof(int));
                      for (int j=0;j<columns;j++){
                           scanf("%d",&matrix[i][j]);
                      }
                 }
                 return;
}
/*function to change neighbour elements to count value*/
void changeneighbour(int **image,int count ,int i,int j){
                     int l,m;
                     for (int l=i-1;l<=i+1;l++){
                          for (int m=j-1;m<=j+1;m++){
                               image[l][m]=count;
                          }
                     }
                     return;

}
/*generates output image*/
void outputimage(int **image,int rows,int columns){
                 int count=1;
                 for (int i=0;i<rows;i++){
                      for (int j=0;j<columns;j++){
                           if (image[i][j]==1){
                               changeneighbour(image,count,i,j);
                               /*increments counter to assign different label to next group*/
                               count++;

                           }
                      }
                 }
                 return;
}
int main(){
int **image;
int rows,columns;
printf("Enter number of rows and columns of input matrix\n");
scanf("%d %d",&rows,&columns);
image=(int **)malloc(rows*sizeof(int*));
printf("Enter elements of image matrix\n");
inputmatrix(image,rows,columns);
printf("Enter original matrix");
print(image,rows,columns);
outputimage(image,rows,columns);
printf("The output image matrix\n");
print(image,rows,columns);
return 0;
}
