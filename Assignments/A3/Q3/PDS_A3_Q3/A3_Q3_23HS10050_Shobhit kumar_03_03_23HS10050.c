//Roll no:23HS10050
//Name:Shobhit kumar

#include<stdio.h>

int main() {
  int x,y;
  printf("Enter the coordinates P(x,y):");
  scanf("%d%d", &x, &y);

  if(x==0){
    printf("Point lies on y axis\n");
  }
  else if(y==0){
    printf("Point lies on x axis\n");
  }
  else if(x>0 && y>0){
    printf("Point lies on 1 quadrant\n");
  }
  else if(x>0 && y<0){
    printf("Point lies on 2 quadrant\n");
  }
  else if(x<0 && y<0){
    printf("Point lies on 3 quadrant\n");
  }
  else if(x<0 && y>0){
    printf("Point lies on 4 quadrant\n");
  }
  else  {
    printf("Wrong input");
  }
  

  return 0;

}
  
