#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  srand(time(NULL));
    int n,i,k,d,j;
    double sum=0.00;
    printf("n= ");
    scanf("%d",&n);
    printf("k= ");
    scanf("%d",&k);
    printf("\n");
    for(i=0;i<k;i++)
    {
        d=0;
        for(j=0;j<n;j++)
        d+=rand() & 1 ? -1 : 1;
        sum+=(d*d);
    }
  sum=sqrt(sum/k);
  printf("Distance= %lf",sum);
  return(0);
}
