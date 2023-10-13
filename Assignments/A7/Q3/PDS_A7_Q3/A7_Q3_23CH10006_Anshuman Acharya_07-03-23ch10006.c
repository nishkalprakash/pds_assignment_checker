// Name - Anshuman Acharya
// Roll no. : 23ch10006

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int dist[5][5];

int dist2city(int dist[][5]){

  char key1, key2;
  
  printf("Enter the characters in range A to E : ");
  scanf("%c%c", &key1, &key2);

  if(key1 == key2) return 0;

  if(key1 >= 'A' && key1 <= 'E' && key2 >= 'A' && key2 <= 'E'){

    if(dist[key1 - 'A'][key2 - 'A'] != -1){
      return dist[key1 - 'A'][key2 - 'A'];
    }

    else{
      printf("Not reachable so -1\n");
      return -1;
    }
    
  }

}

int distthr1city(int dist[][5]){

  char key1, key2, key3;
  
  printf("Enter the characters in range A to E : ");
  scanf("%c%c", &key1, &key2);

  printf("Enter the characters via which to go in range A to E : ");
  scanf("%c", &key3);

  if(dist[key2 - 'A'][key3 - 'A'] != -1 && dist[key1 - 'A'][key2 - 'A'] != -1){
    return dist[key1 - 'A'][key2 - 'A'] + dist[key2 - 'A'][key3 - 'A'];
  }

  else{
    printf("Not reachable as - 1\n");
    return -1;
  }

}

int main()
{
  int n;
  for(int i = 0;i < 5;i++){
    for(int j = 0;j < 5;j++){
      if(i != j){
	dist[i][j] = rand()%990 + 10;
      }
      else{
	dist[i][j] = 0;
      }

      printf("%d\t", dist[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  printf("The updated array of dist is : \n");

  for(int i = 0;i < 5;i++){
    for(int j = 0;j < 5;j++){

      if(dist[i][j] > 150){
	dist[i][j] = -1;
      }

      printf("%d\t", dist[i][j]);     
    }
    printf("\n");
  }

  printf("\n");

  dist2city(dist);

  printf("\n");

  distthr1city(dist);
  
  return 0;
}
