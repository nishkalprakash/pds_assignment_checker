
#include<stdio.h>
int main()
{
  float x1,x2,x3,y1,y2,y3,z1,z2,z3;
  printf("Enter coordinates of A\n");
  scanf("%f%f%f",&x1,&y1,&z1);
  printf("Enter coordinates of B\n");
  scanf("%f%f%f",&x2,&y2,&z2);
  printf("Enter coordinates of C\n");
  scanf("%f%f%f",&x3,&y3,&z3);
  if(((x2-x1)/(x3-x1))==((y2-y1)/(y3-y1)) &&  ((x2-x1)/(x3-x1))==((z2-z1)/(z3-z1))) //to check if points are collinear
    printf("The given three points are collinear\n");
  else
    printf("The given three points are not collinear\n");
  if(x1>x2 && x1>x3) //if x coordinates are different
  {
      if(x2>x3)
        printf("C(%f%f%f)<B(%f%f%f)<A(%f%f%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
      else
        printf("B(%f%f%f)<C(%f%f%f)<A(%f%f%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
  }
  else if(x2>x1 && x2>x3)
  {
      if(x1>x3)
        printf("C(%f%f%f)<A(%f%f%f)<B(%f%f%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
      else
        printf("A(%f%f%f)<C(%f%f%f)<B(%f%f%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
  }
  else if(x3>x1 && x3>x2)
  {
      if(x1>x2)
        printf("B(%f%f%f)<A(%f%f%f)<C(%f%f%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
      else
        printf("A(%f%f%f)<B(%f%f%f)<C(%f%f%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
  }
  else if(x1==x2 && x1<x3) //if any two x coordinates are equal and smaller than the third coordinate
  {
      if(y1<y2)
        printf("A(%f%f%f)<B(%f%f%f)<C(%f%f%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
      else
        printf("B(%f%f%f)<A(%f%f%f)<C(%f%f%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
  }
  else if(x1==x2 && x1>x3)//if any two x coordinates are equal and greater than the third coordinate
  {
      if(y1>y2)
        printf("C(%f%f%f)<B(%f%f%f)<A(%f%f%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
      else
        printf("C(%f%f%f)<A(%f%f%f)<B(%f%f%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
  }
  else if(x1==x2==x3)//if all three x coordinates are equal
  {

      if(y1>y2 && y1>y3)//checking y coordinates
  {
      if(y2>y3)
        printf("C(%f%f%f)<B(%f%f%f)<A(%f%f%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
      else
        printf("B(%f%f%f)<C(%f%f%f)<A(%f%f%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
  }
  else if(y2>x1 && y2>x3)
  {
      if(y1>y3)
        printf("C(%f%f%f)<A(%f%f%f)<B(%f%f%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
      else
        printf("A(%f%f%f)<C(%f%f%f)<B(%f%f%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
  }
  else if(y3>y1 && y3>y2)
  {
      if(y1>y2)
        printf("B(%f%f%f)<A(%f%f%f)<C(%f%f%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
      else
        printf("A(%f%f%f)<B(%f%f%f)<C(%f%f%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
  }

  else if(y1==y2==y3) //if y coordinates are also equal
  {
      if(z1>z2 && z1>z3) //checking z coordinates
  {
      if(z2>z3)
        printf("C(%f%f%f)<B(%f%f%f)<A(%f%f%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
      else
        printf("B(%f%f%f)<C(%f%f%f)<A(%f%f%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
  }
  else if(z2>x1 && z2>z3)
  {
      if(z1>z3)
        printf("C(%f%f%f)<A(%f%f%f)<B(%f%f%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
      else
        printf("A(%f%f%f)<C(%f%f%f)<B(%f%f%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
  }
  else if(z3>x1 && z3>x2)
  {
      if(z1>z2)
        printf("B(%f%f%f)<A(%f%f%f)<C(%f%f%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
      else
        printf("A(%f%f%f)<B(%f%f%f)<C(%f%f%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
  }
  }
  else if(y1==y2 && y1<y3)//if two y coordinates are equal and smaller than third one
  {
      if(z1<z2)
        printf("A(%f%f%f)<B(%f%f%f)<C(%f%f%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
      else
        printf("B(%f%f%f)<A(%f%f%f)<C(%f%f%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
  }
  else if(y1==x2 && y1>x3)
  {
      if(z1>z2)
        printf("C(%f%f%f)<B(%f%f%f)<A(%f%f%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
      else
        printf("C(%f%f%f)<A(%f%f%f)<B(%f%f%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
  }
  }
  return 0;
}
