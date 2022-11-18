#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,*p;
    int b,*q;
    int c,*r;
    printf("Enter three integer:");
    scanf("%d %d %d",&a,&b,&c);
    p=&a;
    printf("Address of a:%d\n",p);
    q=&b;
    printf("Address of a:%d\n",q);
    r=&c;
    printf("Address of a:%d\n",r);
    printf("value in a,b,c=%d,%d,%d",*p,*q,*r);
    myfunc(a,b,c,&a,&b,&c);
    printf("\n");
}
void myfunc(int x,int y,int z,int *d,int *e,int *f)
{
    printf("after function call:\n");
    d=&x;
    printf("Address of a:%d\n",d);
    e=&y;
    printf("Address of b:%d\n",e);
    f=&z;
    printf("Address of c:%d\n",f);
    if(((x>=y)&&(x>=z))&&(y>=z))
        printf("value in a,b,c=%d,%d,%d",x,y,z);
    if(((x>=y)&&(x>=z))&&(z>=y))
        printf("value in a,b,c=%d,%d,%d",y,z,x);
    if(((y>=x)&&(y>=z))&&(x>=z))
        printf("value in a,b,c=%d,%d,%d",z,x,y);
    if(((y>=x)&&(y>=z))&&(z>=x))
        printf("value in a,b,c=%d,%d,%d",x,z,y);
    if(((z>=x)&&(z>=y))&&(x>=y))
        printf("value in a,b,c=%d,%d,%d",y,x,z);
    if(((z>=x)&&(z>=y))&&(y>=x))
        printf("value in a,b,c=%d,%d,%d",x,y,z);

}
