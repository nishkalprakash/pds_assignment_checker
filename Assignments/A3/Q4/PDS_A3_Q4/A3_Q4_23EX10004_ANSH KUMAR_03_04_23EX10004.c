
//roll no-23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("enter coordinates of bottom left point\n");
  scanf("%d%d",&a,&b);
  printf("enter coordinates of upper right point\n");
  scanf("%d%d",&c,&d);
  if(a>=c||b>=d)
    printf("your rectangle is ill formed\n");
  else{
  printf("enter coordinates of point p\n");
  scanf("%d%d",&x,&y);
  if((x<c&&x>a)&&(y>b&&y<d)){
    printf("the point is inside the rectangle\n");
  }
  else if(x==a&&y>b&&y<d){
    printf("the point lies on left edge of rectangle\n");
  }
  else if(x==c&&y>b&&y<d){
    printf("the point lies on right edge of rectangle\n");
  }
  else if(x>a&&x<c&&y==b){
    printf("the point lies on bottom edge of rectangle\n");
  }
   else if(x>a&&x<c&&y==d){
    printf("the point lies on top edge of rectangle\n");
  }
   else if(x==a&&y==d){
    printf("the point lies on top left vertex of rectangle\n");
  }
   else if(x==a&&y==b){
    printf("the point lies on bottom left vertex of rectangle\n");
  }
   else if(x==c&&y==b){
    printf("the point lies on bottom right vertex of rectangle\n");
  }
   else if(x==c&&y==d){
    printf("the point lies on top right vertex of rectangle\n");
  }
   else if(x<a||x>c||y<b||y>d){
     printf("the point lies outside the rectangle\n");
  }
}
  return 0;
}
  
  
  
    
