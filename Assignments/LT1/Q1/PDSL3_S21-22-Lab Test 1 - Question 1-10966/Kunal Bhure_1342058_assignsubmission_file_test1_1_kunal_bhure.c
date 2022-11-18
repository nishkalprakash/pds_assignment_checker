#include<stdio.h>
int main()
{
    int a,m,h,l,i;
    float t;
    printf("Enter your monthly income: ");
    scanf("%d",&m);
    printf("Enter house loan(0 if none): ");
    scanf("%d",&h);
    printf("Enter life insurance (0if none): ");
    scanf("%d",&l);
    printf("Enter medical insurance(0 if none): ");
    scanf("%d",&i);
    a=m*12;
    {
        if(h>250000)
        {
            a=a-250000;
        }
        else
        {
            a=a-h;
        }
    }
    {
        if(l>150000)
        {
            a=a-150000;
        }
        else
        {
            a=a-l;
        }
    }
    {
        if(i>50000)
        {
            a=a-50000;
        }
        else
        {
            a=a-i;
        }
    }

    if(a<=250000)
    {
        printf("Tax=NIL");
    }
    else if(a<=500000 && a>250000)
    {
        t=a*0.05;
        printf("Tax= %f",t);
    }
    else if(a<=750000 && a>500000)
    {
        t=12500+0.1*(a-500000);
        printf("Tax= %f",t);
    }
    else if(a<=1000000 && a>750000)
    {
        t=37500+0.15*(a-750000);
        printf("Tax= %f",t);
    }
    else if(a<=1250000 && a>1000000)
    {
        t=75000+0.2*(a-1000000);
        printf("Tax= %f",t);
    }
    else if(a<=1500000 && a>1250000)
    {
        t=125000+0.25*(a-1250000);
        printf("Tax= %f",t);
    }
    else if(a>=1500000)
    {
        t=187500+0.3*(a-1500000);
        printf("Tax= %f",t);
    }
}
