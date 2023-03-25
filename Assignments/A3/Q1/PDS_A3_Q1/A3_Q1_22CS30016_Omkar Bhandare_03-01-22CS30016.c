#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int even=0, odd=0, max;
    int l=0,m=0,r=0;
    printf("Enter 5 numbers : ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    if(a%2!=0)
    {
       l = a;
       odd++;
    }
    else
    {
       even++;
    }

    if(b%2!=0)
    {
        if (l==0) l=b;
        else if (l!=0 && m==0) m=b;
       odd++;
    }
    else
    {
       even++;
    }

    if(c%2!=0)
    {
       if(l==0) l=c;
       else if (l!=0 && m==0) m=c;
       else if (l!=0 && m!=0 && r==0) r=c;
       odd++;
    }
    else
    {
       even++;
    }

    if(d%2!=0)
    {
        if(l==0) l=d;
       else if (l!=0 && m==0) m=d;
       else if (l!=0 && m!=0 && r==0) r=d;
       odd++;
    }
    else
    {
       even++;
    }

    if(e%2!=0)
    {
        if(l==0) l=e;
       else if (l!=0 && m==0) m=e;
       else if (l!=0 && m!=0 && r==0) r=e;
       odd++;
    }
    else
    {
       even++;
    }

    if(even==3)
    {
        if (a>b && a>c && a>d && a>e) printf("Largest number : %d\n", a);
        if (b>a && b>c && b>d && b>e) printf("Largest number : %d\n", b);
        if (c>b && c>a && c>d && c>e) printf("Largest number : %d\n", c);
        if (d>b && d>c && d>a && d>e) printf("Largest number : %d\n", d);
        if (e>b && e>a && e>c && e>d) printf("Largest number : %d\n", e);

    }

    if(odd==3)
    {
      if (l<m && m<r) printf("Smallest three odd numbers : %d %d %d", l,m,r);
      else if (l<r && r<m) printf("Smallest three odd numbers : %d %d %d\n", l,r,m);
      else if (m<l && l<r) printf("Smallest three odd numbers : %d %d %d\n", m,l,r);
      else if (m<r && r<l) printf("Smallest three odd numbers : %d %d %d\n", m,r,l);
      else if (r<m && m<l) printf("Smallest three odd numbers : %d %d %d\n", r,m,l);
      else if (r<l && l<m) printf("Smallest three odd numbers : %d %d %d\n",r,l,m);
    }
    return 0;
}
