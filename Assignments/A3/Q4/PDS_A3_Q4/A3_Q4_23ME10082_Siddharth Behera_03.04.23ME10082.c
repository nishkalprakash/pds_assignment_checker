#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;

  printf("enter the coordinates of (a,b)");
  scanf("%d,%d",&a,&b);
    printf("enter the coordinates of (c,d)");
  scanf("%d,%d",&c,&d);
    printf("enter the coordinates of p(x,y)");
  scanf("%d,%d",&x,&y);
  if ((c>a) && (d>b))
    {
      {
    printf("well formed\n");
      }
    if(((x>a) && (x<c)) && ((y>b) && (y<d))){		       
      printf("inside the triangle\n");}
    else if (((x<a)||(x>c))||((y<b)||(y>d))){
      printf("outside the triangle\n");}
    else if((x==a)&&((y>b)&&(y<d))){
      printf("bottom side of the rectriangle\n");}
    else if((x==c)&&((y>b)&&(y<d))){
      printf("top side of the rectriangle\n");}
    else if((y==b)&&((x<a)&&(x<c))){
      printf("left side of the rectriangle\n");}
    else if((y==d)&&((x>a)&&(x<c))){
      printf("right side of the rectriangle\n");}
   else if((y==d)&&(x==c)){
      printf("right top corner of the rectriangle");}
   else if((y==b)&&(x==a)){
      printf("left bottom corner of the rectriangle\n");}
   else if((y==a)&&(x==d)){
      printf("left top corner of the rectriangle\n");}
   else if((y==b)&&(x==c)){
      printf("right bottom corner of the rectriangle\n");}
 }
  else
  {
    printf("ill formed triangle\n");
    return 0;}
 
  return 0;  
}  
  
    
