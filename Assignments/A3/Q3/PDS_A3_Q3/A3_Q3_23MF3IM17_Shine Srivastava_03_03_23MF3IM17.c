//Name : Shine Srivastava
//Roll no. : 23MF3IM17

#include<stdio.h>
int main(){
  float x,y;
  printf("Enter your coordinates:\n");
  scanf("%f %f",&x,&y);
  if(x==0 && y==0){
    printf("It lies on both axis\n");
  }
  else if(x==0 && y!=0){
    printf("It lies on Y axis\n");
  }
  else if(x!=0 && y==0){
    printf("It lies on X axis\n");
  }
  else if(x>0 && y>0){
    printf("It lies in First Quadrant\n");
  }
   else if(x>0 && y<0){
    printf("It lies in Second Quadrant\n");
  }
   else if(x<0 && y<0){
    printf("It lies in Third Quadrant\n");
  }
   else if(x<0 && y>0){
    printf("It lies in Fourth Quadrant\n");
  }

  return 0;
}
  
  
