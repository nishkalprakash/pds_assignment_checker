#include <stdio.h>

int main()
{
  int a,b,c,d,e,f,g,h,p,q;
  printf("Enter the bottom-left coordinates: ");
  scanf("%d%d",&a,&b);
  printf("Enter the top-right coordinates: ");
  scanf("%d%d",&c,&d);
  e=a,f=d,g=c,h=b;
  printf("The four corners of the rectangle are(%d,%d),(%d,%d),(%d,%d),(%d,%d).\n",a,b,e,f,c,d,g,h);
  scanf("%d%d",&p,&q);
  if(p>a&&p<c&&q>b&&q<d)
    printf("The point (%d,%d) is inside the rectangle.\n",p,q);
  else
    printf("The point (%d,%d) is not inside the rectangle.\n",p,q);
}
