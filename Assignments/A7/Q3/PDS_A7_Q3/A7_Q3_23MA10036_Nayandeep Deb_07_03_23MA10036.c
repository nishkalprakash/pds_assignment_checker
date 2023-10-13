//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>
#include <stdlib.h>

int dist[5][5]; //global array dist

int main () {
  for (int i = 0; i < 5; i++) { //randomizing top half of array
    for (int j = i; j < 5; j++) {
      if ( i == j) dist[i][j] = 0;
      else dist[i][j] = (rand() % 980) + 20;
      dist[j][i] = dist[i][j]; //symmetry
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%3d ", dist[i][j]); //printing
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (dist[i][j] > 150) dist [i][j] = -1; //replacing values greater than 150 with -1
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%3d ", dist[i][j]); //printing
    }
    printf("\n");
  }
  printf("\n");
}
