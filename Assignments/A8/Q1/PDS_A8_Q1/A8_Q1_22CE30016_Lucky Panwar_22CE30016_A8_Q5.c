/* Name - Lucky Panwar
   Roll no. - 22CE30016
   Assignment no. - 6
   Question no. - 5  */                      

#include<stdio.h>
#include<stdlib.h>


 int main()
{
 int col;
 int mat[100][100];
 int colm = 0, row = 0;
 char L= '1';
 printf("Number of elements in one row = "); 
 scanf("%d",&col);
 printf("Enter the elements for the array ");
 while(L!='\n'){ 
 scanf("%d",&mat[row][colm]);
 colm++;
 if(colm==col){colm=0; row++;}
 L=getchar();
 }
 printf("Column major order is : ");
 for(int i=0;i<col;i++){
  for(int j=0;j<row;j++){
   printf(" %d",mat[j][i]);
      }
    }
  printf("\n");
  return 0;
}
