#include<stdio.h>
int iffab(int n)
{
    int a=0,b=1,sum;
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    do
    {
        sum=a+b;
        a=b;
        b=sum;
    }while(sum<n);
    if(sum==n)
        return 1;
    else
        return 0;

}
int main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please give positive number");
        return 0;
    }
    if(iffab(n))
    {
        printf("%d is a fibonacci number:",n);
    }
    else
    {
        i=1;
        while(1)
        {
            if(iffab(n-i))
               {
                   printf("Nearest fibonacci number is %d",n-i);
                   break;
               }
               if(iffab(n+i))
               {
                   printf("Nearest fibonacci number is %d",n+i);
                   break;
               }
            i++;
    }}

    return 0;
}
