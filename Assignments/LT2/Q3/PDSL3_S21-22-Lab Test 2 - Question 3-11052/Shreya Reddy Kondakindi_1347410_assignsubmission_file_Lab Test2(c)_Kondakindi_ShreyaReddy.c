/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
#include<math.h>
int minf(int arr[],int i,int sumCal,int sum)
{
    if(i==0)
        return abs((sum-sumCal)-sumCal);
    return fmin(minf(arr,i-1,sumCal+arr[i-1],sum),minf(arr,i-1,sumCal,sum));
}
int min(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return minf(arr,n,0,sum);
}
int main()
{
    int m,i,arr[7];
    printf("enter the number of teams:");
    scanf("%d",&m);
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("enter student IQ's:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the minimum difference between the two sets is %d",min(arr,n));
    return 0;
}
