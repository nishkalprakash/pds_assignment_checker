#include<stdio.h>

int main()
{
    int a,b,c,d,e,max;
    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (((a%2==0)&&(b%2==0)&&(c%2==0)&&(d%2!=0)&&(e%2!=0))||
    ((a%2==0)&&(b%2==0)&&(c%2!=0)&&(d%2==0)&&(e%2!=0))||
    ((a%2==0)&&(b%2!=0)&&(c%2==0)&&(d%2==0)&&(e%2!=0))||
    ((a%2!=0)&&(b%2==0)&&(c%2==0)&&(d%2==0)&&(e%2!=0))||
    ((a%2==0)&&(b%2==0)&&(c%2!=0)&&(d%2!=0)&&(e%2==0))||
    ((a%2==0)&&(b%2!=0)&&(c%2==0)&&(d%2!=0)&&(e%2==0))||
    ((a%2!=0)&&(b%2==0)&&(c%2==0)&&(d%2!=0)&&(e%2==0))||
    ((a%2==0)&&(b%2!=0)&&(c%2!=0)&&(d%2==0)&&(e%2==0))||
    ((a%2!=0)&&(b%2==0)&&(c%2!=0)&&(d%2==0)&&(e%2==0))||
    ((a%2!=0)&&(b%2!=0)&&(c%2==0)&&(d%2==0)&&(e%2==0)))
    {
       if (a>b)
            max=a;
       else
        max=b;
       if (max<c)
       max=c;
       if (max<d)
        max=d;
       if (max<e)
        max=e;
       printf("Largest number:\n%d",max);
    }
     if ((a%2==0)&&(b%2==0)&&(c%2!=0)&&(d%2!=0)&&(e%2!=0))
     {
        if ((c>d)&&(d>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,d,c);
        if ((d>e)&&(e>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,e,d);
        if ((e>c)&&(c>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,c,e);
        if ((d>c)&&(c>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,c,d);
        if ((c>e)&&(e>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,e,c);
        if ((e>d)&&(d>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,d,e);
    }
    if((a%2==0)&&(b%2!=0)&&(c%2!=0)&&(d%2==0)&&(e%2!=0))
    {
        if ((b>c)&&(c>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,c,b);
        if ((c>e)&&(e>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,e,c);
        if ((e>b)&&(b>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,b,e);
        if ((c>b)&&(b>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,b,c);
        if ((b>e)&&(e>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,e,b);
        if ((e>c)&&(c>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,c,e);
    }
    if((a%2!=0)&&(b%2==0)&&(c%2!=0)&&(d%2==0)&&(e%2!=0))
    {
        if ((a>c)&&(c>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,c,a);
        if ((c>e)&&(e>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,e,c);
        if ((e>a)&&(a>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,a,e);
        if ((c>a)&&(a>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,a,c);
        if ((a>e)&&(e>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,e,a);
        if ((e>c)&&(c>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,c,e);
    }
    if((a%2!=0)&&(b%2==0)&&(c%2==0)&&(d%2!=0)&&(e%2!=0))
    {
        if ((a>d)&&(d>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,d,a);
        if ((d>e)&&(e>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,e,d);
        if ((e>a)&&(a>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,a,e);
        if ((d>a)&&(a>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,a,d);
        if ((a>e)&&(e>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,e,a);
        if ((e>d)&&(d>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,d,e);
    }
    if((a%2==0)&&(b%2!=0)&&(c%2==0)&&(d%2!=0)&&(e%2!=0))
    {
        if ((b>d)&&(d>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,d,b);
        if ((d>e)&&(e>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,e,d);
        if ((e>b)&&(b>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,b,e);
        if ((d>b)&&(b>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,b,d);
        if ((b>e)&&(e>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,e,b);
        if ((e>d)&&(d>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,d,e);
    }
    if((a%2==0)&&(b%2!=0)&&(c%2!=0)&&(d%2!=0)&&(e%2==0))
    {
        if ((c>d)&&(d>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,d,c);
        if ((d>b)&&(b>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,b,d);
        if ((b>c)&&(c>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,c,b);
        if ((d>c)&&(c>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,c,d);
        if ((c>b)&&(b>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,b,c);
        if ((b>d)&&(d>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,d,b);
    }
    if((a%2!=0)&&(b%2==0)&&(c%2!=0)&&(d%2!=0)&&(e%2==0))
    {
        if ((c>d)&&(d>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,d,c);
        if ((d>a)&&(a>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,a,d);
        if ((a>c)&&(c>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,c,a);
        if ((d>c)&&(c>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,c,d);
        if ((c>a)&&(a>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,a,c);
        if ((a>d)&&(d>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,d,a);
    }
    if((a%2!=0)&&(b%2!=0)&&(c%2==0)&&(d%2==0)&&(e%2!=0))
    {
        if ((b>a)&&(a>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,a,b);
        if ((a>e)&&(e>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,e,a);
        if ((e>b)&&(b>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,b,e);
        if ((a>b)&&(b>e))
            printf("Smallest three odd numbers:\n%d %d %d",e,b,a);
        if ((b>e)&&(e>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,e,b);
        if ((e>a)&&(a>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,a,e);
    }
    if((a%2!=0)&&(b%2!=0)&&(c%2!=0)&&(d%2==0)&&(e%2==0))
     {
        if ((b>a)&&(a>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,a,b);
        if ((a>c)&&(c>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,c,a);
        if ((c>b)&&(b>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,b,c);
        if ((a>b)&&(b>c))
            printf("Smallest three odd numbers:\n%d %d %d",c,b,a);
        if ((b>c)&&(c>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,c,b);
        if ((c>a)&&(a>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,a,c);
    }
    if((a%2!=0)&&(b%2!=0)&&(c%2==0)&&(d%2!=0)&&(e%2==0))
        {
        if ((b>a)&&(a>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,a,b);
        if ((a>d)&&(d>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,d,a);
        if ((d>b)&&(b>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,b,d);
        if ((a>b)&&(b>d))
            printf("Smallest three odd numbers:\n%d %d %d",d,b,a);
        if ((b>d)&&(d>a))
            printf("Smallest three odd numbers:\n%d %d %d",a,d,b);
        if ((d>a)&&(a>b))
            printf("Smallest three odd numbers:\n%d %d %d",b,a,d);
    }
    return 0;
}
