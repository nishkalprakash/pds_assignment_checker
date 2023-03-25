#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    int f=0,g=0,h=0;
    int i=1;
    printf("Enter five numbers :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if ((a%2)!=0)
    {f=(i==1)?a:f;
    g=(i==2)?a:g;
    h=(i==3)?a:h;
    i++;}

    if ((b%2)!=0)
    {f=(i==1)?b:f;
    g=(i==2)?b:g;
    h=(i==3)?b:h;
    i++;}

    if ((c%2)!=0)
    {f=(i==1)?c:f;
    g=(i==2)?c:g;
    h=(i==3)?c:h;
    i++;}

    if ((d%2)!=0)
    {f=(i==1)?d:f;
    g=(i==2)?d:g;
    h=(i==3)?d:h;
    i++;}

    if ((e%2)!=0)
    {f=(i==1)?e:f;
    g=(i==2)?e:g;
    h=(i==3)?e:h;i++;}


    if (i==4)
    {printf("odd numbers in ascending order.\n");
    if ((f<g)&(g<h)){printf("%d %d %d\n",f,g,h);}
    if ((f<g)&(h<g))printf("%d %d %d\n",f,h,g);
    if ((g<f)&(f<h))printf("%d %d %d\n",g,f,h);
    if ((g<h)&(h<f))printf("%d %d %d\n",g,h,f);
    if ((h<g)&(f<g))printf("%d %d %d\n",h,f,g);
    if ((h<g)&(g<f))printf("%d %d %d\n",h,g,f);}

    else
    {if (((a>b)&(a>c))&((a>d)&(a>e)))
        {printf("Largest number : %d",a);}
    if (((b>a)&(b>c))&((b>d)&(b>e)))
        {printf("Largest number : %d",b);}
    if (((c>b)&(c>a))&((c>d)&(c>e)))
        {printf("Largest number : %d",c);}
    if (((d>b)&(d>c))&((d>a)&(d>e)))
        {printf("Largest number : %d",d);}
    if (((e>b)&(e>c))&((e>d)&(e>a)))
        {printf("Largest number : %d",e);}}



}
