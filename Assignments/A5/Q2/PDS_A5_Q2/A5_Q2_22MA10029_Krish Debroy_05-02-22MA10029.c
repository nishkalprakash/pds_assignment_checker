#include <stdio.h>

/*
    Section 2
    Name : Krish Debroy
    Roll No. : 22MA10029
    Assignment No :- 5
    Description : Goldbach's conjecture.
*/


int primeCheck (int i)
{
    if(i==2)
    {
        return 1;
    }
    for(int k=2;k<i;k++)
    {
        if (i%k==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the number to be checked :\n");
    scanf("%d",&n);
    if (n==4)
    {
        printf("2,2");
    }
    else if (n%2==0)
    {
        for(int j=3;j<=n/2;j++)
        {
            if (primeCheck(j) && primeCheck(n-j))/*for every prime number we check whether n-(that number) is also a prime . If yes , then it satisfies the Goldbach's conjecture*/
            {
                printf("%d,%d",j,n-j);
                break;
            }
        }
    }
    else printf("-1");
    return 0;
}
