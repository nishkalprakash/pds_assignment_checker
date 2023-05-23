#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int isPerfectnumber (int num)

{
    int i,sum=1;
    for (int i=2; i<=num/2; i++);
    {
        if(num % i == 0)
            {
                sum +=i;
            }
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main ()
{
    int n,p,q;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int*arr = (int*)malloc(n*sizeof (int))
    int p=2
    int q=1000
    srand(time(NULL));

    for(int i=0;i<n;i++)
    {
        arr[i] = p+rand() % (q-p+1);
    }
    printf("Random Number:\n");
    for(int i= 0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("Perfect Number:\n");
    for (int i= 0; i<n;i++)
    {
        if(isPerfectNumber(arr[i]))
        {
            printf("%d",arr[i]);
        }
    }
    printf("\n");

    return 0;
}
