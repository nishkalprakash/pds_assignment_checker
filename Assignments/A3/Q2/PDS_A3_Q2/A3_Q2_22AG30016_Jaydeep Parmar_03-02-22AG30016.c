#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    if ((a<=999)&&(a>=-999)&&(b<=999)&&(b>=-999))
        printf("the pair of number is %d %d\n",a,b);
    else
        printf("please enter number from given domain\n");
    c=a/100;
    d=a%100;
    e=b/100;
    f=b%100;
    g=d/10;
    h=f/10;
    i=d%10;
    j=f%10;
    if ((c==j)&&(g==h)&&(i==e))
         printf("hey it is a perfect pair");
         else if((c==0)&&(e==0)&&(g==j)&&(i==h))
         printf("perfect pair");
     else if ((c==0)||(e==0))
        printf("wrong input\n");
         else
         printf("not a perfect pair\n");
    return 0;
}
