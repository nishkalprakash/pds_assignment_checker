/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 05
* Question Number - 02
* Description - Prime Number check and Goldbech's Conjecture
*/
#include<stdio.h>
int primecheck(int i)
{
    int j,r,count=0;
    for(j=2; j<i; j++)
    {
        r=i%j;
        if(r==0)
            count++;
    }
    if(count==0)
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
    int n,p,q,k,count=0,e,f;
    printf("Enter the integer : ");
    scanf("%d",&n);
    if(n<4)
    {
        printf("-1\n");
    }
    else if((n>=4)&&((n%2)!=0))
    {
        printf("-1\n");
    }

    else
    {
        for(p=2; p<n; p++)
        {
                k=n-p;
                q=k;
                n=p+q;
        e=primecheck(p);
        f= primecheck(q);
         if((e==1)&&(f==1))count++;
    }

    }
    if(count!=0)
    printf("%d=%d+%d",n,p,q);

        return 0;
}

