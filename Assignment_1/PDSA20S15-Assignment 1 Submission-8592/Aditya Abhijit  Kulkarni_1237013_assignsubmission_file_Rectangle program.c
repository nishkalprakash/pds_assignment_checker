#include <stdio.h>
int main()
{
  int a,b;
    printf("Enter the bottom-left coordinates:\n");
    scanf("%d%d",&a,&b);
  int c,d;
    printf("Enter the top-right coordinates :\n");
    scanf("%d%d",&c,&d);
  int g,h;
  g=a;
  h=d;
    printf("coordinates of top-left point is:(%d,%d)\n",g,h);
  int j,k;
  j=c;
  k=b;
    printf("coordinates of the bottom-right point is:(%d,%d)\n",j,k);

  printf("Thus the four corners of the rectangle is: (%d,%d), (%d,%d), (%d,%d), (%d,%d)",a,b,g,h,c,d,j,k);
  int p,q;
  printf("Enter the coordinates to be checked:\n");
  scanf("%d%d",&p,&q);

  if(p>a && p<j && q>b && q<d)
  {
  printf("The point (%d,%d) is inside the rectangle\n",p,q);
  }
    else
    printf("The point (%d,%d) is not inside the rectangle\n",p,q);


}
