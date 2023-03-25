#include<stdio.h>
int main()
{

    int a,b,c,d,e,p,x;
    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    p = a%2 + b%2 + c%2 + d%2 + e%2;

    x = -1;
    if (a>x)
    {
        x = a;
    }

     if (x<b)
    {
        x = b;
    }

     if (x<c)
    {
        x = c;
    }
     if (x<d)
    {
        x = d;
    }
    if (x<e)
    {
        x = e;
    }

    if (p == 2)
    {
        printf ("Largest no. is %d\n",x);
    }

}
