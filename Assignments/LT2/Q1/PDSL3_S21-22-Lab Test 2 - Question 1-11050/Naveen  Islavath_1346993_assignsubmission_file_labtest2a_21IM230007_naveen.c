#include<stdio.h>
int main()
{
    int n,a[100],i,m,sum=0,j,k,t=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter elements(1 to 20):");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Largest sum:");
    scanf("%d",&m);
    printf("sub-arrays:\n");
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==m)
            {
                t++;
                for(k=i;k<=j;k++)
                    printf("%d ",a[k]);
                printf("\n");
                break;
            }
        }

    }
    if(t==0)
        printf("null");
    return 0;
}