/*kethavath shivakumar
 21MI31013*/

#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    int x,y,z;
    int r;
    printf("..........Enter coordinate of triangle...............\n");
    printf("enter 1 coordinate : \t");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("enter 2 coordinate : \t");
    scanf("%d",&x2);
    scanf("%d",&y2);
    printf("enter 1 coordinate : \t");
    scanf("%d",&x3);
    scanf("%d",&y3);

    x*x==(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    y*y==(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    z*z==(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    if((x<=0) || (y<=0) || (z<=0)) {
      printf("This is not a triangle.\n");
    } else {
        if((x + y <= z) || (x + z <= y) || (y + z <= x)) {
        printf("This is not a triangle.\n");
        } else {

            if( ((x * x) + (y * y) == (z * z)) || ((x * x) + (z * z) == (y * y)) || ((z * z) + (y * y) == (x * x)) ) {
                printf("This is a right-angled triangle.\n");
            } else if( ( ((x * x) + (y * y) < (z * z)) || ((x * x) + (z * z) < (y * y)) || ((z * z) + (y * y) < (x * x)) ) || ( ( x<=z && y<=z ) || ( x<=y && z<=y ) || ( y<=x && z<=x ) ) ) {
                printf("This is an acute-angled triangle.\n");
            } else if( ( ((x * x) + (y * y) > (z * z)) || ((x * x) + (z * z) > (y * y)) || ((z * z) + (y * y) > (x * x)) ) || ( ( x>z && y>z ) || ( x>y && z>y ) || ( y>x && z>x ) ) ) {
                printf("This is an obtuse-angled triangle.\n");
            } else {
                printf("Not a triangle\n");
            }

        }
  }
}
