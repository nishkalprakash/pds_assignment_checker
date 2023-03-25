#include <stdio.h>
int main()
{
    int a, b, c, d, e, l5, l4, l3, l2, l1;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a>b) l5= a, l4= b;
    else l5= b, l4=a;
    if(l5>c)
    {
        if(c>l4) l3=l4, l4=c;
        else l3=c;
    }
    else l3= l4, l4=l5, l5 = c;
    if(l5>d)
    {
        if(d>l4) l2=l3, l3=l4, l4=d;
        else if(d>l3) l2=l3, l3=d;
    }
    else l2=l3, l3=l4, l4=l5, l5=d;
    if(e>l5) l1=l2, l2=l3, l3=l4,l4=l5, l5=e;
    else if(e>l4) l1=l2, l2=l3, l3=l4, l4=e;
    else if(e>l3) l1=l2, l2=l3, l3=e;
    else if(e>l2) l1=l2, l2=e;
    else l1=e;
    int cond1 = a%2 + b%2 + c%2 + d%2 + e%2;
    if(cond1==3)
    {
        printf("Smallest three odd numbers:\n");
        if(l1%2==1) printf("%d ", l1);
        if(l2%2==1) printf("%d ", l2);
        if(l3%2==1) printf("%d ", l3);
        if(l4%2==1) printf("%d ", l4);
        if(l5%2==1) printf("%d ", l5);
    }
    else if(cond1==2)
    {
        printf("Largest number:\n%d ", l5);

    }
    return 0;

}
