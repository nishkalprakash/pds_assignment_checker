#include <stdio.h>
int main()
{
 printf("This program will let you define a rectangle\nand will also let you check if a point lies within the rectangle.\n ");
 printf("NOTE: The coordinates of all points must be integers\n");
 int a, b, x2, y2, c, d, x4, y4;
 printf("Please type the x-coordinate and y-coordinate respectively of the bottom-left corner:\n");
 scanf("%d%d", &a, &b);
 printf("Please type the x-coordinate and y-coordinate respectively of the top-right corner:\n");
 scanf("%d%d", &c, &d);
 x2 = a;
 y2 = d;
 x4 = c;
 y4 = b;
 printf("The four corners of the rectangle you have defined are (In clock-wise sense):\n (%d,%d) , (%d,%d) , (%d,%d) , (%d,%d)\n"
         , a, b, x2, y2, c, d, x4, y4);
 int p, q;
 printf("Now let's check if a point lies within the rectangle.\n");
 printf("Type the x-coordinate and y-coordinate respectively of the point:\n");
 scanf("%d%d", &p, &q);
 if(((p > a)&&(p < x4))&&((q > b)&&(q < y2)))
    {
      printf("The point (%d,%d) lies within the rectangle.\n", p, q);
    }
 else
    {
      printf("The point (%d,%d) does not lie within the rectangle.\n", p, q);
    }
 return 0;
 }
