//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter the right upper corner coordinate of the rectangle");
  scanf("%d%d" ,&a,&b );
  printf("Enter the left lower corner coordinate of the rectangle");
  scanf("%d%d" ,&c,&d);

  if(a<c || b<d)
    {
      printf("ill formed rectangle");
      return 0;
    }

  int x,y;
  printf("enter a point");
  scanf("%d%d", &x,&y);

  if(x==c && y==b)
    printf("point lie on the left top");
  else if(x==c && y==d)
      printf("point lie on the left bottom");
  else if(x==a && y==b)
      printf("point lie on the right top");
  else if(x==a && y==d)
      printf("point lie on the right bottom");
  else if(x==a)
    printf("point lie on the right side of the rectangle");
  else if(x==c)
    printf("point lie on the left side of the rectangle");
  else if(y==b)
   printf("point lie on the upper side of the rectangle");
  else if(y==d)
    printf("point lie on the lower side of the rectangle");
  else if(x>c && x<a && y<b && y>d)
    printf("point lie inside the rectangle");
  else
    printf("point lie outside the rectangle");

}
