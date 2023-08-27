#include<stdio.h>
int main()
{ int a,b,c,d;
  printf(" enter the bottom- left coordinates ");
  scanf(" %d%d",&a,&b);
  printf(" enter the top- right coordinates ");
  scanf(" %d%d",&c,&d);
  //area of the rectangle= l*b//
  //perimeter of the rectangle =2(l+b)//

  printf(" area of the rectangle=%d/n",( c-a)*(d-b));
  printf(" perimeter of the rectangle= %d/n",2((c-a)+(d-b)));
  return 0;

}