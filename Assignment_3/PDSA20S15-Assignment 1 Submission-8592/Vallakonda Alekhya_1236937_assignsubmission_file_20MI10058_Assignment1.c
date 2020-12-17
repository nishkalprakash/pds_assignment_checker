#include<stdio.h>
int main ()
{
    int a,b,c,d;
    int p,q;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    scanf("%d%d",&p,&q);

    printf("The four corners of the rectangle are (%d,%d) (%d,%d) (%d,%d) (%d,%d)\n",a,b,a,d,c,d,c,b);


    if((a<p<c)&&(b<q<d))
    {
        printf("The point (%d,%d) lies inside the rectangle\n",p,q);
    }
    else
    {
        printf("The point (%d,%d) lies outside the rectangle\n",p,q);
    }
    return 0;
}
