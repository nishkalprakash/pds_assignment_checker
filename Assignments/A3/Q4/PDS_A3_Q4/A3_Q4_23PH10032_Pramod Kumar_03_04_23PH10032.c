//Name:pramod kumar
//roll no:23PH10032
#include<stdio.h>
int main() {
  int a,b,c,d,x,y;
  printf("enter bottom-left coordinate\n");
  scanf("%d %d",&a,&b);
  printf("enter top-right coordinate\n");
 scanf("%d %d",&c,&d);
if(c>a&&d>b){
printf("enter a point:");
scanf("%d %d",&x,&y);
if(a<x<c&&b<y<d)
printf("point p is inside the rectangle\n");
  else if(a<x<c&&y==d)
    printf(" point p is lies on top side\n");
  else if(x==c&&y==d)
    printf(" point p is lies on top right\n");
  else if(x>c&&y<d)
    printf("point p is outside of rectangle\n");
  else if(x==a&&y==b)
    printf("point is lies on bottom left\n");
}
 else printf("program is not run\n");
return 0;
}
  

