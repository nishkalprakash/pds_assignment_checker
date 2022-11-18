/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  #include<stdlib.h>

  void saddlepnt(int **p);

  int main(){
      //taking inputs
      int row,col;
      printf("Enter the no. of rows and columns(repectively): ");
      scanf("%d %d",&row,&column);
      int **a;
      a = (int **)malloc(row * sizeof(int *));
      for(int i = 0;i < row; i++){
          *(a + i) = (int *)malloc(col * sizeof(int));
      }
      printf("Enter the matrix: ");
      for(int i = 0;i < row; i++){
          for(int j = 0; j < col; j++){
              scanf("%d",*(p + i) + j)
          }
      }
 
  }

  void saddlepnt(int **p){
      int i,j,k,l,flag;
      flag = 0;
      for(i = 0;i < row;i++){
        for(j = 0;j < col; j++){
          //unique max row
          for(k = 0;k < col;k++){
              if((*(*(p + i) + k)) < (*(*(p + i) + j)){
                  //unique min col
                  for(l = 0;l < row;l++){
                      if((*(*(p + l) + j)) > (*(*(p + i)+ j))){
                          continue;
                      }
                      else{
                          break;
                      }
                  }  
              }
              else{
                  break;
              }
          }
          if(k == col && l == row)
          for(int k = 0;k < row;k++){
              //unique max col
              if((*(*(p + k)+j)) < (*(*(p + i) + j))){
                  //unique min row
                  for(int l = 0;l < col ;l++){
                      if((*(*(p + i) + l)) > (*(*(p + i)+j))){

                      }
                  }
              }

          }

      }
  }
  }
