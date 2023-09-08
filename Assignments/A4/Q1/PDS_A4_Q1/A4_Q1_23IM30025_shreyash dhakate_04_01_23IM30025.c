//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  //defining intput and output  as a integer
  int dist,rtn, fare=0;
  printf("Enter how many kilomters you need to travel:");//user input for distance
  scanf("%d",&dist);
  printf("Enter taxi retention time(in hours):");//user input for the retention hours
  scanf("%d",&rtn);
  //calculation of fare depending on the distance
  if(dist<=8 && dist>0){
    fare+=20;
  }
  else if(dist<=12 && dist>8){
    fare+=(20+(dist-8)*10);
  }
  else if(dist<=16 && dist>12){
    fare+=(60+(dist-12)*8);
  }
  else if(dist<=20 && dist>16){
    fare+=(92+(dist-16)*6);
  }
  else if(dist>20){
    fare+=(116+(dist-20)*5);
    
  }
  //adding more fare depending upon the time of the retention of the taxi in hours
  if(rtn<1 && rtn>=0){
    fare+=0;
  }
  if ( rtn>=1 ){
    fare+=200;
  }
  if ( rtn>=12 ){
    fare+=300;
  }
  if ( rtn>=24 ){
    fare+=((rtn%24)*300);
  }

  //the final user display presentation for the total fare for the taxi
  printf("The total fare is:%d\n",fare);
  return 0;
}
