#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,odd=0,even=0,max;
    printf("Enter any 5 integers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("\n");
    if(a%2==1)
    odd++;
    else
        even++;
    if(b%2==1)
    odd++;
    else
        even++;
    if(c%2==1)
    odd++;
    else
        even++;
    if(d%2==1)
    odd++;
    else
        even++;
    if(e%2==1)
    odd++;
    else
        even++;

    if(even==3)
    {
        if(a>b)
            max=a;
        else
            max=b;
        if(max<c)
            max=c;
        if(max<d)
        max=d;
        if(max<e)
            max=e;
        printf("Largest number:\n%d",max);
    }
    if (odd==3)
    printf("Smallest three odd numbers:");
    {
        int o1,o2,o3;
        if(a%2==1)
        o1=a;
    if(b%2==1 && o1!=a)
    o1=b;
if(c%2==1 && o1!=a && o1!=b)
    o1=c;

    if(d%2==1 && o1!=a && o1!=b && o1!=c)
o1=d;
    if(e%2==1 &&  o1!=a && o1!=b && o1!=c && o1!=d)
        o1=e;


    if(a%2==1 &&o1!=a)
        o2=a;
    if(b%2==1 && o1!=b && o2!=a)
    o2=b;
if(c%2==1 && o2!=a && o2!=b && o1!=c)
    o2=c;

    if(d%2==1 && o2!=a && o2!=b && o2!=c && o1!=d)
o2=d;
    if(e%2==1 &&  o2!=a && o2!=b && o2!=c && o2!=d && o1!=e)
        o2=e;

        if(a%2==1 &&o1!=a && o2!=a )
        o3=a;
    if(b%2==1 && o1!=b && o3!=a && o2!=b)
    o3=b;
if(c%2==1 && o3!=a && o3!=b && o1!=c && o2!=c)
    o3=c;

    if(d%2==1 && o3!=a && o3!=b && o3!=c && o1!=d && o2!=d)
o3=d;
    if(e%2==1 &&  o3!=a && o3!=b && o3!=c && o3!=d && o1!=e && o2!=e)
        o3=e;

    if((o1<o2)&&(o1<o3))
          {
              printf("%d ",o1);

            if(o2<o3)
        printf("%d %d ",o2,o3);
    else
        printf("%d %d ",o3,o2);
       }
        if((o2<o1)&&(o2<o3))
          {
              printf("%d ",o2);
if(o1<o3)
        printf("%d %d ",o1,o3);
    else
        printf("%d %d ",o3,o1);
       }
        if((o3<o2)&&(o3<o1))
          {
              printf("%d ",o3);

            if(o2<o1)
        printf("%d %d ",o2,o1);
    else
        printf("%d %d ",o1,o2);
       }
    }
    return 0;
}
