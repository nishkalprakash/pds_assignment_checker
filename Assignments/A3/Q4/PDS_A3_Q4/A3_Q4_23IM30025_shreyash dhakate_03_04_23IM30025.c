//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  //definig the interger value for coordinated of the rectangle as wel as for the coordinates of the point be wchich is to be evaluated
  int a,b,c,d,x,y;
  printf("Enter the coordinates of rectangle(ex. if (a,b) and (c,d) then input ab c d:");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  //condition statements to run the program if not true programwill automatically go to else
  if (a<c && b<d){
    //if condition is true then this is display of user to take a input
    printf("Enter the point to be evaluated:");
    scanf("%d %d", &x, &y);
    //conditions to evaluate(analyse the position)of point
    if (x>a && x<c && y>b && y<d){
      printf("(%d,%d) point lies inside the rectangle\n",x,y);
    }
    else if( x==a && y==b){
      printf("(%d,%d)point lies on bottom left corner of the rectangle\n",x,y);
    }
    else if( x==c && y==d){
      printf("(%d,%d)point lies on top right corner of the rectangle\n",x,y);
    }
    else if( x==a && y==d){
      printf("(%d,%d)point lies on top left corner of the rectangle\n",x,y);
    }
    else if( x==c && y==b){
      printf("(%d,%d)point lies on bottom right corner of the rectangle\n",x,y);
    }
    else if( x==a && y==b){
      printf("(%d,%d)point lies on bottem left corner of the rectangle\n",x,y);
    }
    else{
      printf("(%d,%d)Point is outside of the rectangle\n",x,y);
    }
  }
  else{
    printf("Ill formed rectangle\n");
  }
  return 0;
}
