#include<stdio.h>
#include<stdlib.h>
int main(){
  int integer[40];
  int z,w,x,y;
  for(int i=1;i<=40;i++){
    z=rand()%40+10;
    printf("The integer is %d \n",z);
    x=rand()%40+10;
    y=rand()%40+10;
    w=rand()%40+10;
    if(x+y+w==60){
      printf("The numbers are %d %d and %d",x,y,w);
    }
    else{
      continue;
    }
  }
}
  
