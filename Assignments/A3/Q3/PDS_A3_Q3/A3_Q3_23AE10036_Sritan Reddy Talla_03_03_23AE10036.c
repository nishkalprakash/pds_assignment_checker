//t.Sritan//
//23AE10036//
#include<stdio.h>
int main(){
  int marks;
  int x,y;
  printf("enter coordinates of point p \n");
  scanf("%d %d",&x,&y);
  if ((x!=0)&&(y==0)){
    printf("lies on y axis");}
  else if((x==0)&&(y!=0)){
    printf("lies on x axis");}
  else if((x>0)&&(y>0)){
    printf("lies on quadrant 1");}
  else if((x>0)&&(y<0)){
    printf("lies on quadrant 2");}
  else if((x<0)&&(y>0)){
    printf("lies on quadrant 4");}
  else if((x<0)&&(y<0)){
    printf("lies on quadrant 3");}
  else {
    printf(" origin");}
 return 0;
}


  





