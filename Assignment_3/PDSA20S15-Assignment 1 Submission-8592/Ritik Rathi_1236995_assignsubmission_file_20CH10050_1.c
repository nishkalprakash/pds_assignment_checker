#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the co-ordinates of the bottom left corner of the rectangle\n");
    scanf("%d%d,&a,&b");
    printf("Enter the co-ordinates of the top right corner of the rectangle\n");

    int w,x,y,z;
    w=a;
    x=d;
    y=c;
    z=b;

    printf("The four co-ordinates of the rectangle are:(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,w,x,c,d,y,z);

    int p,q;
    printf("Enter the co-ordinates of the point to be checked\n");
    scanf("%d%d,&p,&q");

    if ((p>a&&p<c)&&(q>b&&q<d))
    printf("The point (%d,%d) is inside the rectangle\n",p,q);
    else
    printf("The point (%d,%d) is not inside the rectangle\n",p,q);

}
