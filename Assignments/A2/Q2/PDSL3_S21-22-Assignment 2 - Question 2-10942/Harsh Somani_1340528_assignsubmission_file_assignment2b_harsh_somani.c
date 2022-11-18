/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{
    srand(time(NULL));
    int p, k, n, i;
    float d=0;
    p = rand() & 1 ? -1 : 1;
    scanf("%d%d",&n,&k);
    while (i<=k)
    {
        d= d + p*p;
        i++;
    }
    d= sqrt(d/k);
    printf("%f",d);


}
