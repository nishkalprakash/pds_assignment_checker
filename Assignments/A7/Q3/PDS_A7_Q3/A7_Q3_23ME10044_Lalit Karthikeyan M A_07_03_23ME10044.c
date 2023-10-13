//ROLL NO.: 23ME10044
//NAME: LALIT KARTHIKEYAN.M.A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dist[5][5];

int main(){

  int x;
  srand(time(NULL));

  //filling the matrix dist according to the given condition
  
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(i==j){
	dist[i][j]=0;
     }
      x=(rand()%980)+20;
      dist[i][j]=x;
      dist[j][i]=x;
    }
  }

  //Displaying the matrix dist
  printf("   A   B   C   D   E\n\n");
  for(int i=0;i<5;i++){
    if(i==0){printf("A  ");}
    if(i==1){printf("B  ");}
    if(i==2)printf("C  ");
    if(i==3)printf("D  ");
    if(i==4)printf("E  ");
    for(int j=0;j<5;j++){
      printf("%d ",dist[i][j]);
    }printf("\n\n");
  }

  //Chaging the matrix
  for (int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(dist[i][j]>150){
	dist[i][j]=-1;
      }
    }
  }

  //Printing the changed matrix

  printf("   A   B   C   D   E\n\n");
  for(int i=0;i<5;i++){
    if(i==0)printf("A  ");
    if(i==1)printf("B  ");
    if(i==2)printf("C  ");
    if(i==3)printf("D  ");
    if(i==4)printf("E  ");
    for(int j=0;j<5;j++){
      printf("%d  ",dist[i][j]);
    }printf("\n\n");
  }
  return 0;
}
