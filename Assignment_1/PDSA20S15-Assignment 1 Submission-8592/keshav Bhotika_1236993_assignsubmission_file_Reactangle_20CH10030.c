#include <stdio.h>
int main()
 {
   int a,b;
   scanf("%d%d",&a,&b);
   int c,d;
   scanf("%d%d",&c,&d);
   int x2=c,y2=b;
   int x4=a,y4=d;
   printf("The four corners of the rectangle are (%d,%d), (%d,%d), (%d,%d), (%d,%d)\n",a,b,x4,y4,c,d,x2,y2);
   int p,q;
   scanf("%d%d",&p,&q);
   if((p>a&&p<c)&&(q>b&&q<d))
    printf("The point(%d,%d) is inside the rectangle\n",p,q);
   else
    printf("The point (%d,%d) is Outside the rectangle\n",p,q);
}
