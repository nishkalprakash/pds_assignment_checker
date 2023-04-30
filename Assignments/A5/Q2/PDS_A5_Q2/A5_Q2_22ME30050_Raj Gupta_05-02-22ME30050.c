#include <stdio.h>
#include <math.h>

int primecheck(int i)
{
    int k=0;
    for (int j=2;j<i;j++)
    {
        if (i%j==0) k++;
    }
    if (k==0) return 1;
    else return -1;
}


int main()
{
    int n,z=0 ;
    printf("enter the value of n : ");
    scanf("%d",&n);
    if (n<4)
    {
        printf("-1");
        return 0;
    }
    else if ((n%2)==1)
    {
        printf("-1");
        return 0;
    }
    for (int i=2;i<=n/2;i++)
    {
        int x=primecheck(i),y=primecheck(n-i);
        if (x==1 && y==1)
        {
            z=i;
            break;
        }
    }
    printf("%d, %d\n\n",z,n-z);

    return 0;
}





