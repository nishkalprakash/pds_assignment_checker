//Roll no:23HS10050
//Name:Shobhit kumar

#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,random,max=0;
  for(i=0;i<20;i++){
    printf("the random number is: %d\n",random=rand()%100);
  }
  
  if(random>max){
      max=random;
  }
  printf("The maximum number is: %d\n",max);
  return 0;

  }
  
