//T.Sritan Reddy
//23AE10036

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int dist[5][5];
void dist2(char s,char t);
void dist3(char s,char t);

int main(){
  char s,t;

  srand(time(0));
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(i==j){dist[i][j]=0;}            //creating matrix
      if(i<j){dist[i][j]=rand()%180+20;}
      if(i>j){dist[i][j]=dist[j][i];}
    }
  }

  for(int i=0;i<5;i++){
   for(int j=0;j<5;j++){
     printf("%d   ",dist[i][j]);        //printing matrix
   }
   printf("\n");
 }

  for(int i=0;i<5;i++){
   for(int j=0;j<5;j++){
     if(dist[i][j]>150){ dist[i][j]=-1; }//disconnected cities
    }
 }
 printf("\n");

for(int i=0;i<5;i++){
   for(int j=0;j<5;j++){
     printf("%d   ",dist[i][j]);        //printing altered matrix
   }
   printf("\n");
 }
 printf("enter the cities \n");
 scanf("%c%c",&s,&t);
 // scanf("%c",&t);
 dist2(s,t);
 dist3(s,t);


 return 0;
  }

void dist2(char s,char t){
  s-=65; t-=65;
  if(dist[s][t]==-1){printf("not reachable \n");}
  else{
    printf("%d  \n",dist[s][t]);
  }
}

void dist3(char s,char t){
  s-=65; t-=65;int dis=0,min=999;

  for(int i=0;i<5;i++){
   char x=65+i;

   if((i==s)||(i==t)){continue;}         //skipping given values
   if((dist[s][i]==-1)||(dist[i][t]==-1)){ //ignoring disco
     printf("form %c to %c via %c unreachable\n",s+65,t+65,x);
     continue;
   }
   dis=dist[s][i]+dist[i][t];  //noting min
   if(min>dis){
     min=dis;
   }

   printf("form %c to %c via %c %d \n",s,t,x,dis);
 }
 
  if(min==999){ printf("so unreachable\n");}
  
  else{ printf("so mininmum dist is %d \n",min);}

}
