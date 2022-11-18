// Name --> Anju
// Roll number --> 21CE30007
// Section --> 3
#include<stdio.h>
//function for calculating max alpha.
int max_alpha(int arr[],int n)
{
    int mx=0;
    //loop from last to first
    for(int i=n-1;i>=0;i--)
    {
        int alpha=0;
        for(int j=i-1;j>=0;j--)
            {
                if(arr[j]%arr[i]==0)
                    alpha++;
            }
        if(alpha>mx)
            mx=alpha;
    }
    return mx;
}
int main()
{
    int n,arr[100];
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    //calling function max alpha
    int ans = max_alpha(arr,n);
    printf("Answer = %d",ans);
}
