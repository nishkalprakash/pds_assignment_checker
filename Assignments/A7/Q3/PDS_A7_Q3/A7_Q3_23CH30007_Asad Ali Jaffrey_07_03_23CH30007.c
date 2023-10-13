//Name- Asad ALi Jaffrey
//ROll NO.- 23CH30007

#include<stdio.h>
#include<stdlib.h>

int dist[5][5];

void dist2city(int [][5]);
;

int main() {

  for (int i = 0; i<5; i++) {
    for (int j = i+1; j<5; j++) {
      dist[i][j]=rand()%980+20;
    }
  }

  for (int i = 0; i<5; i++) {
    for (int j = 0; j<i; j++) {
      dist[i][j] = dist[j][i];
    }
  }

  for (int i = 0; i<5; i++) {                  //for printing the array
    for (int j = 0; j<5; j++) {
      printf("%d  ",dist[i][j]);
    }
    printf("\n");
  }


  for (int i = 0; i<5; i++) {                        //for disconnected cities
    for(int j = 0; j<5; j++) {
      if (dist[i][j]>150){
	dist[i][j] = -1;
      }
    }
  }

  printf("\n");

  for (int i = 0; i<5; i++) {                  //for printing the modified array
    for (int j = 0; j<5; j++) {
      printf("%d  ",dist[i][j]);
    }
    printf("\n");
  }

  dist2city(dist);

  return 0;
}


void dist2city(int dist[][5]) {

  char c1, c2;
  int row, col;

  printf("Enter the two cities with a space in between ");
  scanf("%c %c",&c1,&c2);

  if (((c1>='A')&&(c1<'E'))&&((c2>='A')&&(c2<='E'))) {

    row = c1 - 'A';          //the row of the distance
    col = c2 - 'A';          //the column of the distance

    if (dist[row][col]==-1){
      printf("These cities are disconnected\n");
  }
    else {
      printf("The distance between the cities is %d\n", dist[row][col]);
    }

  }

}








