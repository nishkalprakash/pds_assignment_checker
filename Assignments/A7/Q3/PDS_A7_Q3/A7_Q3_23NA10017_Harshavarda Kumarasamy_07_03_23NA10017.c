#include <stdio.h>
#include <stdlib.h>
void dist2city(int dist[5][5]){
  int a,b;
  printf("Give city 1:\n");
  scanf("%d",&a);
  printf("Give city 2:\n");
  scanf("%d", &b);

  printf("From %c to %c distance is %dkm.", a, b, dist[a-'A'][b-'B']);
  return;
}
  
void distThr1city(int dist[5][5]);

int main()
{ int dist[5][5], i, j;

  for(i=0;i<5;i++){
    for(j=i;j<5;j++){
      if(i!=j){
	dist[i][j]=rand()%980+20;
	dist[j][i]=dist[i][j];
      }
      else{
	dist[i][j]=0;
	  }
    }
  }

  printf("[%d, %d, %d, %d, %d]\n", dist[0][0], dist[0][1], dist[0][2], dist[0][3], dist[0][4]);
  printf("[%d, %d, %d, %d, %d]\n", dist[1][0], dist[1][1], dist[1][2], dist[1][3], dist[1][4]);
  printf("[%d, %d, %d, %d, %d]\n", dist[2][0], dist[2][1], dist[2][2], dist[2][3], dist[2][4]);
  printf("[%d, %d, %d, %d, %d]\n", dist[3][0], dist[3][1], dist[3][2], dist[3][3], dist[3][4]);
  printf("[%d, %d, %d, %d, %d]\n", dist[4][0], dist[4][1], dist[4][2], dist[4][3], dist[4][4]);

  return 0;
}
