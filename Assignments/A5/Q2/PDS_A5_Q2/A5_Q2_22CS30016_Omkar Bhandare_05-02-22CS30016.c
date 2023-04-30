/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 05
Description - PrimeCheck and Goldbach's conjecture
*/
#include<stdio.h>
int primeCheck (int i)
{
    if (i==1) return -1;
    if (i==2) return 1;
    if (i>2)
    {
        int p=0;
        for(int k=2; k<i; k++)
        {
            if(i%k==0) p++;
        }
        if(p>0) return 0;
        if(p==0) return 1;
    }
}
int main()
{
    int n;
    printf("Enter a positive even number (>=4) : ");
    scanf("%d", &n);
    if(n<4) printf("%d", -1);
    if(n%2!=0) printf("%d", -1);
    if(n%2==0 && n>=4)
    {
        int i,j,k=0;
        for(i=2; i<n; i++)
        {
            for(j=2; j<n; j++)
            {
                if(i+j==n && primeCheck(i)==1 && primeCheck(j)==1)
                {
                    printf("%d,%d  ", i,j);
                    k=1;
                }
            }
            if(k==1) break;
        }
    }
    return 0;
}
