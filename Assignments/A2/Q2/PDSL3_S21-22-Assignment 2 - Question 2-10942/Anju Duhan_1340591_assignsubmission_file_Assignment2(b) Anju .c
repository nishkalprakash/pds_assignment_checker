#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
main()
{
int n,k;
printf("\nenter number of steps= ");
scanf("%d",&n);
printf("\nenter number of iterations= ");
scanf("%d",&k);
int d=0;
for(int i=0;i<k;i++)
{
    int r=0;
    for(int j=0;j<n;j++)
{
    int k=rand()& 1? -1:1;
    r+=k;
}
    d=d+(r*r);
}
float de=sqrt(d/k);
printf("\nfinal distance %f",de);
return 0;
}
