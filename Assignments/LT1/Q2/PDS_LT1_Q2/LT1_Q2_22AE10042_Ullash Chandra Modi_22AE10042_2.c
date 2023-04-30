/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 2
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b,c,m,d,r,m1;
    printf("Enter the Integer :");
    scanf("%d",&m);
    n=abs(m);
    b=1/10;

    if (m==abs(m))
        m1=m;
    else
        m1=-m;

    r=0;
    while (m1>=0)
    {
        d=m1%10;
        r=r*10+d;
        m1=m1/10;
        if (m1==0)
            break;
    }

    if (m==abs(m))
        r=r;
    else
        r=-r;

    printf("Reverse number = %d\n",r);

    if (m==abs(m))
    {
        if (r>m)
        printf("Difference between Reverse and original number = %d",r-m);
        else
        printf("Difference between Reverse and original number = %d",m-r);
    }
    else
    {
        if (r>m)
        printf("Difference between Reverse and original number = %d",r-m);
        else
        printf("Difference between Reverse and original number = %d",m-r);

    }

    printf("\n\n");




    if (n%2==0)
    {
        a=n;
        printf("Least significant digits to most significant digits:\n");
        while (a>=0)
        {
            b=b*10;
            a=a/10;
            if (a==0)
                {
                    a=0;
                    break;
                }
        }
        while (n>0)
            {
                printf("%d ",n);
                c=n/b;
                n=n-(c*b);
                b=b/10;
            }



    }

    else
    {
        printf("Most significant digits to least significant digits:\n");
        a=n;
        while (a>0)
        {
            b=b*10;
            a=a/10;
        }
        while (b>=1)
        {
            c=n/b;
            b=b/10;
            printf("%d ",c);
        }

    }



}
