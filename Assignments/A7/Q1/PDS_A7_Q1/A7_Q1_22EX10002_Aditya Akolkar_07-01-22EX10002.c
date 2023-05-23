#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int perfect_num(int n)
{
    int i, sum=0;

    if(n<0)
    {
        return 0;
    }

    else
    {
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum += i;
            }
        }
        if(sum == n)
            return 1;


        return 0;
    }
}


int main()
{
    srand(time(0));
    int *a, n, i, r, count=0;

    scanf("%d", &n);

    a = (int*) malloc(n * sizeof(int));

    for(i=0; i<n; i++)
    {
        r = 2 + rand()%2000;
        *(a+i) = r;
    }

    printf("%d-random number array:",n);

    for(i=0; i<n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        if(perfect_num((*a+i)))
        {
            count++;
        }
    }

    if(count==0) printf("No perfect number found");
    else if(count>0)
    {
        printf("Perfect numbers are");
        for(i=0; i<n; i++)
        {
            if(perfect_num((*a+i)))
            {
                printf("%d",*(a+i));
            }
        }
    }


}
