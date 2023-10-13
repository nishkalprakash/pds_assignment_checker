//Name:Ranga Kiranmai
//Roll No:23EE30017
#include <stdio.h>
#include <stdlib.h>
int dist[5][5];
int main()
{
  int i,j;
  for(i=0;i<5;i++) {
    for(j=0;j<5;j++) {
      if(i<j && i!=j) dist[i][j]=dist[j][i]=20+rand()%1000;
      if(i==j) dist[i][j]=0;
    }
  }
printf("The matrix is:\n");
  for(i=0;i<5;i++) {
    for(j=0;j<5;j++) {
      printf("%d ",dist[i][j]);
    }
    printf("\n");
  }
}
   
