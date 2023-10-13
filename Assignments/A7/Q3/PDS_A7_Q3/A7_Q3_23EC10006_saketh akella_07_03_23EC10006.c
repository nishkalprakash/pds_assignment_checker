//name:Akella Satya Hanuma Saketh
//roll no.:23EC10006
#include<stdio.h>
#include<stdlib.h>
int dist[5][5];

void dist2city(int d[][5],char m,char n)
{
  if(d[m-'A'][n-'A']!=-1){
  printf("the distance between cities is : %d \n",d[m-'A'][n-'A']);
  }
  else printf("not reachable \n");
}
/*void distthr1city(int d[][5],char m,char n)
{
  int min=300;
  printf("%d \n",min)
  
  for(int i=0;i<5;i++){
    if((d[m-'A'][i]!=-1)&&(d[i][n-'A']!=-1)){
    if(d[m-'A'][i]+d[i][n-'A']<min){
      min=d[m-'A'][i]+d[i][n-'A'];
    }
    }
  }
  printf("%d \n",min);
  }*/

int main()
{
  int x,m,n;
  for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
      x=rand()%980;
      x=x+20;
      dist[i][j]=x;
      dist[j][i]=x;
    }
  }
  for(int i=0;i<5;i++){
    dist[i][i]=0;
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
  printf("\n\n");
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%d ",dist[i][j]);
    }
    printf("\n");
  }
  printf("enter the cities that you want distance: \n");
  scanf("%c%c",&m,&n);
  dist2city(dist,m,n);
  // distthr1city(dist,m,n);
  
  return 0;
}
