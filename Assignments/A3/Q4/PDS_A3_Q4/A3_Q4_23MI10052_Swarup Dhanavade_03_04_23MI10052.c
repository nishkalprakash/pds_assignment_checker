// Name : Swarup Jayaram Dhanavde
// Roll no: 23MI10052

#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;

  printf("Enter Co-ordinates of  bottom left corner:");
  scanf("%d %d", &a,&b);
  printf("Enter Co-ordinates of top  right  corner:");
  scanf("%d %d", &c,&d);
  if (a>c || b>d) printf ("ill formed rectangle");
  if (a<c && b<d){
    printf("enter the Co-ordinates of point 'P':");
    scanf("%d %d",&x,&y);
    if (x<=c && x>=a && y<=d && y>=b){
    if (x<c && x>a && y<d && y>b)printf ("Point lies inside the rectangle\n");
    if (x<c && x>a && y==b)printf ("Point lies on bottom side\n");
    if (x<c && x>a && y==d)printf ("Point lies on top side\n");
    if (x==a && y<d && y>b)printf ("Point lies on left side\n");
    if (x==c && y<d && y>b)printf ("Point lies on right side\n");
    if (x==a && y==b) printf ("point lies on bottom left corner\n");
    if (x==c && y==b) printf ("point lies on bottom rightt corner\n");
    if (x==c && y==d) printf ("point lies on top right corner\n");
    if (x==a && y==d) printf ("point lies on top left corner\n");
    }
    else printf("point lies out side rectangle");
	   }
  return 0;
}
