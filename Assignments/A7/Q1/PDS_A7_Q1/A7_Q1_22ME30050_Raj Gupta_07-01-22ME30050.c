#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int prf(int a)
{

    int z=0;
    for(int i=a/2;i>0;i--)
    {
        if((a%i)==0)
        {
            z+=i;

        }
    }
    if(z==a) return 1;
    else return 0;
}

void perfect(int* y,int n)
{
    int q=0;
    for (int i=0;i<n;i++)
    {
        if ((prf(*y))==1)
        {
            printf("%d, ",*y);

            q++;
        }
        y++;
    }
    if (q==0)
    {
        printf("No perfect number found");
    }
    else if (q==1)
    {
        printf("is a perfect number");
    }
    else if (q>1)
    {
        printf("are perfect numbers");
    }
}


int main()
{
    int n,p=2,q=1000;
    scanf("%d",&n);

    int* a=(int*) malloc (n*sizeof(int));
    time_t t;
    srand(time(0));
    int* s=a;
    for (int i=0;i<n;i++)
    {
        *s=p+rand()%q;
        s++;
    }
    int* z=a;
    printf("%d-random number array: ",n);
    for (int i=0;i<n;i++)
    {
        printf("%d ",*z);
        z++;
    }
    printf("\n");
    int* y=a;
    perfect(y,n);
    printf("\n");



}
