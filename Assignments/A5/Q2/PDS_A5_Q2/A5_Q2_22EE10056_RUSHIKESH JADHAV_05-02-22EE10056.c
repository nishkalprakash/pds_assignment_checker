/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-5
Description:-Goldbach's conjucture*/
#include<stdio.h>
int primeCheck(int i)
{
    int j;
    if(i==2)
    {
        return 1;
    }
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            break;
    }
    if(j==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i;
    printf("Enter any even positive integer:");
    scanf("%d",&n);
    if(n<4 || n%2!=0)
    {
        printf("-1");
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(primeCheck(i) && primeCheck(n-i))
        {
            printf("%d, %d",i,n-i);
            break;
        }
    }

    return 0;
}
