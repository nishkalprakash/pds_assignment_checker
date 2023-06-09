//NAME-PIYUSH KUMAR BURNWAL
//ROLL NO.-22IM10028

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int *a,int n)
{
    if(n==1)
    {
        return a[0];
    }
    int m1,m2;
    m1=max(a,(n/2));
    m2=max(a+(n/2+1),(n-(n/2)));
    if(m1>m2)
        return m1;
    else
        return m2;

}


int main()
{
    int i,n,p,q,maxi,*a;
    printf("Enter the number of random numbers to be generated");
    scanf("%d",&n);
    printf("Enter the value of p and q");
    scanf("%d%d",&p,&q);
    if(n<=0)
    {
        printf("Invalid Value of n");
    }
    else if(p>q)
    {
        printf("p should be less than or equal to q");
    }
    else
    {



        a=( int *) malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            a[i]=rand()%(q-p+1)+p;
        }
        printf("List=[");
        for(i=0;i<n-1;i++)
        {
            printf("%d, ",a[i]);
        }
        printf("%d]",a[n-1]);
        printf("\n");
        maxi=max(a,n);
        printf("Max=%d",maxi);
    }
    free(a);




}
