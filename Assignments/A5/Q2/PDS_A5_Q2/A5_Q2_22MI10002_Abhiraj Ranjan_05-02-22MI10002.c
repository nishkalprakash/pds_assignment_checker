/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 5
Question: 2
Description: Goldbach's Conjecture*/
#include<stdio.h>
int primeCheck (int n)
{
    int i,flag=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag++;
        }

    }
    if(n==2) return -1;
    if(flag==0) return -1;
    else return 0;
}
int main()
{
    int n,m,p,hold;
    scanf("%d",&n);
    if(n%2==1) printf("-1");
    else
    {
        p=2;
        hold=n;
        for(p=2; p<hold; p++)
        {
            if(primeCheck(p)==-1) //main code here
            {

                hold=n-p;
                if(primeCheck(hold)==-1) break;

            }
            else continue;
        }
        if(primeCheck(n)!=-1)
            printf("%d,%d",p,hold);
        else printf("%d",primeCheck(n));

    }
    return 0;
}

