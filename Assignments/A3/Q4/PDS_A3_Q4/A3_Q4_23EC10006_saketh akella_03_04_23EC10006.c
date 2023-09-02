#include<stdio.h>

int main(){
  int a,b,c,d,x,y;
  printf("enter the coordinates of bottom left corner (a,b) \n");
  scanf("%d%d",&a,&b);
  printf("enter the coordinates of top right corner (c,d) \n");
  scanf("%d%d",&c,&d);
  if(c>a&&d>b){
    printf("rectangle is well formed \n");
    printf("enter the coordinates of the point u want to check whether it lies inside or outside or only on sides(x,y) \n");
    scanf("%d%d",&x,&y);
    if((a<x&&x<c)&&(b<y&&y<d))printf("the point lies inside the rectangle \n");
    else if((x>c||x<a)&&(y>d||y<b)) printf("the point lies outside the rectangle \n");
    else if(x==a||y==b||x==c||y==d) printf("the point lies on the sides formed on the rectangle \n");
  }
  else printf("rectangle is ill formed \n");
  return 0;
}
