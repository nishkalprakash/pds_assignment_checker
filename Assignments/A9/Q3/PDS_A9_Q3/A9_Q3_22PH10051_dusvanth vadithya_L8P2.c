/*NAME:VADITHYA DUSVANH
  SECTION:14
  TOPIC:STRUCTUES
  ASSIGNMENT:9        */


#include<stdio.h>


 struct rectangle{
    float a:
    float b:
 };   

 int main()
 {
   
  struct rectangle corner1;
  printf("rectngle :\n");
  scanf("%f",&corner1.x);
  scanf("%f",&corner1.y);
  printf("enter the coordinates of the corner : \n");
  scanf("%f",&corner2.x);
  scanf("%f",&corner2.y);

  float a = corner1.x - corner2.x;
  float b = corner1.y - corner2.y;

  float area = abs(a) * abs(b):
  printf("area:%f",area);
  
 return 0;
}

