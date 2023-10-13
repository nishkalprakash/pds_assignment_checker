// name vivek
// roll nlo 23cs 10011
#include<stdio.h>
#include<stdlib.h>
int dist[5][5];
void dist2city(int dist[5][5]);
void distThr1city(int dist[5][5]);
int main(){
  int i,j;
  for(i=0;i<5;i++)
    dist[i][i]=0;
  for(i=1;i<5;i++){
    for(j=i+1;j<5;j++){
      dist[i][j]=(rand()%980)+20;
      dist[j][i]=dist[i][j];
    }
  }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++)
      printf("%d ",dist[i][j]);
    printf("\n");
  }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++)
      if (dist[i][j]>150) dist[i][j]=-1;
  }
   for(i=0;i<5;i++){
    for(j=0;j<5;j++)
      printf("%d ",dist[i][j]);
    printf("\n");
   }
  dist2city(dist);
  return 0;
}
void dist2city (int dist[5][5]){
  char s,t,i,j;
  printf("enter characters");
  scanf("%c %c",&s,&t);
  i=s-'A';
  j=t-'A';
  printf("direct distace is %d",dist[i][j]);
return ;
}
  
  
  
      
