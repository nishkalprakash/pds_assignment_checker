//name tanishq sura
//roll no 23CS10071

#include<stdio.h>
#include<stdlib.h>
int dist[5][5];
void dist2city();
void distThr1city();

int main(){
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      dist[i][j]=rand()%980+20;
      dist[j][i]=dist[i][j];
    }
    dist[i][i]=0;
  }
  printf("initial dist matrix\n");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%4d",dist[i][j]);
    }
    printf("\n");
  }
  printf("the final dist matrix\n");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(dist[i][j]>150){
	dist[i][j]=-1;
      }
      printf("%4d",dist[i][j]);
    }
    printf("\n");
  }	
  dist2city();
  distThr1city();
  return 0;
}

void dist2city(){
  char s,t;
  do {printf("give start city(out of A,B,C,D,E in capital) :");
      s=getchar();}
  while((s>'E')||(s<'A'));

  do {printf("give destination city(out of A,B,C,D,E in capital) :");
      t=getchar();}
  while((t>'E')||(t<'A')||(t==s));
  int i;int j;
  i=s-'A';
  j=t-'A';
  if(dist[i][j]!=-1){
    printf("the direct distance between the cities is %d\n",dist[i][j]);
  }
  else{ printf("unreachable\n"); }
  return;
}

void distThr1city(){
  char s,r;
  do {printf("give start city(out of A,B,C,D,E in capital) :");
      s=getchar();}
  while((s>'E')||(s<'A'));

  do {printf("give destination city(out of A,B,C,D,E in capital) :");
      r=getchar();}
  while((r>'E')||(r<'A')||(r==s));
  int i;int j;
  i=s-'A';
  j=r-'A';
  int min=151,minvia,flag=0;
  for(int k=0;k<5;k++){
    if((k-i)*(k-j)==0);
    else{
      if((dist[i][k]==-1)||(dist[k][j]==-1)) printf("From %c to %c via %c is unreachable\n",s,r,k+'A');
      else {printf("From %c to %c via %c %d\n ",s,r,k+'A',dist[i][k]+dist[k][j]);
	flag=1;
	if(min>dist[i][k]+dist[k][j]){
	  min=dist[i][k]+dist[k][j];
	  minvia=k+'A';
	}
      } 
    }   
  }
  if(flag==1){
    printf("Min dist from %c to %c is via %c and is %d km",s,r,minvia,min);}
  else if(flag==0) printf("no min dist as unreachable");
  return;
}
  
