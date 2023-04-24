#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,h,t=1,e,f,g=1,s=0;
    printf("Enter the integer:");
    scanf("%d",&a);
    if (a%2==1)
    {
        printf("Most significant digits to least significant digits:\n");
        int t=1;
        c = abs(a);
        while (c>0)
        {
            c=c/10;
            t=t*10;
        }
        t=t/10;
        while (t>=1)
        {
            b=abs(a)/t;
            printf("%d, ",b);
            t=t/10;
        }
    }
    else if(a%2==0)
    {
        printf("Least significant digits to most significant digits:\n");
        int t=1;
        c = abs(a);
        while (c>0)
        {
            c=c/10;
            t=t*10;
        }
        while (t>=10)
        {
            b=abs(a)%t;
            printf("%d, ",b);
            t=t/10;
        }
    }
    /*for reversing the number */
    e=abs(a);
    while ((e%10)!=e)
    {
        e=e/10;
        t=t*10;
    }
    h=a;
    while(t>=1)
    {
       f= h/t;
       s=s+f*g;
       g=g*10;
       h=h%t;
       t=t/10;
    }
    printf("\nReverse number = %d",s);
    printf("\nDifference between reverse and original number = %d",abs(s-a));
    return 0;

}
