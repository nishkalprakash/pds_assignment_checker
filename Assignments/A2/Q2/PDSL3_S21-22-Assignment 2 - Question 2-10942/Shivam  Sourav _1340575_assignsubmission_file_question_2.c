#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int p,i,j,n,k,s,d=0;
    srand(time(NULL));
    printf("enter the number of steps and number of iterations");
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            p = rand() & 1 ? -1 : 1;
          s+=p;
        }
        d=d+s*s;
    }
    printf("expected distance = %f",sqrt((float)d/k));
}
