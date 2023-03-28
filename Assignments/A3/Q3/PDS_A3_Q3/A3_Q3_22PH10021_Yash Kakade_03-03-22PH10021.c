#include <stdio.h>

int main()

  {
      float x1,x2,x3,y1,y2,y3,z1,z2,z3;

      printf("Enter the coordinates of three points:\n");
      scanf("%f %f %f %f %f %f %f %f %f",&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);

      printf("The coordinates of three points are:\n %.2f %.2f %.2f\n %.2f %.2f %.2f\n %.2f %.2f %.2f",x1,y1,z1,x2,y2,z2,x3,y3,z3);

      float a=(x3-x1)/(x2-x1), b=(y3-y1)/(y2-y1), c=(z3-z1)/(z2-z1) ;

      if (a==b && b==c){
        printf("\nThese three points are COLLINEAR");
      }
      else {printf("\nThese three points are NON COLLINEAR");}





      return 0;

  }







