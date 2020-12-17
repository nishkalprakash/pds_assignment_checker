#include<stdio.h>
int main()
{ int a,b,c,d,p,q;
 printf("Enter the values of coordinates for top right corner");
 printf("\nx-coordinate c=");
 scanf("%d",&c);
 printf ("y coordinate d=");
 scanf("%d",&d);
 printf("Enter the values of coordinates for bottom left corner");
 printf("\nx coordinate a=");
 scanf("%d",&a);
 printf ("y coordinate b=");
 scanf("%d",&b);
 printf("the four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)",a,b,a,d,c,d,c,b);
 printf("\nenter the coordinates of any point");
 printf("\nx coordinate p=");
 scanf("%d",&p);
 printf("y coordinate q=");
 scanf("%d",&q);
 if(((p>a)&&(p<c))&&((q>b)&&(q<d)))
    printf("the point (%d,%d) is inside the rectangle",p,q);
 else
    printf("the point (%d,%d) is outside the rectangle",p,q);
 return 0;
}
