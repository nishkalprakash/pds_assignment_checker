#include<stdio.h>
int main()
{
    int a,b,c,d ;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("enter the values of c and d");
    scanf("%d%d",&c,&d);

    int e=a,f=d,g=c,h=b ;

    printf("\nthe four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)",e,f,c,d,g,h,a,b);

    int p,q ;

    scanf("%d%d",&p,&q);

    if(p>a,p<c,q>b,q<c)
        printf("\nthe point (%d,%d) lies inside the rectangle",p,q);
    else
        printf("\nthe point (%d,%d) lies outside the rectangle",p,q);

    return 0;
}
