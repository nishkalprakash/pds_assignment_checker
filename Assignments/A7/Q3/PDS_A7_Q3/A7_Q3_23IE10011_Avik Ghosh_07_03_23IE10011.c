//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>
int dist[5][5];

void dist2city(){
  char s,t;
  printf("Enter name of two cities\n");
  s=getchar();
  t=getchar();
  if(dist[t-65][s-65] == -1)
    printf("%c to %c is Unreachable\n",s,t);
  printf("Direct distance from %c to %c is %d\n",s,t,dist[t-65][s-65]);
  return;
}


void DistThr1city(){
  char s,r;
  int i,mint=1000,mintcity;
   printf("Enter name of two cities\n");
     s=getchar();
  r=getchar();
  for(i=s+1;i<r;i++){
    if((dist[i-65][s-65] + dist[r-65][i-65])== -1)
      printf("%c to %c via %c is unreachable\n",s,r,i);
    else
      { printf("%c to %c via %c is %d\n",s,r,(char)i,(dist[i-65][s-65] + dist[r-65][i-65]));
	if(mint>(dist[i-65][s-65] + dist[r-65][i-65]))
	  { mint=(dist[i-65][s-65] + dist[r-65][i-65]);
	    mintcity= i;}}
  }
  printf("Minimum distance from %c to %c via %c is %d\n",s,r,(char)mintcity,mint);
  return;
}

  
int main(){
  int i,j;
    for(i=0;i<5;i++){
      for(j=4;j>i;j--){
	dist[i][j]= (rand()%980)+20;
	dist[j][i]=  dist[i][j];
	dist[i][i]=0;}
    }
    printf("Original data\n");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%d\t",dist[i][j]);
      if(dist[i][j] > 150)
	dist[i][j] = -1;
    }
    printf("\n");
}
     printf("Original data formatted\n");
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%d\t",dist[i][j]);}
    printf("\n");
   }
   dist2city();
   DistThr1city();
return 0;
}
  
