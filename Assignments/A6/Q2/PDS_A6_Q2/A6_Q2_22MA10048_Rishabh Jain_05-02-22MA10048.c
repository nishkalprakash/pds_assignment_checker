#include <stdio.h>
#include <math.h>

int primeCheck(int i)
{
    float limit;
    int flag;
    limit= 1+sqrt(i);
    if(i==2) return 1;
    else
    {
        for(int x=2;x<limit;x++)
        {
            if(i%x==0)
            {
                flag=0;
                break;
            }
            else
            {
               flag=1;
               continue;
            }

        }
        if(flag==1) return 1;
        else return 0;
    }

}

int main()
{
    int n,limit,test;
    scanf("%d",&n);
    if((n<4) || (n%2==1)) printf("%d",-1);
    else
    {
        limit=(n/2) + 1;
        for(int i=2;i<limit;i++)
        {
            if(primeCheck(i))
            {
                test=n-i;
                if(primeCheck(test))
                {
                    printf("%d,%d",i,test);
                    break;
                }
                else
                {
                    continue;
                }

            }
        }
    }

}
