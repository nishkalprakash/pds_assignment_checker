#include<stdio.h>
int main(){
  int a,b,c,d,x,y;
  printf("Enter the coordinates of bottom left corner: \n");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of top right corner: \n");
  scanf("%d%d",&c,&d);
  printf("Enter the coordinates of point P: \n");
  scanf("%d%d",&x,&y);
  if((c<a)&&(d<b)){
    printf("Ill formed rectangle");
  }
  else if((x==a)&&(y==b)){
    printf("The point P=(%d,%d) lies on the bottom left corner",x,y);
  }
  else if((x==c)&&(y==d)){
    printf("The point P=(%d,%d) lies on top right corner",x,y);
  }
  else if((x==c)&&(y==b)){
    printf("The point P=(%d,%d) lies on bottom right corner",x,y);
  }
  else if((x==a)&&(y==d)){
    printf("The point P=(%d,%d) lies on top left corner",x,y);
  }
  else if(x==a){
    printf("The point P=(%d,%d) lies on the left side",x,y);
  }
  else if(x==c){
    printf("The point P=(%d,%d) lies on the right side",x,y);
  }
  else if(y==b){
    printf("The point P=(%d,%d) lies on the bottom side",x,y);
  }
  else if(y==d){
    printf("The point P=(%d,%d) lies on the top side",x,y);
  }
  else if(((x<c)&&(x>a))&&((y>b)&&(y<d))){
    printf("The point P=(%d,%d) lies inside the rectangle",x,y);
  }
  else{
    printf("The point P=(%d,%d) lies outside the rectangle",x,y);
  }  
  return 0;
}  
