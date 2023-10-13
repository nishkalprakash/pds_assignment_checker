//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int dist[5][5];

void dist2city(int dist[][5]);
void DistThr1city(int dist[][5]);

int main(){
  for (int i=0; i<5; i++){  //Data filling
    for (int j=i+1; j<5; j++){
      dist[i][j]=rand()%980+20;
      dist[j][i]=dist[i][j];
    }
  }
  for (int i=0; i<5; i++){  //Data filling for diagonal
    dist[i][i]=0;
  }
  printf("          A       B       C       D       E\n");
  for (int i=0; i<5; i++){  //Data printing
    printf("%c\t", (char)(i+65));
    for (int j=0; j<5; j++){
      printf("%3d\t", dist[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      if (dist[i][j]>150) dist[i][j]=-1;
    }
  }
  printf("          A       B       C       D       E\n");
  for (int i=0; i<5; i++){  //Data printing
    printf("%c\t", (char)(i+65));
    for (int j=0; j<5; j++){
      printf("%3d\t", dist[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  dist2city(dist);
  DistThr1city(dist);
  return 0;
}

void dist2city(int dist[][5]){
  char s, t;
  int distst;
  printf("Enter 1st city (A-E): ");
  scanf("%c", &s);
  printf("Enter 2nd city (A-E): ");
  scanf("%c", &t);
  // scanf("%c", &t);
  distst=dist[s-65][t-65];  //As ASCII of A is 65
  if (distst==-1) printf("From %c to %c unreachable\n", s, t);
  else printf("From %c to %c %dkm\n", s, t, distst);
  return;
}

void DistThr1city(int dist[][5]){
  char s, r;
  int distst1, distst2, max=-1;
  printf("Enter 1st city (A-E): ");
  scanf("%c", &s);
  // scanf("%c", &s);
  printf("Enter 2nd city (A-E): ");
  scanf("%c", &r);
  // scanf("%c", &r);
  for (char i='A'; i<='E'; i++){
    distst1=0;
    distst2=0;
    if (i!=s && i!=r){
      distst1=dist[s-65][i-65];  //As ASCII of A is 65
      distst2=dist[i-65][r-65];  //As ASCII of A is 65
      if (distst1==-1 ||distst2==-1) printf("From %c to %c via %c unreachable\n", s, r, i);
      else printf("From %c to %c via %c %dkm\n", s, r, i, distst1+distst2);
    }
  }
  return;
}
