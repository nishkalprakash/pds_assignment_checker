#include<stdio.h>
struct coordinates   
{
  int a;
  int b;
};
struct rectangle
{
  struct coordinates t_l;         
  struct coordinates b_r;
};
int height(struct rectangle rec)         //function determining the height of the rectangle
{
  return rec.t_l.a-rec.b_r.a;
}
int width(struct rectangle rec)          //function determining the width of the rectangle
{
  return rec.t_l.b-rec.b_r.b;
}
int area(struct rectangle rec)          //function returning the area of the rectangle
{
  return height(rec)*width(rec);
}
int main()                             //main function
{
  struct rectangle recta;
  printf("Enter the abcissa of top left corner = ");
  scanf("%d",&recta.t_l.a);
  printf("Enter the ordinate of top left corner = ");
  scanf("%d",&recta.t_l.b);
  printf("Enter the abcissa of the bottom right corner = ");
  scanf("%d",&recta.b_r.a);
  printf("Enter the ordinate of the bottom right corner = ");
  scanf("%d",&recta.b_r.b);
  printf("The area of the axis parallel rectangle = %d", area(recta));
  return 0;
}
