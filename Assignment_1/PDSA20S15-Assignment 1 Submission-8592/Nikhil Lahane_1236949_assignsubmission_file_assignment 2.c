#include<stdio.h>
   int main()
  {
    int a,b,c,d,x,y;

   printf("bottom left(a,b)\n");
  scanf("%d%d",&a,&b);
  printf("upper right(c,d)\n");
  scanf("%d%d",&c,&d);

 printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,a,d,c,d,c,b);
 printf("Check whether (x,y) lies in the rectangle ABCD\n");
 scanf("%d%d",&x,&y);
 if(x>=a&&x<=c&&y>=b&&y<=d)
    printf("Therefore Pt.(%d,%d)lies inside the rectangle ABCD",x,y);
 else
    printf("Therefore Pt.(%d,%d) does not lie inside the rectangle ABCD",x,y);

}
