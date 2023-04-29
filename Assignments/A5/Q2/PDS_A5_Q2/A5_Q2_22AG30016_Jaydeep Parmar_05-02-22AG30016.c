/*
jaydeep parmar
22AG30016
lab 5(array, function, recurssion)
problem 2
*/





#include<stdio.h>
int primecheck (int x)
{
    int t,c;
    t=2,c=0;
    while((t<=x))
    {
    if (x%t==0)
        c= 1;
    break;
    t++;
    }
    return c;
}




int main()
{
    int i,f;
    scanf("%d",&i);
    f=primecheck(i);
    if(f == 0)
    printf("%d is prime\n",i);
    else
    {
        printf("%d is not prime",i);
    }
    return 0;
}


