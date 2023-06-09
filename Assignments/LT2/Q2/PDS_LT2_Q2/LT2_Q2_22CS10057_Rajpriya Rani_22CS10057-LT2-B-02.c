/*
Name: Rajpriya Rani
roll no; 22CS10057
sec2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int *a,int n,int k)     //recursive function call
{
    int i,t;
    if(k>(n-1))
        {
            return a[n-1];      //returning the max value
        }
    for(i=0;i<(n-k-1);i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    max(a,n,k+1);
}

void main()
{
    int n,i,p,q,m;
    int *a;
    time_t t;
    srand(time(0));
    printf("enter a size of array: ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("enter lower limit and upper limit: ");
        scanf("%d%d",&p,&q);

        if(p<=q)
        {
            a=(int *)malloc(n*sizeof(int));     //dynamic memory allocation
            for(i=0;i<n;i++)
            {
                a[i]=p+ rand()%(q-p+1);        //array generation
            }
            printf("\n numbers generated are: ");
            for(i=0;i<n;i++)
                printf("%d ",a[i]);

            m=max(a,n,0);       //function call

            printf("\n maximum= %d",m);
        }

        else
            printf("value of p should be less than q: ");
    }
    else
        printf("Invalid value of n");
}
