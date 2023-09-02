#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the coordinates of the bottom-left corner ");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of the top-right corner ");
  scanf("%d%d",&c,&d);
  if((a<c)&&(b<d)){
    printf("The rectangle is well formed ");
  }
  else
    {
      printf("Ill formed rectangle ");
    }
  printf("Enter your coordinates of p: ");
  scanf("%d%d",&x,&y);
  if(((x==a)&&(y==b))||((x==c)&&(y==d))||((x==a)&&(y==d))||((x==c)&&(y==b))){
    printf("The point p lies on any corner of the rectangle");
  }
  else if(((x>a)&&(y>b))&&((x<c)&&(y<d))){
    printf("The point p lies inside the rectangle");
  }
  else if(((a<x<c)&&((y==b)||(y==d)))||((b<y<d)&&((x==a)||(x==c)))){
    printf("The point lies on any one side of the rectangle");
  }
  else
    {
      printf("The point lies outside of the rectangle");
    }
  return 0;
}
