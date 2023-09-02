// roll no 23CS10011
// name vivek
#include<stdio.h>
int main(){
  int a,b,c,d,x,y;
  printf("enter cordinates of rectangle");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if (a>=c||b>=d)
     printf("ill formed reactangle");
  else 
    { scanf("%d%d",&x,&y);
   if (x>c||x<a)
    printf("p=(%d,%d) lies outside the rectangle",x,y);
  else if (y>d||y<b)
    printf("p=(%d,%d) lies outside rectangle",x,y);
  else if (x==a&y!=b&y!=d)
    printf("p=(%d,%d) lies on one side of rectangle",x,y);
  else if (x==c&y!=b&y!=d)
    printf("p=(%d,%d) lies on one side of rectangle",x,y);
  else if (y==b&x!=a&x!=c)
    printf("p=(%d,%d) lies on one side of rectangle",x,y);
  else if (y==d&x!=a&x!=c)
    printf("p=(%d,%d) lies on one side of rectangle",x,y);
  else if (x==a&y==b)
    printf("p=(%d,%d) lies on two sides of rectangle",x,y);
  else if (x==a&y==d)
    printf("p=(%d,%d) lies on two sides of rectangle",x,y);
  else if (x==c&y==d)
    printf("p=(%d,%d) lies on two sides of rectangle",x,y);
  else if (x==c&y==b)
    printf("p=(%d,%d) lies on two sides of rectangle",x,y);
  else
    printf("p=(%d,%d) lies inside rectangle ",x,y);}
return 0;}
  
