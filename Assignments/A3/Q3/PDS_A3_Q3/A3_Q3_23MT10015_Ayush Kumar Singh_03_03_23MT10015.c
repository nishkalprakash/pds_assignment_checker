//NAME : AYUSH KUMAR SINGH
// Roll No.: 23MT10015

#include <stdio.h>
#include <math.h>

int main(){
  float x, y;
  printf("Write the coordinates:\n");
  scanf("%f %f", &x,&y);
  if(x==0 && y==0){
    printf("P lies on both x and y axis (Origin)\n");
  }else if (x==0 && y!=0){
    printf("P lies on y-axis\n");
  }else if (x!=0 && y==0){
    printf("P lies on x-axis\n");
  }else if (x>0){
    if (y>0){printf("P lies in 1st Quadrant\n");
    }else {printf("P lies in 2nd Quadrant\n");
    }
  }else if(x<0){
    if (y>0){printf("P lies in 4th Quadrant\n");
    }else {printf("P lies in 3rd Quadrant\n");}
    
  }
      
  return 0;
}
