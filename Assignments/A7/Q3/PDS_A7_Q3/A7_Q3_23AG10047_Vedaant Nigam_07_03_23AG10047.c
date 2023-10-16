#include <stdio.h>
#include <stdlib.h>
void dist2city(int[][5],char,char);
void distThr1city (int[][5],char,char);
int main(){
  int dist[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if (i==j)dist[i][j]=0;
      else {dist[i][j]= rand()%800 +20; dist[j][i]=dist[i][j];
      }
    }
  }
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%d ",dist[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(dist[i][j]>150) dist[i][j]=-1;
    }
  }
  printf("\n");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%d ",dist[i][j]);
    }
    printf("\n");
  }
  char a,b;
  printf("enter two cities\n");
  scanf("%c %c",&a,&b);
  dist2city (dist,a,b);
  distThr1city (dist,a,b);
  return 0;
}
void dist2city(int arr[][5],char a, char b){
  int i,j;
  if(a=='A') i=0;
  if(a=='B') i=1;
  if(a=='C') i=2;
  if(a=='D') i=3;
  if(a=='E') i=4;
  if(b=='A') j=0;
  if(b=='B') j=1;
  if(b=='C') j=2;
  if(b=='D') j=3;
  if(b=='E') j=4;
  if(arr[i][j]==0) printf("same city\n");
  if(arr[i][j]==-1) printf(" %c to %c is unreachable\n",a,b);
  else printf(" distance between %c to %c is %d KM\n",a,b,arr[i][j]);
  return; 
}
void distThr1city(int arr[][5],char a,char b){
  int i,j;
   if(a=='A') i=0;
  if(a=='B') i=1;
  if(a=='C') i=2;
  if(a=='D') i=3;
  if(a=='E') i=4;
  if(b=='A') j=0;
  if(b=='B') j=1;
  if(b=='C') j=2;
  if(b=='D') j=3;
  if(b=='E') j=4;
  int sum=0,min=arr[i][j];
  char c;
 
    for(int t=0;t<j;t++){
      if(t==0) c='A';
      if(t==1) c='B';
      if(t==2) c='C';
      if( t==3) c='D';
      if( t==4) c='E';
      
      if (arr[0][t]==-1) printf(" %c to %c via %c is unreachable\n",a,b,c);
      else {sum=arr[i][j] + arr[0][t]; printf(" %c to %c via %c is %d Km\n",a,b,c,sum);}
    }
  }
