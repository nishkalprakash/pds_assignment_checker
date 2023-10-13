// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
//Main
int dist[5][5];
int main(){

  for (int i =0;i<3;i++){
    dist[i][i] = 0;
    for(int j = 0;j<3;j++){
      dist[i][j]= rand()%980 +20;
      dist[j][i] = dist[i][j];
    }
  }

  printf("The array:\n");
  for (int i =0; i<3;i++){
    for(int j = 0; j<3;j++){
      printf("%d ",dist[i][j]);
      if (dist[i][j]==0)printf("  ");
      if (dist[i][j]>99) printf(" ");
    }printf("\n");
  }
  return 0;
}
