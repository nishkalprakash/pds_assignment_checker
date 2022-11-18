//Sarthak Gupta
//21IM10030
//Section 3
// Test2b
#include<stdio.h>
int maxAlphaValue(int a[],int n)
{
    int alpha=0,temp=0,i,j;
    for(i=0;i<n;i++)
    {
        alpha=0;
        for(j=0;j<i;j++)
        {
            if(a[j]%a[i]==0)
            {
                alpha++;
            }
        }
        if(temp<=alpha)
        {
            temp=alpha;
        }
    }
    return temp;
}
int main()
{
    int n,i;
    int a[40];
    printf("Enter the number of integers in array\n");
    scanf("%d",&n);
    printf("Enter array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Max alpha value=%d",maxAlphaValue(a,n));
    return 0;
}