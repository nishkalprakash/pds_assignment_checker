/*
Section 2
Roll no:22GG10052
Name:Vedant Thakare
Lab Test 1
Description :finding the significant digits
*/
#include<stdio.h>
int main()
{
    int n,i,b=0,count=0,a,f,c,d;
    printf("Enter the number \n");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    while(n>0)
    {
        a=n%10;
        n/=10;
        b=10*b+a;
    }
    if(n%2==0)
    {
     printf("Most significant digits to least significant digits:\n");
     f=10;
     while(n>0)
     {
         
     
     printf("%d ",n);
     }

    }
    else
    {
        printf("Least significant digits to most significant digits:\n");
        printf("%d ",n);
        while(f>1)
        {


        f=1000;
        d=n%f;
        f=f/10;
        printf("%d ",d);
        }
        printf("/n");



    }
    printf("reverse of the number :%d",b);


    printf("%d",b);
    return 0;
}
