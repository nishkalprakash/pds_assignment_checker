#include<stdio.h>
void main()
{
    int i,n,a[1000], b[1000],j,k=0,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("eneter the length");
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if (a[i]==a[j])
                break;
            if(i==j)
                b[k++]=a[i];
        }
    }
    
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            for(l=0;l<k;l++)
            {
                if((b[i]<=b[j])&&(b[j]<=b[k]))
                    printf("%d %d %d \n",b[i],b[j],b[k]);
            }
        }
    }
}
