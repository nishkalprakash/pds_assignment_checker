#include <stdio.h>
#include <time.h>
/*  Section-2
    Name-Rishabh Jain
    Roll no-22MA10048
*/

int main()
{
    int n,p,q,*a,r;
    scanf("%d",&n);
    scanf("%d %d",&p,&q);
    srand(time(0));
    if(n==0) printf("Invalid Value of n");
    else if(q<p) printf("p should be less than or equal to q");
    else
    {
        a = (int *)malloc(n * sizeof(int));

        for(int i=0;i<n;i++)
        {
            r=p+rand()%(q-p+1);
            a[i]=r;
        }
        printf("List = [");
        for(int i=0;i<n-1;i++)
        {
            printf("%d, ",a[i]);
        }
        printf("%d]\n",a[n-1]);
        printf("Max = %d",max(a,n));
    }
}

int cmp(int x,int y)
{
    if(x>=y) return x;
    else return y;
}

int max(int *A,int n)
{
    if (n == 1)
    {
        return A[0];
    }
    else
    {
        return cmp(max(A,n-1),A[n]);
    }
}


