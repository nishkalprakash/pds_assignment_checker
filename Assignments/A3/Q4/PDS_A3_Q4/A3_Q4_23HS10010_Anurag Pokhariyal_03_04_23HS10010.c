// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Input the bottom left corner (a,b):\n");
  scanf("%d %d",&a,&b);
  printf("Input the top right corner(c,d):\n");
  scanf("%d %d",&c,&d);
  if (c<= a && d <= b){
      printf("The rectangle is ill formed");
  }
  if (c > a && d > b){
    printf("The rectangle is well-formed\n");
    printf("Enter the coordinates of point p(x,y):\n");
    scanf("%d %d",&x,&y);
    
    if (x == a && y == b){
      printf("The point p is on the bottom left corner\n");
    }else if (x == a && y ==d){
       printf("The point p is on the top left corner\n");
    }else if (x == c && y == d){
       printf("The point p is on the top right corner\n");
    }else if (x == a && y == d){
       printf("The point p is on the bottom right corner\n");
    }else if (x > a && y > b && x < c && y < d){
       printf("The point p is inside the rectangle\n");
       }else if (x > a && x < c && y == b){
          printf("The point p is on the bottom side\n");
       }else if (x > a && x < c && y ==d){
          printf("The point p is on the top side\n");
       }else if (y > b && y < d && x == a){
          printf("The point p is on the left side\n");
       }else if (y > b && y < c && x == c){
          printf("The point p is on the bottom side\n");
       }else {
      printf("The point p is outside the rectangle\n");}
  }
  else{
    printf("The rectangle is ill formed");
  }


  return 0;
}
