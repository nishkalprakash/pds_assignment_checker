//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>

int dist[5][5];
void dist2city();
void DistThr1city();

int main()
{
  for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      if (i==j)dist[i][j]=0;
      else if(j>i){
	dist[j][i]=rand()%980+20;
	dist[i][j]=dist[j][i];
      }
    }
  }
  printf("\nArray dist:");
  for (int i=0;i<5;i++){
    printf("\n[ ");
    for (int j=0;j<5;j++){
      printf("%d, ",dist[i][j]);
    }
    printf("\b\b]");
  }
 for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      if (dist[i][j]>150)dist[i][j]=-1;
    }
 }
 printf("\nNew dist:");
  for (int i=0;i<5;i++){
    printf("\n[ ");
    for (int j=0;j<5;j++){
      printf("%d, ",dist[i][j]);
    }
    printf("\b\b]");
  }
 

 return 0;
}
void dist2city(){
  char s,t;
  int a,b;
  printf("\nEnter first city: ");
  scanf("%c",&s);
  printf("\nEnter second city: ");
  scanf("%c",&t);
  a=s-'A';
  b=t-'A';
  printf("\nThe distance from %c to %c is %d",s,t,dist[a][b]);
  return;
}
  
      
  
  
