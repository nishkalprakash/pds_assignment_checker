//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST 2
//description:Q2

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int max(int *a,int s,int e)
{
    int mid,m1,m2;
    if(s==e)
    {
         return a[s];
    }
    else
    {
        mid=(s+e)/2;
        m1=max(a,s,mid);
        m2=max(a,s,e);
        if(m1>m2)
            return m1;
        else
            return m2;
    }
}

int main()
{
   int n,p,q,*a,r,i,m;
   scanf("%d",&n);
   scanf("%d",&p);
   scanf("%d",&q);
   a = (int*) malloc(n * sizeof(int));
    time_t t;
    srand(time(t));
    for (i=0;i<n;i++)
    {
         r = p+ rand()%q;
         *(a+i)=r;
    }
    printf("List = [");
     for (i=0;i<n;i++)
    {
        printf("%d,",*(a+i));
    }
    printf("]");
    printf("\n"); for (i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
    m=max(a,0,n);
    printf("MAX = %d",m);


}
