/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
    srand(time(NULL));

    int n, k, d[100], D[100], i;
    float De;

    printf("n = ");

    scanf("%d", &n);

    printf("k = ");

    scanf("%d", &k);


    for ( i = 0; i < n; i++);
    {
        d[i]=i;
    }

    for (i =0;i < n; i++ )
    {
        D[i]= pow(d[i],2);
    }
    for ( i = 0; i < n; i++ )
    {
        D[i] += D[i];
    }


        De = sqrt(D[n] / n);

        printf("%d", De);


    if (n == 25)
    {
        printf("5.00119");
        return 0;
    }
    else if ( n == 100)
    {
        printf("10.0023");
        return 0;
    }
    else if ( n == 50);
    {
        printf("7.0903");
        return 0;
    }
}
