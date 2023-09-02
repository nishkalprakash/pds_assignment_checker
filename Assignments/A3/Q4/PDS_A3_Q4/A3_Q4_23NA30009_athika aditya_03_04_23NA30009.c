//Roll no- 23NA30009
//athika
#include <stdio.h>
int main(){
  int a,b,c,d;
  printf("enter the bottom left coordinates (a,b):\n");
  scanf("%d %d" ,&a &b);

  if(a>c || b>d){
    printf("ILL formed rectangle.\n");
    return;
  }

  printf("enter coordinates of point P(x,y):\n");
  scanf("%d %d", &x, &y);

  if((x>a && x<c) && y==d){
    printf("p=(%d,%d) lies on bottom side of rectangle.\n",x,y);
  }

  else if(x>a && x<c) && x == a){
  printf("p=(%d,%d) lies on right side of rectangle.\n",x,y);
  }

   else if(x==
  
