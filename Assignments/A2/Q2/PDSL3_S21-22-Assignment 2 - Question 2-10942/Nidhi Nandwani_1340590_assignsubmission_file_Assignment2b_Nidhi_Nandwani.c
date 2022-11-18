/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    int p, n, k;
    float De, D=0;
    printf("n= ");
    scanf("%d", &n);
    printf("k= ");
    scanf("%d", &k);
    for(int j=0; j<k;j++)
    {
        p=0;
    for(int i=1; i<=n; i++)
    {
        p += rand() & 1 ? -1 :1; //distance travelled in each iteration
        
    }
    D+=p*p; // computing the sum of squares
    
}
    De = sqrt((D/k));// computing the expected distance
    printf("%f", De);
}