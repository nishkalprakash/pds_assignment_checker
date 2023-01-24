# include<stdio.h>
// finding area of an axis parallel rectangle
struct rectangle {
    float x1;
    float y1; 
    float x2; 
    float y2;
    float area;
}; struct rectangle r1;

int main ()
{
  printf("Rect :(x1, y1), (x2, y2)\n");
  printf("Enter x1 and y1 : ");
  scanf("%f %f", &r1.x1, &r1.x2);
  printf("Enter x2 and y2 : ");
  scanf("%f %f", &r1.x2, &r1.y2);
  r1.area = (r1.x2-r1.x1)*(r1.y2-r1.y1);
  // now it will print the area
  if(r1.area >= 0) {
  printf("Area is : %f", r1.area);
}
  else {
  printf("Area is : %f", (-1)*r1.area);
}
  return 0;
}
