//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 7
//description:Q1
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int prfct(int n)
{
    int count=0,i;
    for(i=1;i<n;i++)
    {
        if (n%i==0)
        {
            count=count+i;
        }
    }
    if (count==n)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int r,*a,i,n,count=0;
    scanf("%d",&n);
    a = (int*) malloc(n * sizeof(int));
    time_t t;
    srand(time(t));
    for (i=0;i<n;i++)
    {
         r = 2+ rand()%1000;
         *(a+i)=r;
    }
    printf("%d random number array:",n);
    for (i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");

    for (i=0;i<n;i++)
    {
        if (prfct(*(a+i))==1)
        {
            printf("%d ,",*(a+i));
            count++;
        }
    }
    if (count!=0)
        {
            printf("are perfect numbers.");
        }
    if (count==0)
    {
        printf("No perfect number found.");
    }
}


