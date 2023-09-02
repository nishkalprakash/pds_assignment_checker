#include<stdio.h>
int main(){
  int x,y;
  printf("Enter the coordinates of the point P: \n");
  scanf("%d%d",&x,&y);
  if((x==0)&&(y==0)){
    printf("The point P lies on both X and Y axis that is it lies on origin");
  }  
  else if(x==0){
    printf("The point P lies on Y axis");
  }  
  else if(y==0){
    printf("The point P lies on X axis");
  }
  else if((x>0)&&(y>0)){
    printf("The point P lies in 1st quadrant");
  }
  else if((x<0)&&(y>0)){
    printf("The point P lies in 4th quadrant");
  }
  else if((x<0)&&(y<0)){
    printf("The point P lies in 3rd quadrant");
  }
  else{
    printf("The point P lies in 2nd quadrant");
  }  
  return 0;
}  
