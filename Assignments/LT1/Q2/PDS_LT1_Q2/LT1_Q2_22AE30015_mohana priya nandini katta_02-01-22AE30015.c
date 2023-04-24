#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,k,l;
    a=n%10;
    b=n%100;
    c=n%1000;
    printf ("enter n value");
    scanf("%d",&n);
    if (n%2!=0);/*n is odd*/{
    printf("the value is :%d",n);
    scanf("%d",&n);
    printf("the value is :%d",a);
    scanf("%d",&a);
    printf("the value is :%d",b);
    scanf("%d",&b);
    printf("the value is :%d",c);
    scanf("%d",&c);
    }
    if (n%2==0);/*n is even*/{
    printf("the value is :%d",c);
    scanf("%d",&c);
    printf("the value is :%d",b);
    scanf("%d",&b);
    printf("the value is :%d",a);
    scanf("%d",&a);
    printf("the value is :%d",n);
    scanf("%d",&n);
    }
    k=1000*c+100*b+a%100+n%1000;
    l=n-k;
    printf("the difference is:%d",l);
    scanf("%d",&l);
}
