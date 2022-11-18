/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
int main()
{
    int n,j,s,m=0,l=0,i,arr[100];
    printf("enter the number in between 1 and 20:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum>max)
            {
                m=i;l=j;
                max=sum;
            }
        }
    }
    printf("largest sum is %d\n",max);
    printf("subarray is:");
    for(s=m;s<=l;s++)
    {
        printf("%d",arr[s]);
    }
    return 0;
}
