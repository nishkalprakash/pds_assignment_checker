#include<stdio.h>
int main()
{
  int a,b;
  printf(" Enter the bottom left coordinates: ");
  scanf("%d %d", &a,&b);
  int c,d;
  printf(" Enter the upper right coordinates: ");
  scanf("%d %d", &c,&d);
  int x,y;
  printf(" Enter the point P: ");
  scanf("%d %d ", &x, &y);
  if (c>a&&d>b){
    printf(" ill formed rectangle");
  }
  if (x==a&&y==b){
      printf(" P lies in the bottom left");}
    else if (x==c&&y==d){
      printf(" P lies in the upper right") ;}
    else if ((a&&y> b)&&(x<c&&y<d)) {
	printf(" P lies in the rectangle");
		    }
return 0;
}
  
    
