/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*The particle can move
either in forward (towards +x), or backward (towards −x)*/

    int N, K, p, D = 0,k1;
    printf("enter the value of (N) = ");
    scanf("%d", &N);
    printf("enter the value of  (K) = ");
    scanf("%d", &K);
    k1=K;

    int t = N, d = 0;

    while (k1 != 0)
    {

        while (t != 0)
        {
            p = rand() & 1 ? -1 : 1;
            d+=p;
            t -= 1;
        }

        D+=d*d;
        t=N;
        d=0;
        k1-=1;
    }

    float De;
    De=sqrt(D/K);
    printf("%f",De);
    return 0;
}
