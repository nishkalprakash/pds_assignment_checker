# include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the x and y coordinates of a point\n");
  scanf("%d%d", &x,&y);
  if(y==0){
    printf("The point lies on x-axis");}
  else if(x==0){
    printf("The poimt lies on the y-axis");}
  else if (x==0 && y==0){
    printf("The point lies on both the axis");}
  else if(x>0 && y>0){
    printf("The point lies in quadrant 1");}
  else if(x>0 && y<0){
    printf("The point lies in quadrant 2");}
  else if(x<0 && y<0){
    printf("The point lies in quadrant 3");}
  else if(x<0 && y>0){
    printf("The point lies in quadrant 4");}
  return 0;
}
  
