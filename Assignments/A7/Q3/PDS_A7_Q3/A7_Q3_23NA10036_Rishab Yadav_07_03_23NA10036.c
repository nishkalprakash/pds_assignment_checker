// Roll number - 23NA10036
// Rishab Yadav
// Set - 1

#include <stdio.h>
#include <stdlib.h>

void dist2city(int dist[][5]);

void distThr1city(int dist[][5]);

int dist[5][5];

int main(){

  for(int i = 0; i < 5; i++){
    dist[0][i] = rand()%980 + 20;
  }

  for(int i = 0; i < 5; i++){
    dist[4][i] = dist[0][i];
  }

  for(int i = 1; i < 4; i++){
    dist[1][i] = rand()%980 + 20;
  }

  for(int i = 1; i < 4; i++){
    dist[3][i] = dist[1][i];
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(i + j == 4){
	dist[i][j] = 0;
      }
    }
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%d, ", dist[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(dist[i][j] > 150){
	dist[i][j] = -1;
      }
    }
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%d, ", dist[i][j]);
    }
    printf("\n");
  }

  dist2city(dist);
  distThr1city(dist);
  
  return 0;
}

void dist2city(int dist[][5]){
    char city1, city2;
    printf("Enter two characters:\n");
    scanf("%c %c", &city1, &city2);

    printf("Direct distance between city %c and city %c is: %d\n", city1, city2, dist[(int)city1 - (int)'A'][(int)city2 - (int)'A']);
}

void distThr1city(int dist[][5]){
   char city1, city2;
   int one, two, intermed;
   printf("Enter two characters:\n");
   scanf("%c %c", &city1, &city2);

   one = (int)city1 - (int)'A';
   two = (int)city2 - (int)'A';

   int maxDist = 0;

   for(int i = 0; i < 5; i++){
     if(i == one || i == two){
       continue;
     }

     if(dist[one][intermed] + dist[intermed][two] > maxDis == -1){
        printf("From %c to %c via %c unreachable\n", city1, city2, intermed);
     }
     
     if(dist[one][intermed] + dist[intermed][two] > maxDist){
       maxDist = dist[one][intermed] + dist[intermed][two];
     }
     printf("From %c to %c via %c %d\n", city1, city2, intermed, dist[one][intermed] + dist[intermed][two]);
   }

   printf("From %c to %c via %c %d\n", city1, city2, intermed, maxDist);

}
