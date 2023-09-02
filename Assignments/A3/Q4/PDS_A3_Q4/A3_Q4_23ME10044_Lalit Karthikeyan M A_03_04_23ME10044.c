//Roll Number: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){

  int a,b,c,d,x,y;

  printf("Enter the coordinates of bottom left corner: ");
  scanf("%d %d", &a, &b);

  printf("Enter the coordinates of top right corner: ");
  scanf("%d %d", &c, &d);

  if(c<=a || d<=b) printf("Ill formed Rectangle.");

  else{

    printf("Enter the coordinates of p: ");
    scanf("%d %d", &x, &y);

    if(x>a && y>b && x<c && y<d) printf("The point p lies inside the rectangle \n");
    
    if(x>a && x<c && y==d) printf("The point p lies on the top side of the rectangle \n");

    if(x>a && x<c && y==b) printf("The point p lies on the bottom side of the rectangle \n");

    if(y>b && y<d && x==a) printf("The point p lies on the left side of the rectangle \n");

    if(y>b && y<d && x==c) printf("The point p lies on the right side of the rectangle \n");

    if(x==a && y==b) printf("The point p represents the bottom left corner. \n");

    if(x==a && y==d) printf("The point p represents the top left corner. \n");

    if(x==c && y==b) printf("The point p represents the bottom right corner. \n");

    if(x==c && y==d) printf("The point p represents the top right corner. \n");

    if(x<a || x>c || y<b || y>d) printf("The point p lies outside the rectangle. \n");

  }

  return 0;
}
  
