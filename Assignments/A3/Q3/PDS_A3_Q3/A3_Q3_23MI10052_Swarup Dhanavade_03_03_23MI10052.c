// Name : Swarup Jayaram Dhanavade
// Roll No: 23MI10052

#include<stdio.h>
int main()
{ int x , y;

  printf (" Enter the co-ordinates of point(Ex: 3 4 , where x= 3 , y=4):");
    scanf("%d %d", &x, &y);
  if (y==0 ) printf("Point lies on the X- axis\n");
  if (x==0) printf ("Point lies on the Y- axis\n");
  if (x>0) {
    if (y>0) printf(" Point lies in Quqdrant no:1\n");
    if (y<0) printf(" Point lies in Quqdrant no:2\n");
  }
  if (x<0) {
    if (y>0) printf(" Point lies in Quqdrant no:4\n");
    if (y<0) printf(" Point lies in Quqdrant no:3\n");
  }
}
