#include<stdio.h>
int primecheck (int i)
{
    int j, counter=0;
    for(j=1 ; j<i; j++)
    {
        if(i%j == 0)
        {
            counter++;
        }
    }
    if(counter<2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int fun (int i)
{
   if(primecheck(i)){printf("Prime number");}
   else{printf("Not prime number");}
}

int main()
{
    int n, a;
    scanf("%d", &n);
    int counter=0;
    fun(n);
    printf("\n");


    if(n%2==0)
    {
        if(!primecheck (n))
            for(a=2; a<n; a++)
            {
                if(primecheck(n-a) && primecheck(a))
                {
                    printf("%d, %d\n", a, n-a);
                    break;
                }
            }
        else
        {
            (printf("-1"));
        }
    }
    else
    {
        printf("-1");
    }
}
