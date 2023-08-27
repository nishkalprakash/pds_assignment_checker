//Roll No:23NA30028//
//Name:Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int a,b,c,d,l,w,area,perim;
  float p,q;
  printf("Enter the coordinates of bottom left corner:");
  scanf("%d,%d",&a,&b);                                           //coordinates seperated by comma//
  printf("Enter the coordinates of top right corner:");
  scanf("%d,%d",&c,&d);
  l=((a>c)?(a-c):(c-a));    //to get positive value//
  w=((b>d)?(b-d):(d-b));
  area= l*w;
  perim= 2*(l+w);
  printf("The area of the rectangle is:%d\n",area);
  printf("The perimeter of the rectangle is:%d\n",perim);
  p=(float)(a+c)/2;
  q=(float)(b+d)/2;
  printf("The point of intersection of the diagonals is:%.2f,%.2f\n",p,q);    //To restrict the number of decimal places to 2//
  return 0;
}
  
  
