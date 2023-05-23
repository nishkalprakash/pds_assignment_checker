#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    srand(time(0));
    int n;
    scanf("%d",&n);
    int *a;

    int i=0;
    a=(int*)malloc(n*sizeof(int));
    printf("%d-random number array: ",n);
    for(i=0;i<n;i++)
    {
        *(a+i)=2+rand()%1000;
        printf("%d\t",*(a+i));
    }
    printf("\n");
    if(n==0)
    {
        printf("no perfect number found");
    }
    int s=0;
    int t=0;
    int k=0;
    int j;
    for(t=0;t<n;t++)
    {
        j=*(a+t);
    for(i=1;i<j;i++)
    {
    if(j%i==0)
    s+=i;
    }
     if(s==j)
    {
        printf("%d is a perfect number \n",j);
        k++;
    }

    s=0;
    }
    if(k==0)
    {
        printf("unfortunately no perfect number found");
    }
    return 0;
}
