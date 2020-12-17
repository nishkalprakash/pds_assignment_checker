//Name Aman Kumar Singh Roll no. 20MT30002

#include <stdio.h>

int main()
{
float x1,y1,x2,y2,x3,x4,y4,y3,a,b;

 printf("Enter Co-ordinate for bottom left corner of a rectangle in x,y \n");
 scanf("%f %f",&x1,&y1);

 printf("Enter Co-ordinate for top right corner of a rectangle in x,y \n");
 scanf("%f %f",&x3,&y3);

  if(x1==x3||y1==y3)
  {
  printf("\n Error! Corners Doesn't form Rectangles ");
  return 1;
  }

x2=x3,y2=y1,x4=x1,y4=y3;


printf("\n The Four corners of Rectangle are (%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)",x1,y1,x2,y2,x3,y3,x4,y4);

printf("\n Enter a co-ordinate to check whether it lies inside the rectangle \n");
scanf("%f %f",&a,&b);

    if((a>x1 && a<x2)&&(b>y1 && b<y3))
    printf("\nThe point (%.2f,%.2f) is inside the rectangle",a,b);
    else
    printf("\nThe point (%.2f,%.2f) is not inside the rectangle",a,b);

return 0;
}
