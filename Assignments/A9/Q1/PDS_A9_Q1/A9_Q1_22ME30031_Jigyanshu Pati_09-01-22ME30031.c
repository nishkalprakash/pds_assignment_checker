//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 9
//description:Q1
#include<stdio.h>
int fbchk(int n)
{
    int i=0,j=1,c = 1;
    while(c<n)
    {
        c=i+j;
        i=j;
        j=c;
    }

   return c;
}
int fbchk1(int n)
{
    int i=0,j=1,c=1;
    while(c<n)
    {
        c=i+j;
        i=j;
        j=c;
    }

   return i;
}

int main()
{
    int n,i,a,b,d1,d2;

    scanf("%d",&n);
    printf("Value of n: %d\n",n);
    if (n<0)
    {
        printf("please give positive number");
        return 0;
    }
    a=fbchk(n);
b=fbchk1(n);

    d1=a-n;
    d2=n-b;
    if (n==a||n==b)
    {
        printf("%d is a fibonacci number",n);
    }
    else
    {
        if (d1>=d2)
        {
            printf("nearest fibonacci number:%d",b);
        }
        else if (d1<d2)
        {
            printf("nearest fibonacci number:%d",a);
        }

    }



}
