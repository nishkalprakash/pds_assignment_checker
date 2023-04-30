/*
Hindvee Rajesh Vispute
22ME10034
Section 2
Lab-5-Q1
*/

#include<stdio.h>

/* function to check whether prime or not*/
int primeCheck(int i)
{
    int j;
    int c=0; //c is counter
    for(j=2; j<i; j++)
    {
        if(i%j==0)
           ++c;

    }
    if(c>0)
        return 0; // returns 0 --> composite
    else
        return 1; // returns 1 --> prime
}

int main()
{

    int num; // num is the number entered by the user
    scanf("%d", &num);

    int n =2;

    /* print -1 if no. is prime */

    if(primeCheck(num)==1)
        printf("\n%d", -1);

    /* when no. is composite
    look for p and q such that num=p+q*/

    if(primeCheck(num)==0)
{
    while(n<num)
    {
        if(primeCheck(n)==1)
        {
            if(primeCheck(num - n)==1)
            {
                printf("\n%d, %d", n, num-n);
                break;
            }
        }
        n++;

    }
}

    return 0;
}
