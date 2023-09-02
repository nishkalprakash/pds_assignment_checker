//Roll No.:23CH30007
//Name: Asad Ali Jaffrey

#include<stdio.h>

int main() {

  int x, y;
  printf("Enter the coordinates of point P(x,y) (Give a space between the coordinates)\n");
  scanf("%d%d", &x, &y);

  if (y==0 && x!=0) {   // Check if on X-axis only
    printf("Point P lies on x-axis\n");
  }

  if (x==0 && y!=0) {   //Check if on Y-axis only
    printf("Point P lies on y-axis\n");
  }

  if (x==0 && y==0) {   //Check if both on X-axis and Y-axis
    printf("Point P lies both on x-axis and y-axis (Origin)\n");
  }

  if (x>0 && y>0) {     //Check if in 1st Quadrant
    printf("Point P lies in the 1st Quadrant\n");
  }

  if (x<0 && y>0) {     //Check if in 4th Quadrant
    printf("Point P lies in the 4th Quadrant\n");
  }

  if (x<0 && y<0) {     //Check if in 3rd Quadrant
    printf("Point P lies in the 3rd Quadrant\n");
  }

  if (x>0 && y<0) {     //Check if in 2nd Quadrant
    printf("Point P lies in the 2nd Quadrant\n");
  }

  return 0;
}

    

  
