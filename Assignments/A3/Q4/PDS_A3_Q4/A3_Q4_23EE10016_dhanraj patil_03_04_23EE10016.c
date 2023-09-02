#include <stdio.h>

int main() {
  int a,b,c,d,e,f;
  printf ("enter the coordinates of the bottom left and top right corners of the rectangle\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if (c<a || d<b) {
    printf ("ill formed triangle\n");
      return 0;
  }
  printf ("enter sample point p\n");
  scanf ("%d %d",&e,&f);
  if (e==a && f==b) {
    printf ("p lies on bottom left corner of rectangle\n");
      return 0;
      }
   if (e==c && f==b) {
     printf ("p lies on bottom right corner of rectangle");
      return 0;
      }
    if (e==c && f==d) {
      printf ("p lies on top right corner of rectangle");
      return 0;
      }
     if (e==a && f==d) {
       printf ("p lies on top left corner of rectangle");
      return 0;
      }
     if (f==b && e<c && a<e) {
       printf ("p lies on bottom side of rectangle");
       return 0;
     }
     if (e==c && f>a && f<d) {
       printf ("p lies on right side of rectangle");
       return 0;
     }
}
  
