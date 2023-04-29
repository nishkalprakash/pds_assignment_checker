#include<stdio.h>
int primeCheck(int i)
{   int count=0;
    for(int j=1;j<=i;j++)
    {
        if(i%j==0)count++;

    }
    if(count<=2)
        //printf("no. is prime\n");
        return 0;
    if(count>2)
        //printf("no. is not prime");
     return 1;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(primeCheck(n)==0||n%2!=0)//for prime numbers and odd numbers
    {
        printf("%d",-1);
    }
    else if(primeCheck(n)==1 && n%2==0)//for even composite numbers
    {
        for(int s=2;s<=n;s++){
            if(primeCheck(s)==0 && primeCheck(n-s)==0)
            {
                printf("%d,%d",s,n-s);
                return 0;
            }

    }
    }


    return 0;
}





