#include<stdio.h>
int main()
{
    int n,ln,hn,d1,d2;
    scanf("%d",&n);
    int y=n;
    if(n<=0)
    {
        printf("Please give positive number\n");
        return 0;
    }
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    int p=1,t=1;
    while(t<=i)
    {
        p=p*10;
        t++;
    }
   int a=0,b=1,c=0,k=0;
    while(c<=p)
{

c=a+b;
a=b;
b=c;
if(c==y)
{
    printf("It's a fibonnaci no.\n");
    return 0;
}
}
printf("not a fibonnaci no.\n");
a=0,b=1,c=0;
while(y>0)
{
    while(c<=p)
    {
        c=a+b;
        a=b;
        b=c;
       // printf("%d\t",c);
        if(c==y)
        {
           // printf("%d",c);
            break;
        }
    }
    ln=c;
    if(c==y)
    {
        break;
    }
    a=0,b=1,c=0;
    y--;
}
a=0,b=1,c=0;
int u=0;
while(c<=p)
{

c=a+b;
a=b;
b=c;
if(ln==c)
{
    break;
}
u++;
}
a=0,b=1,c=0;
int q=0;
while(q<=(u+1))
{

c=a+b;
a=b;
b=c;
q++;
}
hn=c;
d1=y-ln;
d2=hn-y;
if(d1=d2)
{
    printf("THE CLOSEST NUMBER IS: %d",ln);
}
if(d1>d2)
{
    printf("THE CLOSEST NUMBER IS: %d",hn);
}
if(d1<d2)
{
    printf("THE CLOSEST NUMBER IS: %d",ln);
}
}
