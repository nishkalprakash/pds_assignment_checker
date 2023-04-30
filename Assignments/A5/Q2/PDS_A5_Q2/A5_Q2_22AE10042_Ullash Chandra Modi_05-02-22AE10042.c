/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 2
*Description-To check whether a number is Goldbatch's conjecture or not
*/
#include <stdio.h>
int primeCheck (int i);

int main ()
{
    int n,i;
    printf("Enter a number to check Goldbatch's conjecture :");
    scanf("%d",&n);
    if ((n>=4)&&(n%2==0))
    {
       for(i=2;i<n;i++)
       {
           if(primeCheck(i)&&primeCheck(n-i))
           {
               printf("%d,%d",i,n-i);
               break;
           }
       }
    }
    else
    printf("-1");
    return 0;
}

int primeCheck (int i)
{
    int j=0,k;
    if (i<=1)
    {
        return 0;
    }
    else
    {
        for (k=2;k<i;k++)
        {
            if (i%k==0)
                j++;
        }
        if (j==0)
            return 1;
        else
            return 0;
    }
}

