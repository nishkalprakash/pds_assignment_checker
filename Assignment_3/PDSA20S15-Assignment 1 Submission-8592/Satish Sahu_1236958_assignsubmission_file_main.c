#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,p,q;
    printf("the coordinates  of rectangle will be in the format (a,b), (c,d) ,(e,f), (g,h)\n");
    printf("please enter the four coordinates value\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    f=d;
    g=c;
    h=b;
    e=a;
    printf("The four corners of rectangle are (%d",a);
    printf(",%d)",b);
    printf("(%d",c);
    printf(",%d)",d);
    printf("(%d",e);
    printf(",%d)",f);
    printf("(%d",g);
    printf(",%d)\n",h);
    printf("enter a random point cordinate\n");
    scanf("%d%d",&p,&q);
    printf("the cordinate of random point is");
    printf("(%d",p);
    printf(",%d)\n",q);
    if(p>a&&p<g)
    {
        if(q<f&&q>b)
        {
            printf("the point lies inside the rectangle\n");
        }
    }
    else
    {
        printf("the point does not lies inside the rectangle\n");
    }
    return 0;
}
