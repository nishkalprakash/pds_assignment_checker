/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    srand(time(NULL));
/* n is number of steps and k is iterations, d is square of distance , D is total distance*/

    int n,k;
    int d=0;
    int D=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter k:\n");
    scanf("%d", &k);
    /* used nested loop , k for outer, n for inner , after every inner loop step added in the distance with sign*/

    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
          int p = rand() & 1 ? -1 : 1;
          d+=p;
        }

        D+= d*d;
        d=0;

    }
/*total distance covered is approx the squareroot of the number of steps*/
    float avg_dist = sqrt(((float)D/k));
    printf("%f", avg_dist);

    return 0;
}

