//Roll No.: 23CH30007
//Name: Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int a,b,c,d,x,y;

  printf("Enter the coordinates of the bottom left corner (Give a space between the coordinates)\n");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of the top right corner (Give a space between the coordinates)\n");
  scanf("%d%d",&c,&d);

  if (c<=a||d<=b) {
    printf("Ill formed rectangle\n");
  }

  else {
  printf("Enter the coordinates of point P (Give a space between the coordinates)\n");
  scanf("%d%d",&x,&y);

  if (x>c||x<a||y>d||y<b) {
    printf("The point P(%d,%d) lies outside the rectangle\n",x,y);
  }

  if (x>a && x<c && y<d && y>b) {
    printf("The point P(%d,%d) lies inside the rectangle\n",x,y);
  }

  if (x==a && y>b && y<d) {   //Check if lies on left side only
    printf("The point P(%d,%d) lies on the left side of the rectangle\n",x,y);
  }

  if (y==b && x>a && x<c) {   //Check if lies on bottom side only
    printf("The point P(%d,%d) lies on bottom side of the rectangle\n",x,y);
  }

  if (x==c && y>b && y<d) {   //Check if lies on right side only
    printf("The point P(%d,%d) lies on the right side of the rectangle\n",x,y);
  }

  if (y==d && x>a && x<c) {   //Check if lies on top side only
    printf("The point P(%d,%d) lies on top side only\n",x,y);
  }

  //checking for corners
  
  if (x==a && y==b) {
    printf("P(%d,%d) is on the bottom left corner\n",x,y);
  }

  if (x==a && y==d) {
    printf("P(%d,%d) is on the top left corner\n",x,y);
  }

  if (x==c && y==d) {
    printf("P(%d,%d) is on the top right corner\n",x,y);
  }

  if (x==c && y==b) {
    printf("P(%d,%d) is on the bottom right corner\n",x,y);
  }

  }
  
  return 0;
}

  

  

  
  
  
  
