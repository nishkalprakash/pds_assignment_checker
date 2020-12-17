#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c,d,e,f,g,h,p,q;
  printf("Enter bottom left corner a,b \n");
  scanf("%d%d",&a,&b);
  printf("Enter top right corner c,d \n");
  scanf("%d%d",&c,&d);
  e=c; f=b; g=a ; h= d ;
  printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,g,h,c,d,e,f );
    printf("Enter the cordinates you want to check (p,q) \n");
    scanf("%d%d",&p,&q);
    if(p>2&&p<7)
    {
        if(q>1&&q<5)
        {
            printf("The point (%d,%d) is inside the rectangle.",p,q );
        }else
        {
            printf("The point (%d,%d) is outside the rectangle.",p,q );
        }

    }else
    {
        printf("The point (%d,%d) is outside the rectangle.",p,q );
    }
}
