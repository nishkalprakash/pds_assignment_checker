//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int x,y;
  printf("enter the x,y coordinates of a point:");
  scanf("%d%d",&x,&y);
  if(x==0||y==0){
    if(x==0&&y==0){
      printf("point lies on both x and y axis");
      }
    else if(x==0&&y!=0){
      printf("point lies on x axis");
      }
    else{
      printf("point lies on y axis");
      }
    }
  else{
    if(x>0&&y>0){
      printf(" point lies in 1st quadrant");
      }
    else if(x>0&&y<0){
      printf(" point lies in 2nd quadrant");
      }
    else if(x<0&&y<0){
      printf(" point lies in 3rd quadrant");
      }
    else{
      printf(" point lies in 4th quadrant");
      }
    }
    return 0;
  }
