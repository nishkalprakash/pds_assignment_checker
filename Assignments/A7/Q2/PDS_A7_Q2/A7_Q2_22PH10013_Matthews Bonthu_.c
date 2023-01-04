#include <stdio.h>
int main ()

{
    int n;
    printf("enter the vaue of n");
    scanf("%d",&n);
    int ar[n],temp;
    for (int i=0;i<n;i++)
    {
        scanf("%d",ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[j]>9 && ar[j+1]>9)
            {
                if(ar[j]/10 <= ar[j+1]/10)
                {
                    continue;
                }
                else
                {
                    temp=ar[j+1];
                    ar[j+1]=ar[j];
                    ar[j]=temp;
                }
            }
            else
            {
                if(ar[j]<=ar[j+1]/10)
                {
                    continue;
                }
                else
                {
                    temp=ar[j+1];
                    ar[j+1]=ar[j];
                    ar[j]=temp;
                }
            }
            else
            {
                if(ar[j]<=ar[j+1])
                {
                    continue;
                }
                else
                {
                    temp=ar[j+1];
                    ar[j+1]=ar[j];
                    ar[j]=temp;
                   
                }
            }
        }

    }
}                                                                           