#include<stdio.h>
int f(int a);
int main()
{
    int a=0,b=1,c,d=0,n,i,j,e,s,l,k=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please enter a positive number\n");
        return 0;
    }
     for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            d=1;
            break;
        }
        if(c>n)
        {
            k=i;
            break;
        }
    }
    if(d==1)
    printf("Number is fibonacci\n");
    else

    {

        s=f(k+1);
        l=f(k+2);
        if((n-s)==(l-n))
            printf("Nearest Fibonacci is %d",s);
        else if((n-s)<(l-n))
            printf("Nearest Fibonacci is %d",s);
        else
            printf("Nearest Fibonacci is %d",l);

    }
}
int f(int a)
{
    if(a<2)
    return (a);
    else
    return (f(a-1)+f(a-2));
}
