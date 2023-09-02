//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int a = 0; int b = 0;
  int c = 0; int d = 0;
  int px = 0; int py = 0;

  printf("Enter the coordinates for the bottom left corner of the rectangle: \n");
  scanf("%d %d", &a, &b);

  printf("Enter the coordinates for the top right corner of the rectangle: \n");
  scanf("%d %d", &c, &d);
  
  if(a>=c || b>=c){
    printf("Ill Formed Rectangle.\n");
    return 0;
  }

  printf("Enter the coordinates of the point P: \n");
  scanf("%d %d", &px, &py);

  
  //Checking Inside/Outside
  if((px > a && py > b) && (px < c && py < d)){
    printf("The point P(%d,%d) lies INDSIDE the defined rectangle.\n", px, py);
    return 0;
  }
  if((px < a || py < b) || (px > c || py > d)){
    printf("The point P(%d,%d) lies OUTSIDE the defined rectangle.\n", px, py);
    return 0;
  }

  
  //Checking If on sides
  if((px==a) && (py > b && py < d)){
    printf("The point P(%d,%d) lies on the LEFT SIDE of the defined rectangle.\n", px, py);
    return 0;
  }
  if((px==c) && (py > b && py < d)){
    printf("The point P(%d,%d) lies on the RIGHT SIDE of the defined rectangle.\n", px, py);
    return 0;
  }
  if((py==b) && (px > a && px < c)){
    printf("The point P(%d,%d) lies on the BOTTOM SIDE of the defined rectangle.\n", px, py);
    return 0;
  }
  if((py==d) && (px > a && px < c)){
    printf("The point P(%d,%d) lies on the TOP SIDE of the defined rectangle.\n", px, py);
    return 0;
  }

  
  //Check if on corners
  if(px==a && py == b){
    printf("The rectangle lies on the BOTTOM LEFT Corner of the defined rectangle.\n");
    return 0;
  }
  if(px==a && py == d){
    printf("The rectangle lies on the TOP LEFT Corner of the defined rectangle.\n");
    return 0;
  }
  if(px==c && py == b){
    printf("The rectangle lies on the BOTTOM RIGHT Corner of the defined rectangle.\n");
    return 0;
  }
  if(px==c && py == d){
    printf("The rectangle lies on the TOP RIGHT Corner of the defined rectangle.\n");
    return 0;
  }
  
}
  

 
