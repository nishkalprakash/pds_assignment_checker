# include <stdio.h>
int main()
{
  int a,b,c,d,e=5;
  printf("enter the coordinates of left down corner of a rectangle\n");
  scanf("%d%d", &a,&b);
  printf("enter the coordinates of top right corner of a rectangle\n");
  scanf("%d%d", &c,&d);
  if(c>a&&d>b){
    printf("well formed rectangle\n");}
  else{
    printf("ill formed rectangle");
    e=0;}
  int x,y;
  printf("enter the coordinates u want to check\n");
  scanf("%d%d", &x,&y);
  if(e>0){ 
    if(x>a&&x<c&&y==d){
      printf("(%d,%d) lies on the top side of rectangle\n", x,y);}
    else if(x>a&&x<c&&y==b){
      printf("(%d,%d) lies on the down side of rectangle\n", x,y);}
    else if(x==c&&y>b&&y<d){
      printf("(%d,%d) lies on the right side of rectangle\n", x,y);}
    else if(x==a&&y<d&&y>b){
      printf("(%d,%d)lies on the left side of rectangle\n", x,y);}
    else if(x==a&&y==b){
	printf("(%d,%d)lies on the left bottom corner of rectangle\n", x,y);}
    else if(x==a&&y==d){
	printf("(%d,%d)lies on the left top corner of rectangle\n", x,y);}
    else if(x==c&&y==b){
	printf("%d,%d)lies on the right bottom corner of rectangle\n", x,y);}
    else if(x==c&&y==d){
	printf("(%d,%d)lies on the right top corner of rectangle\n", x,y);}
    else if(x<a||x>c&&y<b||y>d){
	printf("(%d,%d)lies outside the rectangle\n", x,y);}
      }
       return 0;
}
