#include <stdio.h>
int _largest_sum(int n,int a[])
{
    //here we define sum for sum of elements of current sub array
    //max_sum is declared to assign maximum sum
    //start_index and end_index are declared to store starting and termination index of sub array with maximum sum
    int sum=0,max_sum=0,start_index,end_index;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            for(int k=j;k<=i;k++)
            {
                sum += a[k];
            }
            if(max_sum<sum)
            {
                max_sum= sum;     // if current sum is greater ten previous one than it will
                start_index= j;  //be assign to max_sum
                end_index= i;
            }
            sum=0;
        }
    }
    printf("largest sum= %d\n",max_sum);
    printf("Sub array= ");
    for(int i=start_index;i<=end_index;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n=5,a[21];
    printf("Enter n (in [1,20]): ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    _largest_sum(n,a);
    return 0;
}
