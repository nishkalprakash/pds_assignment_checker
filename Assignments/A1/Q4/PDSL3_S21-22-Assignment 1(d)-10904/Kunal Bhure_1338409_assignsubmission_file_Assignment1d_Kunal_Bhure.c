#include <stdio.h>
#include <math.h>
int main()
{
int x1, x2, x3,y1, y2, y3;
    double x,y,z;
    printf("enter 1 coordinate:");
    scanf("%d%d",&x1,&y1);
    printf("enter 2 coordinate:");
    scanf("%d%d",&x2,&y2);
    printf("enter 3 coordinate:");
    scanf("%d%d",&x3,&y3);
    x=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    y=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    z=sqrt(pow(x2-x3,2)+pow(y2-y3,2));


    if((x<=0) || (y<=0) || (z<=0)) {
      printf("This is not a triangle.\n");
    }
    else {
        if((x + y <= z) || (x + z <= y) || (y + z <= x))
            {
        printf("This is not a triangle.\n");
        }
        else {

            if( ((x * x) + (y * y) == (z * z)) || ((x * x) + (z * z) == (y * y)) || ((z * z) + (y * y) == (x * x)) ) {
                printf("This is a right-angled triangle.\n");}
            else if( ( ((x * x) + (y * y) < (z * z)) || ((x * x) + (z * z) < (y * y)) || ((z * z) + (y * y) < (x * x)) ) && ( ( x<=z && y<=z ) || ( x<=y && z<=y ) || ( y<=x && z<=x ) ) ) {
                printf("This is an acute-angled triangle.\n");}
            else if( ( ((x * x) + (y * y) > (z * z)) || ((x * x) + (z * z) > (y * y)) || ((z * z) + (y * y) > (x * x)) ) && ( ( x>=z && y>=z ) || ( x>=y && z>=y ) || ( y>=x && z>=x ) ) ) {
                printf("This is an obtuse-angled triangle.\n");}
            else {
                printf("Not a triangle\n");
            }

        }
  }

  return 0;
}
