#include<stdio.h>>
#include<math.h>
#include<limits.h>
int main()
{
    int a,b,c,d,e,s,m,n,o,p,q,x;
    printf("enter the value of the 5 integers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    m=a%2;
    m=b%2;
    o=c%2;
    p=d%2;
    q=e%2;
    s =  m+n+o+p+q;
    if (a>=b && a>=c && a>=d && a>=e)
        x=a;
    else if (b>=a && b>=c && b>=d && b>=e)
        x=b;
    else if (c>=b && c>=a && c>=d && c>=e)
        x=c;
    else if (d>=b && d>=c && d>=a && d>=e)
        x=d;
    else if (e>=b && e>=c && e>=d && e>=a)
        x=e;

    if (s=3)
    printf("largest number:\n%d",x);
    else if (s=2)
        printf("");
    return 0;

}
