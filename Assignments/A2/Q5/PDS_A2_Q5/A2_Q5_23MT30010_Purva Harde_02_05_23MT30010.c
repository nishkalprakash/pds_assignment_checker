//Roll no:<23Mt30010>
//Name:<Purva Harde>

#include <stdio.h>
int main ()
{int a; int b; int c; int d; int area; int perim; float p; float q;
printf("Enter bottom left corner coordinates\n");
scanf("%d %d", &a, &b);
printf("Enter top right corner coordinates\n");
scanf("%d %d", &c, &d);
area = (c-a)*(d-b);
 perim = (c-a+d-b)*2;
 p = (float)(a+b)/2;  //diagonals of a rectangle bisect each other 
 q = (float)(d+b)/2;
 printf("The area of the rectangle is %d\n", area);
 printf("The perimeter of the rectangle id %d\n", perim);
 printf("The intersection of the diagonals is %f %f\n", p,q);
 return 0;
}
