//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Give the coordinates for the bottom-left corner of a rectangle\n");
  scanf("%d %d", &a,&b);
  printf("Give the coordinates for the top-right corner of a rectangle\n");
  scanf("%d %d", &c,&d);
  if(a>=c || b>=d) printf("Ill formed rectangle!!");
 else {printf("Give the coordinates for a point P\n");
       scanf("%d %d", &x, &y);
       if(x>a && x<c && y>b && y<d) {printf("The point P(%d %d) lies inside the rectangle\n",x,y);}
       if(x<a || x>c || y<b || y>d) {printf("The point P(%d %d) lies outside the rectangle\n",x,y);}
       if(x==a && y>b && y<d) {printf("The point P(%d %d) lies on the left side of rectangle\n",x,y);}
       if(x==c && y>b && y<d) {printf("The point P(%d %d) lies on the right side of rectangle\n",x,y);}
       if(y==b && x>a && x<c) {printf("The point P(%d %d) lies on the bottom side of the rectangle\n",x,y);}
       if(y==d && x>a && x<c) {printf("The point P(%d %d) lies on the top side of the rectangle\n",x,y);}
       if(x==a && y==b) {printf("The point P(%d %d) is bottom-left corner of the rectangle\n",x,y);}
       if(x==c && y==b) {printf("The point P(%d %d) is bottom-right corner of the rectangle\n",x,y);}
       if(x==a && y==d) {printf("The point P(%d %d) is top-let corner of the rectangle\n",x,y);}
       if(x==c && y==d) {printf("The point P(%d %d) is the top-right corner of the rectangle\n",x,y);}
      }
   return 0;
 }
     
       
       
  
  

  
  
