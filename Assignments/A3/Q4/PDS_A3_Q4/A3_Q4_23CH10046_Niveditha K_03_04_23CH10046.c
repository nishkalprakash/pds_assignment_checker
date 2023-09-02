#include <stdio.h>
int main()
{
  signed int a,b,c,d,x,y;
  
  printf("Enter (a,b),(c,d)\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(c<=a || d<=b){
    printf("Ill formed rectangle\n");
    return 0;
  }
  else if(c>a && d>b) {
    printf("Enter (x,y)\n");
    scanf("%d %d",&x,&y);
    
    if(x==a && y>b && y<d)
      printf("left\n");
    else if(x==c && y>b && y<d)
      printf("right\n");
    else if(y==b && x>a && x<c)
      printf("bottom\n");
    else if(y==d && x>a && x<c)
      printf("top\n");
    else if(x==a && y==b)
      printf("bottom left corner\n");
    else if(x==a && y==d)
      printf("top left corner\n");
    else if(x==c && y==d)
      printf("top right corner\n");
    else if(x==c && y==b)
      printf("bottom right corner\n");
    else if(x>a && x<c && y>b && y<d)
      printf("inside the rectangle\n");
    else if(x==a && y>d || x==a && y<b || x==c && y>d || x==c && y<b || y==b && x>c || y==b && x<a || y==d && x>c || y==d && x<a || x<a || x>c && y<b || y>d)
      printf("outside the rectangle\n");

    return 0;
  }
}
