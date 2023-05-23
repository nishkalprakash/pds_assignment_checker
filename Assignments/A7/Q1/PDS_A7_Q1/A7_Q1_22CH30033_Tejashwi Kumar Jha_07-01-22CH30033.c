#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;
    srand(time(0));

    int n;
    printf("Enter the value of n : \n");
    scanf("%d",&n);

    int* a;

    a = (int*)malloc(n*sizeof(int));

    printf("%d - random number array : ",n);


    int flag = 0;
    for ( int i = 0; i < n ; i++)
    {
        a[i] = 2 + rand()%1000;
        printf("%d ",a[i]);

        int s = 0;
        for (int j = 1; j < a[i] ; j++)
        {
            if ((a[i]%j) == 0)
            {
                s = s+j;
            }
        }
        if (a[i] == s )
        {
            int flag = 1;
            printf("\n%d is a perfect number.",a[i]);
        }

    }
    if (flag == 0)
    {
        printf("\nNo perfect number found.");
    }

    return 0;
}
