#include<stdio.h>
#define N 100
int main()
{
    int n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    if(n<=N)
    {
        int ar[n];
        int i;
        printf("Enter the numbers in the array \n");
        for(i=0;i<n;i++)
        {
            int x;scanf("%d",&x);
            ar[i]=x;
        }
        for(i=0;i<n;i++)
        {
            int t=0,p=i,q;
            while(t==0)
            {
                if(ar[p]>0)
                    t = 1;
                q = p;
                p++;
            }
            for(int j = i+1;j<n;j++)
            {
                if(ar[j]<0)
                {
                    t = ar[q];
                    ar[q] = ar[j];
                    ar[j] = t;
                }
            }

        }
        for(i=0;i<n;i++)
        {
            printf("%d  ",ar[i]);
        }
    }
    else
        printf("Error : n > 100");
}
