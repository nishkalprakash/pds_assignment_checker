//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int x,y;
  printf("give the integer coordinates of the point(x,y)\n");
  scanf("%d %d",&x,&y);         //took input point
  if(x==0&&y!=0)
    printf("point lies on y axis and not on x axis");
  else if(x!=0&&y==0)
    printf("point lies on x axis and not on y axis");
  else if(x==0&&y==0)
    printf("point lies on both x and y axis(the point is origin)");
    
  else if(x>0&&y>0)
    printf("it lies in 1st quadrant");
  else if(x<0&&y>0)
    printf("it lies in 2nd quadrant");
  else if(x<0&&y<0)
    printf("it lies in 3rd quadrant");
  else if(x>0&&y<0)
    printf("it lies in 4th quadrant");
  printf("\n");
  return 0;
}
/*though we could also use if instead of else if each time but it fails when an else is used at the end*/
