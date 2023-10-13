//Roll: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>


int dist[5][5] = {0};

int dist2city(char, char);
int distThr1city(char, char, char);

int main(){

  char c1, c2, c3;
  
  for(int i = 0; i < 5; i++){
    for(int j = i+1; j < 5; j++){
      dist[i][j] = rand()%980 + 20;
      dist[j][i] = dist[i][j];
    }
  }
  printf("Orignal Array:\n");
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%3d ", dist[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Modded Array:\n");
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      dist[i][j] = (dist[i][j] >= 150)? -1: dist[i][j];//If distance is more than or equal 150 it is -1
      printf("%3d ", dist[i][j]); 
    }
    printf("\n");
  }
  printf("\n");
  printf("Enter the cities between which distance is to be found (seperated by a space):\n");
  scanf("%c",&c1);
  scanf("%c",&c2);
  scanf("%c",&c2);

  //Capitalizing Alphabets
  c1 = (c1 >= 'a' &&  c1 <= 'z')? c1 + 'A'-'a': c1;
  c2 = (c2 >= 'a' &&  c2 <= 'z')? c2 + 'A'-'a': c2;

  dist2city(c1, c2);
  
  printf("Enter the cities between which distance is to be found vie (seperated by a space):\n");
  scanf("%c",&c1);
  scanf("%c",&c1);
  scanf("%c",&c2);
  scanf("%c",&c2);
  scanf("%c",&c3);
  scanf("%c",&c3);

  //Capitalizing Alphabets
  c1 = (c1 >= 'a' &&  c1 <= 'z')? c1 + 'A'-'a': c1;
  c2 = (c2 >= 'a' &&  c2 <= 'z')? c2 + 'A'-'a': c2;
  c3 = (c3 >= 'a' &&  c3 <= 'z')? c3 + 'A'-'a': c3;

  distThr1city(c1, c2, c3);
  
}

int dist2city(char c1, char c2){
  
  int city1 = c1 - 'A';
  int city2 = c2 - 'A';

  if(dist[city1][city2] == -1){
    printf("From %c to %c unreachable\n", c1, c2);
  }
  else{
    printf("From %c to %c %dKm\n", c1, c2, dist[city1][city2]);
  } 
}

int distThr1city(char c1, char c2, char c3){

  int city1 = c1 - 'A';
  int city2 = c2 - 'A';
  int city3 = c3 - 'A';

  if(dist[city1][city3] == -1 || dist[city3][city2] == -1){
    printf("From %c to %c via %c unreachable\n", c1, c2, c3);
  }
  else{
    printf("From %c to %c %dKm\n", c1, c2, dist[city1][city2]+dist[city3][city2]);
  }
  int flag = 1;
  int min = 2000, citym = 0;
  for(int i = 0; i < 5; i++){
    if(dist[city1][i] == -1 || dist[city2][i] == -1 || city1 == i || city2 == i){
      continue;
    }
    else{
      if(dist[city1][i]+dist[city2][i] < min){
	min = dist[city1][i]+dist[city2][i];
	citym = i;
	flag = 0;
      }
    }
  }
  if(flag == 0){
    printf("Minimum distance from %c to %c is via %c and is %dKm\n", c1, c2, citym+'A', min);
  }
  else{
    printf("Can't reach city %c from %c via any intermediate city\n", c2, c1);
  }
}
