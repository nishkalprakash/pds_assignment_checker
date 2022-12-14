#include<stdio.h>
#include<math.h>

int main()
{
  int x1,y1,x2,y2,x3,y3;
  printf("enter two numbers: \n");
  scanf("%d%d",&x1,&y1);
  printf("enter two numbers: \n");
  scanf("%d%d",&x2,&y2);
  printf("enter two numbers: \n");
  scanf("%d%d",&x3,&y3);

  if( (x2 - x1)/(y2 - y1) == (y3 -y2)/(x3 - x2))
  printf("invalid");

  double length1,length2,length3,squr_root;

  length1=squr_root((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));                                                       length2=squr_root((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
  length3=squr_root((x3-x1)*(x3-x1) + (y3-y1)*(y3-y3));


return 0;
}
