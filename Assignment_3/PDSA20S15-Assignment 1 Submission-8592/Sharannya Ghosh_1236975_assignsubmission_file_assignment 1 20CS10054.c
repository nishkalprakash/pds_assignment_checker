#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the coordinates of the bottom left corner of the rectangle\n");
    scanf("%d%d",&a,&b);
    printf("Enter the coordinates of the top right corner of the rectangle\n");
    scanf("%d%d",&c,&d);
    int x,y,m,n;
    x=a;
    y=d;
    m=c;
    n=b;
    printf("The four corners of the rectangle are:(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,x,y,c,d,m,n);
    int p,q;
    printf("Enter the coordinates of the point to be checked\n");
    scanf("%d%d",&p,&q);
    if((p>a&&p<c)&&(q>b&&q<d))
        printf("The point (%d,%d) is inside the rectangle\n",p,q);
    else
        printf("The point (%d,%d) is not inside the rectangle\n",p,q);
    return 0;
}
